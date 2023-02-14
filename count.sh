vers=$(cat versioning.txt)
version=$(expr ${vers} + 1)
rm -rf versioning.txt
echo ${version} >> versioning.txt
#sed 's/${vers}/${version}/' versioning.txt
#echo "${version}" >> versioning.txt