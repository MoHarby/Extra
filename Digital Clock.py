from tkinter import*
import time

app_window = Tk()
app_window.title("Digital Clock")
app_window.geometry("280x100")
app_window.resizable(1, 1)

text_font = ("Times", 48, 'bold')
background = "#1B2631"
foreground = "#363529"
border_width = 25

l = Label(app_window, font=text_font, bg=background, fg="white", bd=border_width)
l.grid(row = 0, column = 1)


def digital_clock():
    time_live = time.strftime("%H:%M:%S")
    l.config(text=time_live)
    l.after(200, digital_clock)


digital_clock()
app_window.mainloop()
