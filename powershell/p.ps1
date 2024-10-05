#  *****************************************************************************
#
#  Script Name: JokeGame.ps1
#  Version:     0.1
#  Author:      Jack Liu
#  Date:        Oct 4th, 2024
#
#  Function:    Joke Game
#
#  *****************************************************************************

Set-Alias print Write-Host
set-alias input Read-Host
Clear-Host

$strUserReply = ""

While ($strUserReply -ne "y"){
    $strUserReply = read-Host "是否开始处理"
}

$strTargetDirectory = "C:\Program Files (x86)\Steam\steamapps\workshop\content\431960"
Set-Location $strTargetDirectory
Write-Host “当前的工作目录是”, (Get-Location).ToString()
# pwd   或Get-Location 在这里会出问题，会扰乱正常的脚本执行顺序


$objDirecotry = Get-ChildItem $strTargetDirectory

print $objDirecotry.Length

$uiCnt = 0

# print $objDirecotry

# $objDirecotry | Get-Member -MemberType Properties

#foreach ($obj in $objDirecotry)
#{
 #   $uiCnt++
#    print $uiCnt, $obj
#}


$strJsonFile = "C:\Program Files (x86)\Steam\steamapps\common\wallpaper_engine\bin\workshopcache.json" 
# $strJsonFile = 'C:\Users\Marisha\Desktop\PSScripts\test.json'
$objJson = Get-Content -Path $strJsonFile -Encoding UTF8 | Convertfrom-json

$wallpapers = $objJson.wallpapers

$wallpapers | ForEach-Object {
    $uiCnt++
    print $uiCnt, $_.workshopid, $_.title
}

$wallpapers | Select-Object workshopid, title, file, filesize, filesizelabel | sort-object -Property filesize | export-csv -NoTypeInformation -Path "wpe.csv" -Encoding UTF8



Write-Host ""
Write-Host "-------------------------------------"
Write-Host "文档已经处理完毕"


# Start-Sleep -Seconds 5
# Clear-Hostm





















# Test string operation

Set-Alias print write-host
Set-alias input read-host


$strOldFilename = '2342432_世界银行_202404123697' -split '_'
$strNewFilename = $strOldFilename[1] + $strOldFilename[2].Substring(0,8) + '.pdf'

print $startOldFilename
print $strNewFilename

cd C:\Users\Marisha\Desktop
$arrCsvFiles = gci *.csv | Select-Object name, length, lastwritetime

$strNewDirectory = '已更改发票名'
$bDirExistence = Test-Path '已更改发票名'
print $bDirExistence

if($bDirExistence -eq 'True') {
    print "文件夹【 $strNewDirectory 】已经存在"
    $bUserReply = input "是否使用并清空该文件夹（Y/N）？"

    if ($bUserReply -eq 'N')
    {
        exit 1
    }
} 
else {
    new-item $strNewDirectory -ItemType directory
    $bDirExistence = Test-Path '已更改发票名'
    if($bDirExistence -eq 'True') 
    {
        print "文件夹 【$strNewDirectory】 创建成功"
    }
}

$arrCsvFiles | out-file -FilePath "originalCsv.txt" -Encoding utf8 




