equire 'csv'

def process_file_with_csv
result_ruby = 0
result_python = 0
CSV.foreach("/home/dani/Desktop/Texnologiq na programiraneto/csv_examples1.csv") do |row|
if row[5] == "ruby"
result_ruby=result_ruby+row[2].to_int

elsif row[5] == "python"
result_python=result_python+row[2].to_int
end
end
p result_ruby
p result_python
end

process_file_with_csv
