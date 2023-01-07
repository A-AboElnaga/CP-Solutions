[Nparticipant, minScoreHolder] = str.split(input()," ")
minScoreHolder = int(minScoreHolder)
scores = str.split(input()," ")
minScore = int(scores[minScoreHolder-1])
rslt =0
for score in scores:
  if int(score)>= minScore and int(score)> 0 :
    rslt+=1
    
print(rslt)