currentDate=`date +"%m-%d-%Y""_""%Hh%Mm%Ss"`
myDate=`basename $1`"_"$currentDate
mkdir backup/$myDate
currentPath=`pwd` 
for i in `ls $1`
do
	re_name=$i"_"`date +"%m-%d-%Y""_""%Hh%Mm%Ss"`
	cd $1
	cp -r $i $currentPath"/backup/"$myDate"/"$re_name

done
cd $currentPath
echo "Backup "$1" completed ""sucessfully."