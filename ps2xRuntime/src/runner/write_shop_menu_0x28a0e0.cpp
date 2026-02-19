#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: write_shop_menu
// Address: 0x28a0e0 - 0x28a7a8
void write_shop_menu_0x28a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28a0e0u;

    // 0x28a0e0: 0x27bdff20
    ctx->pc = 0x28a0e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x28a0e4: 0xffbf00d0
    ctx->pc = 0x28a0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x28a0e8: 0xffbe00c0
    ctx->pc = 0x28a0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x28a0ec: 0xffb700b0
    ctx->pc = 0x28a0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x28a0f0: 0xffb600a0
    ctx->pc = 0x28a0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x28a0f4: 0xffb50090
    ctx->pc = 0x28a0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x28a0f8: 0xffb40080
    ctx->pc = 0x28a0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x28a0fc: 0xffb30070
    ctx->pc = 0x28a0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x28a100: 0xffb20060
    ctx->pc = 0x28a100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x28a104: 0xffb10050
    ctx->pc = 0x28a104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x28a108: 0xffb00040
    ctx->pc = 0x28a108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x28a10c: 0x80f02d
    ctx->pc = 0x28a10cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a110: 0x24032b00
    ctx->pc = 0x28a110u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x28a114: 0x3c31818
    ctx->pc = 0x28a114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28a118: 0x3c020032
    ctx->pc = 0x28a118u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28a11c: 0x24421bc0
    ctx->pc = 0x28a11cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x28a120: 0x621821
    ctx->pc = 0x28a120u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a124: 0xafa30014
    ctx->pc = 0x28a124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x28a128: 0xafa0001c
    ctx->pc = 0x28a128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x28a12c: 0xafa00028
    ctx->pc = 0x28a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x28a130: 0xafa0002c
    ctx->pc = 0x28a130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x28a134: 0x24030002
    ctx->pc = 0x28a134u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x28a138: 0x38a20001
    ctx->pc = 0x28a138u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 1));
    // 0x28a13c: 0x60b82d
    ctx->pc = 0x28a13cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a140: 0xa2b80b
    ctx->pc = 0x28a140u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 23, GPR_U32(ctx, 5));
    // 0x28a144: 0x3c020035
    ctx->pc = 0x28a144u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28a148: 0x2442c130
    ctx->pc = 0x28a148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951216));
    // 0x28a14c: 0x1e8200
    ctx->pc = 0x28a14cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 30), 8));
    // 0x28a150: 0x2028021
    ctx->pc = 0x28a150u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28a154: 0x8e020000
    ctx->pc = 0x28a154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28a158: 0x2403ffff
    ctx->pc = 0x28a158u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a15c: 0x21027
    ctx->pc = 0x28a15cu;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x28a160: 0xc0a27ce
    ctx->pc = 0x28A160u;
    SET_GPR_U32(ctx, 31, 0x28A168u);
    ctx->pc = 0x28A164u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 23, GPR_U32(ctx, 3));
    ctx->pc = 0x289F38u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_shop_ypos_0x289f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A168u; }
    }
    if (ctx->pc != 0x28A168u) { return; }
    ctx->pc = 0x28A168u;
    // 0x28a168: 0x3c03003c
    ctx->pc = 0x28a168u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x28a16c: 0x24633dd0
    ctx->pc = 0x28a16cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15824));
    // 0x28a170: 0x1e1080
    ctx->pc = 0x28a170u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 30), 2));
    // 0x28a174: 0x431021
    ctx->pc = 0x28a174u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a178: 0xac400000
    ctx->pc = 0x28a178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28a17c: 0x3c030035
    ctx->pc = 0x28a17cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28a180: 0x3c020035
    ctx->pc = 0x28a180u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28a184: 0x8c42b44c
    ctx->pc = 0x28a184u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947916)));
    // 0x28a188: 0x8c64b448
    ctx->pc = 0x28a188u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294947912)));
    // 0x28a18c: 0x441023
    ctx->pc = 0x28a18cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28a190: 0x21fc2
    ctx->pc = 0x28a190u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x28a194: 0x431021
    ctx->pc = 0x28a194u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a198: 0x21043
    ctx->pc = 0x28a198u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x28a19c: 0x441021
    ctx->pc = 0x28a19cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28a1a0: 0xafa20020
    ctx->pc = 0x28a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x28a1a4: 0x8e100000
    ctx->pc = 0x28a1a4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28a1a8: 0x501021
    ctx->pc = 0x28a1a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28a1ac: 0x82102a
    ctx->pc = 0x28a1acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x28a1b0: 0x10400002
    ctx->pc = 0x28A1B0u;
    {
        const bool branch_taken_0x28a1b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A1B4u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        if (branch_taken_0x28a1b0) {
            ctx->pc = 0x28A1BCu;
            goto label_28a1bc;
        }
    }
    ctx->pc = 0x28A1B8u;
    // 0x28a1b8: 0xafa40020
    ctx->pc = 0x28a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_28a1bc:
    // 0x28a1bc: 0x3c040035
    ctx->pc = 0x28a1bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28a1c0: 0x2484c130
    ctx->pc = 0x28a1c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951216));
    // 0x28a1c4: 0x3c020035
    ctx->pc = 0x28a1c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28a1c8: 0x8c42b52c
    ctx->pc = 0x28a1c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948140)));
    // 0x28a1cc: 0x2442ffff
    ctx->pc = 0x28a1ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28a1d0: 0x21080
    ctx->pc = 0x28a1d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x28a1d4: 0x1e1a00
    ctx->pc = 0x28a1d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 30), 8));
    // 0x28a1d8: 0x431021
    ctx->pc = 0x28a1d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a1dc: 0x441021
    ctx->pc = 0x28a1dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28a1e0: 0x8c440000
    ctx->pc = 0x28a1e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a1e4: 0x8fa30020
    ctx->pc = 0x28a1e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a1e8: 0x641021
    ctx->pc = 0x28a1e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28a1ec: 0x3c030035
    ctx->pc = 0x28a1ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28a1f0: 0x8c63b44c
    ctx->pc = 0x28a1f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294947916)));
    // 0x28a1f4: 0x43102a
    ctx->pc = 0x28a1f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x28a1f8: 0x10400002
    ctx->pc = 0x28A1F8u;
    {
        const bool branch_taken_0x28a1f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A1FCu;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x28a1f8) {
            ctx->pc = 0x28A204u;
            goto label_28a204;
        }
    }
    ctx->pc = 0x28A200u;
    // 0x28a200: 0xafa30020
    ctx->pc = 0x28a200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_28a204:
    // 0x28a204: 0x3c020035
    ctx->pc = 0x28a204u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28a208: 0x8c42b52c
    ctx->pc = 0x28a208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948140)));
    // 0x28a20c: 0x18400130
    ctx->pc = 0x28A20Cu;
    {
        const bool branch_taken_0x28a20c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28A210u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28a20c) {
            ctx->pc = 0x28A6D0u;
            goto label_28a6d0;
        }
    }
    ctx->pc = 0x28A214u;
    // 0x28a214: 0x1eb200
    ctx->pc = 0x28a214u;
    SET_GPR_U32(ctx, 22, SLL32(GPR_U32(ctx, 30), 8));
    // 0x28a218: 0x3c02003c
    ctx->pc = 0x28a218u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28a21c: 0x24423dd0
    ctx->pc = 0x28a21cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15824));
    // 0x28a220: 0x1e2080
    ctx->pc = 0x28a220u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 30), 2));
    // 0x28a224: 0xafa40030
    ctx->pc = 0x28a224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x28a228: 0x821021
    ctx->pc = 0x28a228u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28a22c: 0xafa20034
    ctx->pc = 0x28a22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x28a230: 0x3c030035
    ctx->pc = 0x28a230u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28a234: 0x0
    ctx->pc = 0x28a234u;
    // NOP
label_28a238:
    // 0x28a238: 0x24020050
    ctx->pc = 0x28a238u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x28a23c: 0x2621018
    ctx->pc = 0x28a23cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28a240: 0x8c63b528
    ctx->pc = 0x28a240u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294948136)));
    // 0x28a244: 0x43a821
    ctx->pc = 0x28a244u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a248: 0x131880
    ctx->pc = 0x28a248u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x28a24c: 0x761821
    ctx->pc = 0x28a24cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x28a250: 0x3c050035
    ctx->pc = 0x28a250u;
    SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
    // 0x28a254: 0x24a5b530
    ctx->pc = 0x28a254u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948144));
    // 0x28a258: 0x651021
    ctx->pc = 0x28a258u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28a25c: 0x8c520000
    ctx->pc = 0x28a25cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a260: 0x3c020035
    ctx->pc = 0x28a260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28a264: 0x2442c130
    ctx->pc = 0x28a264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951216));
    // 0x28a268: 0x621021
    ctx->pc = 0x28a268u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a26c: 0x8c420000
    ctx->pc = 0x28a26cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a270: 0x8fa40020
    ctx->pc = 0x28a270u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a274: 0x828021
    ctx->pc = 0x28a274u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28a278: 0x3c020035
    ctx->pc = 0x28a278u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28a27c: 0x2442b930
    ctx->pc = 0x28a27cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949168));
    // 0x28a280: 0x621821
    ctx->pc = 0x28a280u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a284: 0x8c640000
    ctx->pc = 0x28a284u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a288: 0x18800009
    ctx->pc = 0x28A288u;
    {
        const bool branch_taken_0x28a288 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x28A28Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
        if (branch_taken_0x28a288) {
            ctx->pc = 0x28A2B0u;
            goto label_28a2b0;
        }
    }
    ctx->pc = 0x28A290u;
    // 0x28a290: 0x8ca2ffbc
    ctx->pc = 0x28a290u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294967228)));
    // 0x28a294: 0x821023
    ctx->pc = 0x28a294u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28a298: 0x4410002
    ctx->pc = 0x28A298u;
    {
        const bool branch_taken_0x28a298 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28A29Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x28a298) {
            ctx->pc = 0x28A2A4u;
            goto label_28a2a4;
        }
    }
    ctx->pc = 0x28A2A0u;
    // 0x28a2a0: 0xac600000
    ctx->pc = 0x28a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_28a2a4:
    // 0x28a2a4: 0x3c0200ff
    ctx->pc = 0x28a2a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
    // 0x28a2a8: 0x10000002
    ctx->pc = 0x28A2A8u;
    {
        const bool branch_taken_0x28a2a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A2ACu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x28a2a8) {
            ctx->pc = 0x28A2B4u;
            goto label_28a2b4;
        }
    }
    ctx->pc = 0x28A2B0u;
label_28a2b0:
    // 0x28a2b0: 0xafa00018
    ctx->pc = 0x28a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_28a2b4:
    // 0x28a2b4: 0x8fa30014
    ctx->pc = 0x28a2b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x28a2b8: 0x8c620984
    ctx->pc = 0x28a2b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 2436)));
    // 0x28a2bc: 0x2621026
    ctx->pc = 0x28a2bcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28a2c0: 0x2c420001
    ctx->pc = 0x28a2c0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x28a2c4: 0xafa20024
    ctx->pc = 0x28a2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x28a2c8: 0x240202d
    ctx->pc = 0x28a2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2cc: 0x282d
    ctx->pc = 0x28a2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2d0: 0x27a60010
    ctx->pc = 0x28a2d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x28a2d4: 0xc0b0e24
    ctx->pc = 0x28A2D4u;
    SET_GPR_U32(ctx, 31, 0x28A2DCu);
    ctx->pc = 0x28A2D8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3890u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitGetPos_0x2c3890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A2DCu; }
    }
    if (ctx->pc != 0x28A2DCu) { return; }
    ctx->pc = 0x28A2DCu;
    // 0x28a2dc: 0x8fa20010
    ctx->pc = 0x28a2dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a2e0: 0x508823
    ctx->pc = 0x28a2e0u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28a2e4: 0x26220001
    ctx->pc = 0x28a2e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x28a2e8: 0x2c420003
    ctx->pc = 0x28a2e8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x28a2ec: 0x14400020
    ctx->pc = 0x28A2ECu;
    {
        const bool branch_taken_0x28a2ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28A2F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28a2ec) {
            ctx->pc = 0x28A370u;
            goto label_28a370;
        }
    }
    ctx->pc = 0x28A2F4u;
    // 0x28a2f4: 0x6e10003
    ctx->pc = 0x28A2F4u;
    {
        const bool branch_taken_0x28a2f4 = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x28A2F8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28a2f4) {
            ctx->pc = 0x28A304u;
            goto label_28a304;
        }
    }
    ctx->pc = 0x28A2FCu;
    // 0x28a2fc: 0x10000018
    ctx->pc = 0x28A2FCu;
    {
        const bool branch_taken_0x28a2fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A300u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
        if (branch_taken_0x28a2fc) {
            ctx->pc = 0x28A360u;
            goto label_28a360;
        }
    }
    ctx->pc = 0x28A304u;
label_28a304:
    // 0x28a304: 0x8fa40034
    ctx->pc = 0x28a304u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x28a308: 0xac850000
    ctx->pc = 0x28a308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x28a30c: 0x8fa30010
    ctx->pc = 0x28a30cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a310: 0x203102a
    ctx->pc = 0x28a310u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x28a314: 0x10400007
    ctx->pc = 0x28A314u;
    {
        const bool branch_taken_0x28a314 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A318u;
        SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
        if (branch_taken_0x28a314) {
            ctx->pc = 0x28A334u;
            goto label_28a334;
        }
    }
    ctx->pc = 0x28A31Cu;
    // 0x28a31c: 0x8c82ffbc
    ctx->pc = 0x28a31cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294967228)));
    // 0x28a320: 0x2e21018
    ctx->pc = 0x28a320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28a324: 0x621023
    ctx->pc = 0x28a324u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a328: 0xafa20010
    ctx->pc = 0x28a328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x28a32c: 0x10000008
    ctx->pc = 0x28A32Cu;
    {
        const bool branch_taken_0x28a32c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A330u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
        if (branch_taken_0x28a32c) {
            ctx->pc = 0x28A350u;
            goto label_28a350;
        }
    }
    ctx->pc = 0x28A334u;
label_28a334:
    // 0x28a334: 0x70102a
    ctx->pc = 0x28a334u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
    // 0x28a338: 0x10400009
    ctx->pc = 0x28A338u;
    {
        const bool branch_taken_0x28a338 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A33Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294967228)));
        if (branch_taken_0x28a338) {
            ctx->pc = 0x28A360u;
            goto label_28a360;
        }
    }
    ctx->pc = 0x28A340u;
    // 0x28a340: 0x2e22018
    ctx->pc = 0x28a340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28a344: 0x831021
    ctx->pc = 0x28a344u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28a348: 0xafa20010
    ctx->pc = 0x28a348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x28a34c: 0x202102a
    ctx->pc = 0x28a34cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
label_28a350:
    // 0x28a350: 0x54400001
    ctx->pc = 0x28A350u;
    {
        const bool branch_taken_0x28a350 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28a350) {
            ctx->pc = 0x28A354u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
            ctx->pc = 0x28A358u;
            goto label_28a358;
        }
    }
    ctx->pc = 0x28A358u;
label_28a358:
    // 0x28a358: 0x24050001
    ctx->pc = 0x28a358u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a35c: 0xafa5001c
    ctx->pc = 0x28a35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
label_28a360:
    // 0x28a360: 0x240202d
    ctx->pc = 0x28a360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a364: 0xc0b0dc6
    ctx->pc = 0x28A364u;
    SET_GPR_U32(ctx, 31, 0x28A36Cu);
    ctx->pc = 0x28A368u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x2C3718u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetY_0x2c3718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A36Cu; }
    }
    if (ctx->pc != 0x28A36Cu) { return; }
    ctx->pc = 0x28A36Cu;
    // 0x28a36c: 0x3c020035
    ctx->pc = 0x28a36cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28a370:
    // 0x28a370: 0x8c43b448
    ctx->pc = 0x28a370u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294947912)));
    // 0x28a374: 0x3c040035
    ctx->pc = 0x28a374u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28a378: 0x8c82b444
    ctx->pc = 0x28a378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294947908)));
    // 0x28a37c: 0x621823
    ctx->pc = 0x28a37cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a380: 0x8fa20010
    ctx->pc = 0x28a380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a384: 0x43102a
    ctx->pc = 0x28a384u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x28a388: 0x1040000c
    ctx->pc = 0x28A388u;
    {
        const bool branch_taken_0x28a388 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A38Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 256));
        if (branch_taken_0x28a388) {
            ctx->pc = 0x28A3BCu;
            goto label_28a3bc;
        }
    }
    ctx->pc = 0x28A390u;
    // 0x28a390: 0x131080
    ctx->pc = 0x28a390u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x28a394: 0x561021
    ctx->pc = 0x28a394u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28a398: 0x3c050035
    ctx->pc = 0x28a398u;
    SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
    // 0x28a39c: 0x24a5bd30
    ctx->pc = 0x28a39cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950192));
    // 0x28a3a0: 0x451021
    ctx->pc = 0x28a3a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28a3a4: 0x8c420000
    ctx->pc = 0x28a3a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a3a8: 0x24030001
    ctx->pc = 0x28a3a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a3ac: 0x8fa40028
    ctx->pc = 0x28a3acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28a3b0: 0x82180b
    ctx->pc = 0x28a3b0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x28a3b4: 0x10000050
    ctx->pc = 0x28A3B4u;
    {
        const bool branch_taken_0x28a3b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A3B8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        if (branch_taken_0x28a3b4) {
            ctx->pc = 0x28A4F8u;
            goto label_28a4f8;
        }
    }
    ctx->pc = 0x28A3BCu;
label_28a3bc:
    // 0x28a3bc: 0x3c020035
    ctx->pc = 0x28a3bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28a3c0: 0x8fa40010
    ctx->pc = 0x28a3c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a3c4: 0x8c43b448
    ctx->pc = 0x28a3c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294947912)));
    // 0x28a3c8: 0x83102a
    ctx->pc = 0x28a3c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x28a3cc: 0x10400018
    ctx->pc = 0x28A3CCu;
    {
        const bool branch_taken_0x28a3cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A3D0u;
        SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x28a3cc) {
            ctx->pc = 0x28A430u;
            goto label_28a430;
        }
    }
    ctx->pc = 0x28A3D4u;
    // 0x28a3d4: 0x240201fe
    ctx->pc = 0x28a3d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 510));
    // 0x28a3d8: 0x2228018
    ctx->pc = 0x28a3d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28a3dc: 0x3c050035
    ctx->pc = 0x28a3dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
    // 0x28a3e0: 0x8ca2b444
    ctx->pc = 0x28a3e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294947908)));
    // 0x28a3e4: 0x202001a
    ctx->pc = 0x28a3e4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x28a3e8: 0x1812
    ctx->pc = 0x28a3e8u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x28a3ec: 0x50400001
    ctx->pc = 0x28A3ECu;
    {
        const bool branch_taken_0x28a3ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28a3ec) {
            ctx->pc = 0x28A3F0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x28A3F4u;
            goto label_28a3f4;
        }
    }
    ctx->pc = 0x28A3F4u;
label_28a3f4:
    // 0x28a3f4: 0x60802d
    ctx->pc = 0x28a3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3f8: 0x2a030100
    ctx->pc = 0x28a3f8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 256));
    // 0x28a3fc: 0x240200ff
    ctx->pc = 0x28a3fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a400: 0x43800a
    ctx->pc = 0x28a400u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    // 0x28a404: 0x131080
    ctx->pc = 0x28a404u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x28a408: 0x561021
    ctx->pc = 0x28a408u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28a40c: 0x3c030035
    ctx->pc = 0x28a40cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28a410: 0x2463bd30
    ctx->pc = 0x28a410u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294950192));
    // 0x28a414: 0x431021
    ctx->pc = 0x28a414u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a418: 0x8c420000
    ctx->pc = 0x28a418u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a41c: 0x24040001
    ctx->pc = 0x28a41cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a420: 0x8fa50028
    ctx->pc = 0x28a420u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28a424: 0xa2200b
    ctx->pc = 0x28a424u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
    // 0x28a428: 0x10000033
    ctx->pc = 0x28A428u;
    {
        const bool branch_taken_0x28a428 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A42Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
        if (branch_taken_0x28a428) {
            ctx->pc = 0x28A4F8u;
            goto label_28a4f8;
        }
    }
    ctx->pc = 0x28A430u;
label_28a430:
    // 0x28a430: 0x3c020035
    ctx->pc = 0x28a430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28a434: 0x8c43b44c
    ctx->pc = 0x28a434u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294947916)));
    // 0x28a438: 0x3c040035
    ctx->pc = 0x28a438u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28a43c: 0x8c82b444
    ctx->pc = 0x28a43cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294947908)));
    // 0x28a440: 0x621821
    ctx->pc = 0x28a440u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a444: 0x8fa20010
    ctx->pc = 0x28a444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a448: 0x62182a
    ctx->pc = 0x28a448u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x28a44c: 0x1060000c
    ctx->pc = 0x28A44Cu;
    {
        const bool branch_taken_0x28a44c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A450u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 256));
        if (branch_taken_0x28a44c) {
            ctx->pc = 0x28A480u;
            goto label_28a480;
        }
    }
    ctx->pc = 0x28A454u;
    // 0x28a454: 0x131080
    ctx->pc = 0x28a454u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x28a458: 0x561021
    ctx->pc = 0x28a458u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28a45c: 0x3c050035
    ctx->pc = 0x28a45cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
    // 0x28a460: 0x24a5bd30
    ctx->pc = 0x28a460u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950192));
    // 0x28a464: 0x451021
    ctx->pc = 0x28a464u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28a468: 0x8c420000
    ctx->pc = 0x28a468u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a46c: 0x24030001
    ctx->pc = 0x28a46cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a470: 0x8fa4002c
    ctx->pc = 0x28a470u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x28a474: 0x82180b
    ctx->pc = 0x28a474u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x28a478: 0x1000001f
    ctx->pc = 0x28A478u;
    {
        const bool branch_taken_0x28a478 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A47Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        if (branch_taken_0x28a478) {
            ctx->pc = 0x28A4F8u;
            goto label_28a4f8;
        }
    }
    ctx->pc = 0x28A480u;
label_28a480:
    // 0x28a480: 0x3c020035
    ctx->pc = 0x28a480u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28a484: 0x8fa40010
    ctx->pc = 0x28a484u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a488: 0x8c43b44c
    ctx->pc = 0x28a488u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294947916)));
    // 0x28a48c: 0x64102a
    ctx->pc = 0x28a48cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x28a490: 0x10400018
    ctx->pc = 0x28A490u;
    {
        const bool branch_taken_0x28a490 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A494u;
        SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x28a490) {
            ctx->pc = 0x28A4F4u;
            goto label_28a4f4;
        }
    }
    ctx->pc = 0x28A498u;
    // 0x28a498: 0x240201fe
    ctx->pc = 0x28a498u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 510));
    // 0x28a49c: 0x2228018
    ctx->pc = 0x28a49cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28a4a0: 0x3c050035
    ctx->pc = 0x28a4a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
    // 0x28a4a4: 0x8ca2b444
    ctx->pc = 0x28a4a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294947908)));
    // 0x28a4a8: 0x202001a
    ctx->pc = 0x28a4a8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x28a4ac: 0x1812
    ctx->pc = 0x28a4acu;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x28a4b0: 0x50400001
    ctx->pc = 0x28A4B0u;
    {
        const bool branch_taken_0x28a4b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28a4b0) {
            ctx->pc = 0x28A4B4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x28A4B8u;
            goto label_28a4b8;
        }
    }
    ctx->pc = 0x28A4B8u;
label_28a4b8:
    // 0x28a4b8: 0x60802d
    ctx->pc = 0x28a4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a4bc: 0x2a030100
    ctx->pc = 0x28a4bcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 256));
    // 0x28a4c0: 0x240200ff
    ctx->pc = 0x28a4c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a4c4: 0x43800a
    ctx->pc = 0x28a4c4u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    // 0x28a4c8: 0x131080
    ctx->pc = 0x28a4c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x28a4cc: 0x561021
    ctx->pc = 0x28a4ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28a4d0: 0x3c030035
    ctx->pc = 0x28a4d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28a4d4: 0x2463bd30
    ctx->pc = 0x28a4d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294950192));
    // 0x28a4d8: 0x431021
    ctx->pc = 0x28a4d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a4dc: 0x8c420000
    ctx->pc = 0x28a4dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a4e0: 0x24040001
    ctx->pc = 0x28a4e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a4e4: 0x8fa5002c
    ctx->pc = 0x28a4e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x28a4e8: 0xa2200b
    ctx->pc = 0x28a4e8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
    // 0x28a4ec: 0x10000002
    ctx->pc = 0x28A4ECu;
    {
        const bool branch_taken_0x28a4ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A4F0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        if (branch_taken_0x28a4ec) {
            ctx->pc = 0x28A4F8u;
            goto label_28a4f8;
        }
    }
    ctx->pc = 0x28A4F4u;
label_28a4f4:
    // 0x28a4f4: 0x802d
    ctx->pc = 0x28a4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a4f8:
    // 0x28a4f8: 0x2a020100
    ctx->pc = 0x28a4f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 256));
    // 0x28a4fc: 0x14400005
    ctx->pc = 0x28A4FCu;
    {
        const bool branch_taken_0x28a4fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28A500u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28a4fc) {
            ctx->pc = 0x28A514u;
            goto label_28a514;
        }
    }
    ctx->pc = 0x28A504u;
    // 0x28a504: 0xc0b0ce8
    ctx->pc = 0x28A504u;
    SET_GPR_U32(ctx, 31, 0x28A50Cu);
    ctx->pc = 0x28A508u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A50Cu; }
    }
    if (ctx->pc != 0x28A50Cu) { return; }
    ctx->pc = 0x28A50Cu;
    // 0x28a50c: 0x1000006b
    ctx->pc = 0x28A50Cu;
    {
        const bool branch_taken_0x28a50c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A510u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x28a50c) {
            ctx->pc = 0x28A6BCu;
            goto label_28a6bc;
        }
    }
    ctx->pc = 0x28A514u;
label_28a514:
    // 0x28a514: 0x16000009
    ctx->pc = 0x28A514u;
    {
        const bool branch_taken_0x28a514 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x28A518u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x28a514) {
            ctx->pc = 0x28A53Cu;
            goto label_28a53c;
        }
    }
    ctx->pc = 0x28A51Cu;
    // 0x28a51c: 0x561021
    ctx->pc = 0x28a51cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28a520: 0x3c030035
    ctx->pc = 0x28a520u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28a524: 0x2463bd30
    ctx->pc = 0x28a524u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294950192));
    // 0x28a528: 0x431021
    ctx->pc = 0x28a528u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a52c: 0x8c430000
    ctx->pc = 0x28a52cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a530: 0x240200a0
    ctx->pc = 0x28a530u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 160));
    // 0x28a534: 0x40802d
    ctx->pc = 0x28a534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a538: 0x3800a
    ctx->pc = 0x28a538u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
label_28a53c:
    // 0x28a53c: 0xc0b0f3e
    ctx->pc = 0x28A53Cu;
    SET_GPR_U32(ctx, 31, 0x28A544u);
    ctx->pc = 0x28A540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitGetTex_0x2c3cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A544u; }
    }
    if (ctx->pc != 0x28A544u) { return; }
    ctx->pc = 0x28A544u;
    // 0x28a544: 0x40a02d
    ctx->pc = 0x28a544u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a548: 0x16800005
    ctx->pc = 0x28A548u;
    {
        const bool branch_taken_0x28a548 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x28A54Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28a548) {
            ctx->pc = 0x28A560u;
            goto label_28a560;
        }
    }
    ctx->pc = 0x28A550u;
    // 0x28a550: 0xc0b0ce8
    ctx->pc = 0x28A550u;
    SET_GPR_U32(ctx, 31, 0x28A558u);
    ctx->pc = 0x28A554u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A558u; }
    }
    if (ctx->pc != 0x28A558u) { return; }
    ctx->pc = 0x28A558u;
    // 0x28a558: 0x10000007
    ctx->pc = 0x28A558u;
    {
        const bool branch_taken_0x28a558 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A55Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 72)));
        if (branch_taken_0x28a558) {
            ctx->pc = 0x28A578u;
            goto label_28a578;
        }
    }
    ctx->pc = 0x28A560u;
label_28a560:
    // 0x28a560: 0xc0b0ce8
    ctx->pc = 0x28A560u;
    SET_GPR_U32(ctx, 31, 0x28A568u);
    ctx->pc = 0x28A564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A568u; }
    }
    if (ctx->pc != 0x28A568u) { return; }
    ctx->pc = 0x28A568u;
    // 0x28a568: 0x240202d
    ctx->pc = 0x28a568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a56c: 0xc0b0f52
    ctx->pc = 0x28A56Cu;
    SET_GPR_U32(ctx, 31, 0x28A574u);
    ctx->pc = 0x28A570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A574u; }
    }
    if (ctx->pc != 0x28A574u) { return; }
    ctx->pc = 0x28A574u;
    // 0x28a574: 0x8ea60048
    ctx->pc = 0x28a574u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_28a578:
    // 0x28a578: 0x18c00021
    ctx->pc = 0x28A578u;
    {
        const bool branch_taken_0x28a578 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x28A57Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28a578) {
            ctx->pc = 0x28A600u;
            goto label_28a600;
        }
    }
    ctx->pc = 0x28A580u;
    // 0x28a580: 0x2442b400
    ctx->pc = 0x28a580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947840));
    // 0x28a584: 0x8fa40030
    ctx->pc = 0x28a584u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a588: 0x821021
    ctx->pc = 0x28a588u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28a58c: 0x8c420000
    ctx->pc = 0x28a58cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a590: 0x2451ffc0
    ctx->pc = 0x28a590u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x28a594: 0x8fa20010
    ctx->pc = 0x28a594u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a598: 0x2452000c
    ctx->pc = 0x28a598u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 12));
    // 0x28a59c: 0x3a0202d
    ctx->pc = 0x28a59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5a0: 0x3c05003b
    ctx->pc = 0x28a5a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28a5a4: 0xc0b6252
    ctx->pc = 0x28A5A4u;
    SET_GPR_U32(ctx, 31, 0x28A5ACu);
    ctx->pc = 0x28A5A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957272));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A5ACu; }
    }
    if (ctx->pc != 0x28A5ACu) { return; }
    ctx->pc = 0x28A5ACu;
    // 0x28a5ac: 0x8fa50024
    ctx->pc = 0x28a5acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x28a5b0: 0x10a00008
    ctx->pc = 0x28A5B0u;
    {
        const bool branch_taken_0x28a5b0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A5B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28a5b0) {
            ctx->pc = 0x28A5D4u;
            goto label_28a5d4;
        }
    }
    ctx->pc = 0x28A5B8u;
    // 0x28a5b8: 0x240282d
    ctx->pc = 0x28a5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5bc: 0x3c013f00
    ctx->pc = 0x28a5bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x28a5c0: 0x44816000
    ctx->pc = 0x28a5c0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28a5c4: 0xc080a9a
    ctx->pc = 0x28A5C4u;
    SET_GPR_U32(ctx, 31, 0x28A5CCu);
    ctx->pc = 0x28A5C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A5CCu; }
    }
    if (ctx->pc != 0x28A5CCu) { return; }
    ctx->pc = 0x28A5CCu;
    // 0x28a5cc: 0x1000000c
    ctx->pc = 0x28A5CCu;
    {
        const bool branch_taken_0x28a5cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28a5cc) {
            ctx->pc = 0x28A600u;
            goto label_28a600;
        }
    }
    ctx->pc = 0x28A5D4u;
label_28a5d4:
    // 0x28a5d4: 0x240282d
    ctx->pc = 0x28a5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5d8: 0x24060006
    ctx->pc = 0x28a5d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28a5dc: 0x8fa70018
    ctx->pc = 0x28a5dcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28a5e0: 0x3c013f00
    ctx->pc = 0x28a5e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x28a5e4: 0x44816000
    ctx->pc = 0x28a5e4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28a5e8: 0xc080510
    ctx->pc = 0x28A5E8u;
    SET_GPR_U32(ctx, 31, 0x28A5F0u);
    ctx->pc = 0x28A5ECu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A5F0u; }
    }
    if (ctx->pc != 0x28A5F0u) { return; }
    ctx->pc = 0x28A5F0u;
    // 0x28a5f0: 0x10400003
    ctx->pc = 0x28A5F0u;
    {
        const bool branch_taken_0x28a5f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A5F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28a5f0) {
            ctx->pc = 0x28A600u;
            goto label_28a600;
        }
    }
    ctx->pc = 0x28A5F8u;
    // 0x28a5f8: 0xc0b16c6
    ctx->pc = 0x28A5F8u;
    SET_GPR_U32(ctx, 31, 0x28A600u);
    ctx->pc = 0x28A5FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFontMsgSetAlpha_0x2c5b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A600u; }
    }
    if (ctx->pc != 0x28A600u) { return; }
    ctx->pc = 0x28A600u;
label_28a600:
    // 0x28a600: 0x1a800003
    ctx->pc = 0x28A600u;
    {
        const bool branch_taken_0x28a600 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x28A604u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x28a600) {
            ctx->pc = 0x28A610u;
            goto label_28a610;
        }
    }
    ctx->pc = 0x28A608u;
    // 0x28a608: 0x10000002
    ctx->pc = 0x28A608u;
    {
        const bool branch_taken_0x28a608 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A60Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
        if (branch_taken_0x28a608) {
            ctx->pc = 0x28A614u;
            goto label_28a614;
        }
    }
    ctx->pc = 0x28A610u;
label_28a610:
    // 0x28a610: 0x2442000c
    ctx->pc = 0x28a610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
label_28a614:
    // 0x28a614: 0xafa20010
    ctx->pc = 0x28a614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x28a618: 0x82a20020
    ctx->pc = 0x28a618u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x28a61c: 0x10400026
    ctx->pc = 0x28A61Cu;
    {
        const bool branch_taken_0x28a61c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A620u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28a61c) {
            ctx->pc = 0x28A6B8u;
            goto label_28a6b8;
        }
    }
    ctx->pc = 0x28A624u;
    // 0x28a624: 0x2442b3f0
    ctx->pc = 0x28a624u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947824));
    // 0x28a628: 0x8fa30030
    ctx->pc = 0x28a628u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a62c: 0x621021
    ctx->pc = 0x28a62cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a630: 0x8c420000
    ctx->pc = 0x28a630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a634: 0x28823
    ctx->pc = 0x28a634u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x28a638: 0x8fa40024
    ctx->pc = 0x28a638u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x28a63c: 0x1080000b
    ctx->pc = 0x28A63Cu;
    {
        const bool branch_taken_0x28a63c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A640u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x28a63c) {
            ctx->pc = 0x28A66Cu;
            goto label_28a66c;
        }
    }
    ctx->pc = 0x28A644u;
    // 0x28a644: 0xc6a00040
    ctx->pc = 0x28a644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a648: 0x3c013f00
    ctx->pc = 0x28a648u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x28a64c: 0x44816000
    ctx->pc = 0x28a64cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28a650: 0x220202d
    ctx->pc = 0x28a650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a654: 0x240282d
    ctx->pc = 0x28a654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a658: 0x460c0302
    ctx->pc = 0x28a658u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28a65c: 0xc080b00
    ctx->pc = 0x28A65Cu;
    SET_GPR_U32(ctx, 31, 0x28A664u);
    ctx->pc = 0x28A660u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 32));
    ctx->pc = 0x202C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowTextMLines_0x202c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A664u; }
    }
    if (ctx->pc != 0x28A664u) { return; }
    ctx->pc = 0x28A664u;
    // 0x28a664: 0x10000011
    ctx->pc = 0x28A664u;
    {
        const bool branch_taken_0x28a664 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A668u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28a664) {
            ctx->pc = 0x28A6ACu;
            goto label_28a6ac;
        }
    }
    ctx->pc = 0x28A66Cu;
label_28a66c:
    // 0x28a66c: 0xc0b1434
    ctx->pc = 0x28A66Cu;
    SET_GPR_U32(ctx, 31, 0x28A674u);
    ctx->pc = 0x28A670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C50D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontAlpha_0x2c50d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A674u; }
    }
    if (ctx->pc != 0x28A674u) { return; }
    ctx->pc = 0x28A674u;
    // 0x28a674: 0x40802d
    ctx->pc = 0x28a674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a678: 0xc6a00040
    ctx->pc = 0x28a678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a67c: 0x3c013f00
    ctx->pc = 0x28a67cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x28a680: 0x44816000
    ctx->pc = 0x28a680u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28a684: 0x220202d
    ctx->pc = 0x28a684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a688: 0x240282d
    ctx->pc = 0x28a688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a68c: 0x24060006
    ctx->pc = 0x28a68cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28a690: 0x8fa70018
    ctx->pc = 0x28a690u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28a694: 0x460c0302
    ctx->pc = 0x28a694u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28a698: 0xc08051a
    ctx->pc = 0x28A698u;
    SET_GPR_U32(ctx, 31, 0x28A6A0u);
    ctx->pc = 0x28A69Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 21), 32));
    ctx->pc = 0x201468u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextMLines_0x201468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A6A0u; }
    }
    if (ctx->pc != 0x28A6A0u) { return; }
    ctx->pc = 0x28A6A0u;
    // 0x28a6a0: 0x40882d
    ctx->pc = 0x28a6a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6a4: 0xc0b1434
    ctx->pc = 0x28A6A4u;
    SET_GPR_U32(ctx, 31, 0x28A6ACu);
    ctx->pc = 0x28A6A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C50D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontAlpha_0x2c50d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A6ACu; }
    }
    if (ctx->pc != 0x28A6ACu) { return; }
    ctx->pc = 0x28A6ACu;
label_28a6ac:
    // 0x28a6ac: 0x8fa20010
    ctx->pc = 0x28a6acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a6b0: 0x2221021
    ctx->pc = 0x28a6b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x28a6b4: 0xafa20010
    ctx->pc = 0x28a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_28a6b8:
    // 0x28a6b8: 0x26730001
    ctx->pc = 0x28a6b8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_28a6bc:
    // 0x28a6bc: 0x3c020035
    ctx->pc = 0x28a6bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28a6c0: 0x8c42b52c
    ctx->pc = 0x28a6c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948140)));
    // 0x28a6c4: 0x262102a
    ctx->pc = 0x28a6c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x28a6c8: 0x1440fedb
    ctx->pc = 0x28A6C8u;
    {
        const bool branch_taken_0x28a6c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28A6CCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x28a6c8) {
            ctx->pc = 0x28A238u;
            goto label_28a238;
        }
    }
    ctx->pc = 0x28A6D0u;
label_28a6d0:
    // 0x28a6d0: 0x8fa50028
    ctx->pc = 0x28a6d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28a6d4: 0x10a00011
    ctx->pc = 0x28A6D4u;
    {
        const bool branch_taken_0x28a6d4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A6D8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x28a6d4) {
            ctx->pc = 0x28A71Cu;
            goto label_28a71c;
        }
    }
    ctx->pc = 0x28A6DCu;
    // 0x28a6dc: 0x2484d8e0
    ctx->pc = 0x28a6dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957280));
    // 0x28a6e0: 0xc0b1bb4
    ctx->pc = 0x28A6E0u;
    SET_GPR_U32(ctx, 31, 0x28A6E8u);
    ctx->pc = 0x28A6E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A6E8u; }
    }
    if (ctx->pc != 0x28A6E8u) { return; }
    ctx->pc = 0x28A6E8u;
    // 0x28a6e8: 0x3c040035
    ctx->pc = 0x28a6e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28a6ec: 0x2484b3f0
    ctx->pc = 0x28a6ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947824));
    // 0x28a6f0: 0x1e1880
    ctx->pc = 0x28a6f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 30), 2));
    // 0x28a6f4: 0x641821
    ctx->pc = 0x28a6f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28a6f8: 0x8c650000
    ctx->pc = 0x28a6f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a6fc: 0x3c030035
    ctx->pc = 0x28a6fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28a700: 0x8c66b448
    ctx->pc = 0x28a700u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294947912)));
    // 0x28a704: 0x40202d
    ctx->pc = 0x28a704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a708: 0x24a5ffe0
    ctx->pc = 0x28a708u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x28a70c: 0x24c6ffd8
    ctx->pc = 0x28a70cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967256));
    // 0x28a710: 0x2407ffff
    ctx->pc = 0x28a710u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a714: 0xc0b0c6a
    ctx->pc = 0x28A714u;
    SET_GPR_U32(ctx, 31, 0x28A71Cu);
    ctx->pc = 0x28A718u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A71Cu; }
    }
    if (ctx->pc != 0x28A71Cu) { return; }
    ctx->pc = 0x28A71Cu;
label_28a71c:
    // 0x28a71c: 0x8fa2002c
    ctx->pc = 0x28a71cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x28a720: 0x10400011
    ctx->pc = 0x28A720u;
    {
        const bool branch_taken_0x28a720 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A724u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x28a720) {
            ctx->pc = 0x28A768u;
            goto label_28a768;
        }
    }
    ctx->pc = 0x28A728u;
    // 0x28a728: 0x2484d8e8
    ctx->pc = 0x28a728u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957288));
    // 0x28a72c: 0xc0b1bb4
    ctx->pc = 0x28A72Cu;
    SET_GPR_U32(ctx, 31, 0x28A734u);
    ctx->pc = 0x28A730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A734u; }
    }
    if (ctx->pc != 0x28A734u) { return; }
    ctx->pc = 0x28A734u;
    // 0x28a734: 0x3c040035
    ctx->pc = 0x28a734u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28a738: 0x2484b3f0
    ctx->pc = 0x28a738u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947824));
    // 0x28a73c: 0x1e1880
    ctx->pc = 0x28a73cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 30), 2));
    // 0x28a740: 0x641821
    ctx->pc = 0x28a740u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28a744: 0x8c650000
    ctx->pc = 0x28a744u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a748: 0x3c030035
    ctx->pc = 0x28a748u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28a74c: 0x8c66b44c
    ctx->pc = 0x28a74cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294947916)));
    // 0x28a750: 0x40202d
    ctx->pc = 0x28a750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a754: 0x24a5ffe0
    ctx->pc = 0x28a754u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x28a758: 0x24c60038
    ctx->pc = 0x28a758u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 56));
    // 0x28a75c: 0x2407ffff
    ctx->pc = 0x28a75cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a760: 0xc0b0c6a
    ctx->pc = 0x28A760u;
    SET_GPR_U32(ctx, 31, 0x28A768u);
    ctx->pc = 0x28A764u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A768u; }
    }
    if (ctx->pc != 0x28A768u) { return; }
    ctx->pc = 0x28A768u;
label_28a768:
    // 0x28a768: 0x1ae00003
    ctx->pc = 0x28A768u;
    {
        const bool branch_taken_0x28a768 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x28A76Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28a768) {
            ctx->pc = 0x28A778u;
            goto label_28a778;
        }
    }
    ctx->pc = 0x28A770u;
    // 0x28a770: 0x8fa3001c
    ctx->pc = 0x28a770u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x28a774: 0x2e3100b
    ctx->pc = 0x28a774u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 23));
label_28a778:
    // 0x28a778: 0xdfbf00d0
    ctx->pc = 0x28a778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28a77c: 0xdfbe00c0
    ctx->pc = 0x28a77cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28a780: 0xdfb700b0
    ctx->pc = 0x28a780u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28a784: 0xdfb600a0
    ctx->pc = 0x28a784u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28a788: 0xdfb50090
    ctx->pc = 0x28a788u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28a78c: 0xdfb40080
    ctx->pc = 0x28a78cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28a790: 0xdfb30070
    ctx->pc = 0x28a790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a794: 0xdfb20060
    ctx->pc = 0x28a794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a798: 0xdfb10050
    ctx->pc = 0x28a798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a79c: 0xdfb00040
    ctx->pc = 0x28a79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a7a0: 0x3e00008
    ctx->pc = 0x28A7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A7A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A1BCu: goto label_28a1bc;
            case 0x28A204u: goto label_28a204;
            case 0x28A238u: goto label_28a238;
            case 0x28A2A4u: goto label_28a2a4;
            case 0x28A2B0u: goto label_28a2b0;
            case 0x28A2B4u: goto label_28a2b4;
            case 0x28A304u: goto label_28a304;
            case 0x28A334u: goto label_28a334;
            case 0x28A350u: goto label_28a350;
            case 0x28A358u: goto label_28a358;
            case 0x28A360u: goto label_28a360;
            case 0x28A370u: goto label_28a370;
            case 0x28A3BCu: goto label_28a3bc;
            case 0x28A3F4u: goto label_28a3f4;
            case 0x28A430u: goto label_28a430;
            case 0x28A480u: goto label_28a480;
            case 0x28A4B8u: goto label_28a4b8;
            case 0x28A4F4u: goto label_28a4f4;
            case 0x28A4F8u: goto label_28a4f8;
            case 0x28A514u: goto label_28a514;
            case 0x28A53Cu: goto label_28a53c;
            case 0x28A560u: goto label_28a560;
            case 0x28A578u: goto label_28a578;
            case 0x28A5D4u: goto label_28a5d4;
            case 0x28A600u: goto label_28a600;
            case 0x28A610u: goto label_28a610;
            case 0x28A614u: goto label_28a614;
            case 0x28A66Cu: goto label_28a66c;
            case 0x28A6ACu: goto label_28a6ac;
            case 0x28A6B8u: goto label_28a6b8;
            case 0x28A6BCu: goto label_28a6bc;
            case 0x28A6D0u: goto label_28a6d0;
            case 0x28A71Cu: goto label_28a71c;
            case 0x28A768u: goto label_28a768;
            case 0x28A778u: goto label_28a778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28A7A8u;
}
