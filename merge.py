out_filename = 'merged_cgout.cc'
 
files = [
    'includes.h',
    'Referee.h',
    'AI.h',
    'BasicAI.h',
    'Referee.cc',
    'AI.cc',
    'BasicAI.cc',
    'CGMain.cc',
]
 
header=''
 
token = '// INCLUDE'
 
 
f_out = open(out_filename, 'w')
f_out.write(header)
 
for f in files:
    f_in = open(f, 'r')
 
    copying = False
    for l in f_in:
        if not copying and l.strip() != token:
            continue
        elif l.strip() == token:
            copying = not copying
        else:
            f_out.write(l)
    f_in.close()
   
f_out.close()