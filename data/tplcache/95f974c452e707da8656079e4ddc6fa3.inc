<li id="projectitem_[field:global name=autoindex runphp=" yes "]@me=@me-1;[/field:global]" class="projectitem wow">
												<a href="[field:arcurl/]" class="projectitem_content">
													<div class="projectitem_wrapper">
														<div class="project_img">
															<img src="[field:litpic/]" width="650" height="385" />
														</div>
														<div class="project_info">
															<div>
																<p class="title">[field:title/]</p>
															</div>
														</div>
													</div>
												</a>
											</li>
											
										</ul>
									</div>
									<!--wrapper-->
								</div>
								<!--projectSubList-->{dede:type typeid='1'}
								<a href="[field:typelink /]" class="more wow">MORE<i class="fa fa-angle-right"></i></a>{/dede:type}
							</div>
							<!--projectlist-->
							<div class="clear"></div>
						</div>
					</div>
					
					
					
				</div>
				<div id="mnews" class="module">
					<div class="bgmask"></div>
					<div class="content layoutnone">
						<div class="header wow">
							<p class="title">{dede:type typeid='10'}[field:typename /]{/dede:type}</p>
							<p class="subtitle">News Center</p>
						</div>
						<div class="module-content" id="newslist">
							<div class="wrapper">
							<ul class="content_list" data-options-sliders="3" data-options-margin="40" data-options-ease="1" data-options-speed="0.5" data-options-mode="horizontal" data-options-wheel="0">{dede:arclist row='3' titlelen='50' typeid='10'}
							<li id="newsitem_[field:global name=autoindex runphp=" yes "]@me=@me-1;[/field:global]" class='wow newstitem left'>
							<a class="newscontent" target="_blank" href="[field:arcurl/]">
							<div class="news_wrapper">
							<div class="newsbody">
							<p class="date">
							<span class="md">[field:pubdate function='strftime("%Y",@me)'/]
							<span>-</span></span>
							<span class="year">[field:pubdate function='strftime("%m-%d",@me)'/]</span></p>
							<p class="title">[field:title/]</p>
							<div class="separator"></div>
							<p class="description">[field:description function='cn_substr(@me,250)'/]...</p></div>
							</div>
							<div class="newsimg" style="background-image:url([field:litpic/])"></div>
							</a>
							<a href="[field:arcurl/]" target="_blank" class="details">more
							<i class="fa fa-angle-right"></i></a>
							</li>