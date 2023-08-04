#!/usr/bin/env ruby
i = ARGV[0].scan(/from:(.*?)\]/)
j = ARGV[0].scan(/to:(.*?)\]/)
k = ARGV[0].scan(/flags:(.*?)\]/)
puts [i, j, k].join(',')
