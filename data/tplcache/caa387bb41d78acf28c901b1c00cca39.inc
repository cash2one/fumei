<li> <a href="[field:arcurl/]">
            <div class="view">
              <div class="date"> <big>[field:pubdate function="MyDate('d',@me)"/]</big><span>[field:pubdate function="MyDate('Y-m',@me)"/]</span> </div>
              <div class="img">
                <table>
                  <tbody>
                    <tr>
                      <td><img src="[field:litpic/]" style="width: 160px; height: 110px; margin-top: -30px;"></td>
                    </tr>
                  </tbody>
                </table>
              </div>
              <h4 style="margin-top: 10px;">[field:title/]</h4>
            </div>
            <div class="mask" style="background: #[field:colour/] none repeat scroll 0 0;">
              <div class="img"> <img src="[field:litpic/]" style="width: 160px; height: 110px; margin-top: -30px;"> </div>
              <h2>[field:title/]</h2>
              <hr>
              <p>[field:description function="cn_substr(@me,130)"/]......</p>
            </div>
            </a> </li>