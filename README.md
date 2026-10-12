# Voxel-FOUR
Open-sourced 4-key macropad, for Osu!Mania/other daily functions. Designed by me (o5oul)
Built for Hack Club Half Life.

<break>
<img width="477" height="652" alt="KiCad PCB" src="https://github.com/user-attachments/assets/a17f6deb-d7d7-4d1b-92b4-b0b2313924c5" />
<img width="402" height="230" alt="KiCad Schematic" src="https://github.com/user-attachments/assets/5b3237a4-da53-4ee4-bd38-322c034a5c1e" />


## **Notes:**
- Case is 3D-printable, purchasing from a reputable 3D printing shop is highly reccomended. PLA, ABS or Resin printing should work.
- PCB can be purchased from JLPCB or PCBway, all parts will be listed + sample purchase links will be given.
- Switches should be PCB mounted, as there is no plate to hold the switches in place.

## **Build instructions:**
- Begin by inserting five (5) M2 screws into the base, then connecting them to the M2 standoffs through the other end.
- Place the assembled PCB (ESP32 should already be soldered) on the standoffs, with optional gummy o-rings between the standoffs if needed.
- Use superglue or any suitable adhesive to add the 5*3mm magnets into the designated holes.
- Screw on the stoppers onto the standoffs, then add the top part of the case to finish.

  <img width="1187" height="592" alt="F360" src="https://github.com/user-attachments/assets/7bc525ac-88b1-47f8-ac59-8f534aa8959b" />

## **Parts List: (For South-East Asia)**
- [4 x Huano Sakura v2 switches](https://www.aliexpress.com/item/1005008819780366.html?spm=a2g0o.productlist.main.2.b9a55dfaYEBNLf&algo_pvid=fca31fea-e6e8-41a6-a7f7-b9bd1384eb48&algo_exp_id=fca31fea-e6e8-41a6-a7f7-b9bd1384eb48-1&pdp_ext_f=%7B%22order%22%3A%22239%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21MYR%2122.04%215.22%21%21%215.24%211.24%21%402101364a17903370173813828e0e0b%2112000046806379242%21sea%21MY%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3Ad5cef2be%3Bm03_new_user%3A-29895%3BpisId%3A5000000216900886&curPageLogUid=wXyMIQGKpfFU&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008819780366%7C_p_origin_prod%3A)
- [10 x 5mm*3mm Neodymium Magnets](https://shopee.com.my/1pcs-5mm-*-0.5mm-1mm-1.5mm-2mm-3mm-4mm-5mm-6mm-Neodymium-Round-Magnet-i.16894736.6316756036)
- [Break-away Male pin headers](https://shopee.com.my/2.54mm-Pin-Header-Female-Male-Single-Row-Header-40P-Connector-Black-White-Red-Yellow-Green-Blue-i.1165814930.24876384005?xptdk=10d7489f-07a1-4f78-a3af-0dc13cd74cc3)
- [*Optional* 4 x V2 Keysporon 0.3mm Switch Flims](https://shopee.com.my/Switch-Film-for-customize-Mechanical-Keyboard-Switches-i.1380285245.43151253319?xptdk=cad9a151-bc72-4aa7-80a2-bf2111954767)
- [Mill-Max hotswap sockets 1.2mm, 3 x 30pcs](https://shopee.com.my/-10-pieces-Hotswap-Socket-PCB-rivet-Turn-solder-circuit-into-Hotswap-circuit-for-mechanical-keyboard-i.1663832391.51200299904?xptdk=c8786eec-bfa9-4e2a-93ef-9aa935954c5d)
- [SEEED XIAO ESP32-C3](https://shopee.com.my/Original-authentic-Seeed-Studio-XIAO-ESP32C3-xiahttps://shopee.com.my/-Luminense-PCB-Standoff-Brass-Standoff-M2-M3-120-pcs-300-pcs-set-i.63040732.15203389154?xptdk=49b2e936-5e74-4f0d-bcfd-47e3fcb39e03o-esp32-c3-thumb-WIFI-development-board-i.542060608.25985797324?extraParams=%7B%22display_model_id%22%3A223198452291%2C%22model_selection_logic%22%3A3%7D)
- [5 x Gummy O-Rings](https://shopee.com.my/500pcs-Flat-Washer-Gasket-Set-M2-M2.5-M3-M4-M5-M6-M8-Plastic-Sealing-O-rings-Plane-Spacer-Assortment-Kit-Fastener-i.189747092.23569025114?xptdk=b16dd1a7-6ccd-48fc-b045-5951e2fde2c4)
- [M2 Brass Standoffs]()

## **Recommended PCB Settings (JLCPCB):**
[JLCPCB Website](jlcpcb.com)
- Base Material: FR-4
- Layers: 2
- Product Type: Industrial/Consumer Electronics
- Deburring/Edge rounding: Yes
- Different Design: 1
- Delivery Format: Single PCB
- PCB Thickness: 1.6mm
- PCB Color: Black (Can be changed based on preference)
- Silkscreen: White
- Material Type: FR$ TG135
- Surface Finish: HASL (with lead)

## **Advanced:**

- Outer Copper Weight: 1oz
- Via Covering: Tented
- Via Plating Method: Not Specified
- Min via hole size/diameter: 0.3mm(0.4/0.45mm)
- Board Outline Tolerance: +-0.2mm(regular)
- Mark on PCB: Remove
- Gold Fingers: No
- Castellated Holes: No
- Edge Plating: No
- Blind Slots: No
- UL Marking: No
- Humidity Indicator Card: No
