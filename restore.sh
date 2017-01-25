DIRECTORY="recovered"
if [ ! -d "$DIRECTORY" ]; then
  mkdir recovered
fi
cd recovered
FILE=$1
if [ -d $FILE ];then
	rm -rf $FILE
fi
copyThis=`ls -t ../backup | head -1`
cp -r ../backup/$copyThis $FILE
echo $FILE" has been restored to ./recovered/"$1