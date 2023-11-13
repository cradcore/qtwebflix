#!/bin/bash

#script to download and extract widevine compements, tested on unbutu 18.10


#Uninstall the files

if [ "$1" == "uninstall" ]; then
    echo "Uninstalling libwidevinecdmadapter.so"
    rm /usr/lib/x86_64-linux-gnu/qt5/plugins/ppapi/libwidevinecdmadapter.so
    echo "Uninstalling libwidevinecdm.so"
    rm /usr/lib/x86_64-linux-gnu/qt5/plugins/ppapi/libwidevinecdm.so
    exit
fi




#Create temp directory
tmp_dir=$(mktemp -d)
echo $tmp_dir

#set urls and checksums
url1="https://www.slimjet.com/chrome/download-chrome.php?file=files%2F104.0.5112.102%2Fgoogle-chrome-stable_current_amd64.deb
file1=$(basename "$url1")
sha256_1=("5c13ccf359afc2f98d28513e51b15e3f1e88c4c34f8ac2b83983f2f246ac42b2"

#Download Files
wget $url1 -P $tmp_dir
#Get checksums from files
local_sha2561=$(sha256sum $tmp_dir/"$file1"| awk '{print $1}')

#check checksums for first file
if [ "$sha256_1" == "$local_sha2561" ]; then
    echo "Checksums match for $file1"
else
    echo "Checksums do not match for '$file1' exiting!"
    exit
fi



cd $tmp_dir

#extract the files
ar -vx $tmp_dir/$file1 
#unzip $tmp_dir/$file2
tar -xvf $tmp_dir/data.tar.xz --strip-components 4 ./opt/google/chrome/libwidevinecdmadapter.so \
                                                   ./opt/google/chrome/libwidevinecdm.so

#install the files
echo "Installing libwidevinecdmadapter.so to /usr/lib/x86_64-linux-gnu/qt5/plugins/ppapi/"
install -Dm644 $tmp_dir/libwidevinecdmadapter.so -t /usr/lib/x86_64-linux-gnu/qt5/plugins/ppapi/
echo "Installing libwidevinecdm.so to /usr/lib/x86_64-linux-gnu/qt5/plugins/ppapi/"
install -Dm644 $tmp_dir/libwidevinecdm.so -t /usr/lib/x86_64-linux-gnu/qt5/plugins/ppapi/

