#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: print_item_info
// Address: 0x25c118 - 0x25c408
void print_item_info_0x25c118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25c118u;

    // 0x25c118: 0x27bdffc0
    ctx->pc = 0x25c118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25c11c: 0xffbf0030
    ctx->pc = 0x25c11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25c120: 0x3c0141a0
    ctx->pc = 0x25c120u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
    // 0x25c124: 0x44816000
    ctx->pc = 0x25c124u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25c128: 0xc096f7c
    ctx->pc = 0x25C128u;
    SET_GPR_U32(ctx, 31, 0x25C130u);
    ctx->pc = 0x25C12Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x25BDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        print_closest_item_0x25bdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C130u; }
    }
    if (ctx->pc != 0x25C130u) { return; }
    ctx->pc = 0x25C130u;
    // 0x25c130: 0x8fa40010
    ctx->pc = 0x25c130u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c134: 0x108000b1
    ctx->pc = 0x25C134u;
    {
        const bool branch_taken_0x25c134 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C138u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 20));
        if (branch_taken_0x25c134) {
            ctx->pc = 0x25C3FCu;
            goto label_25c3fc;
        }
    }
    ctx->pc = 0x25C13Cu;
    // 0x25c13c: 0x8c840000
    ctx->pc = 0x25c13cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25c140: 0x27a60018
    ctx->pc = 0x25c140u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 24));
    // 0x25c144: 0x27a7001c
    ctx->pc = 0x25c144u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 28));
    // 0x25c148: 0x27a80020
    ctx->pc = 0x25c148u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 32));
    // 0x25c14c: 0xc096fc4
    ctx->pc = 0x25C14Cu;
    SET_GPR_U32(ctx, 31, 0x25C154u);
    ctx->pc = 0x25C150u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 36));
    ctx->pc = 0x25BF10u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_info_type_0x25bf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C154u; }
    }
    if (ctx->pc != 0x25C154u) { return; }
    ctx->pc = 0x25C154u;
    // 0x25c154: 0x8fa70010
    ctx->pc = 0x25c154u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c158: 0x202d
    ctx->pc = 0x25c158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c15c: 0x27a50028
    ctx->pc = 0x25c15cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 40));
    // 0x25c160: 0x27a6002c
    ctx->pc = 0x25c160u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 44));
    // 0x25c164: 0xc09cfe0
    ctx->pc = 0x25C164u;
    SET_GPR_U32(ctx, 31, 0x25C16Cu);
    ctx->pc = 0x25C168u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 64));
    ctx->pc = 0x273F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_screen_text_pos_0x273f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C16Cu; }
    }
    if (ctx->pc != 0x25C16Cu) { return; }
    ctx->pc = 0x25C16Cu;
    // 0x25c16c: 0x8fa30014
    ctx->pc = 0x25c16cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x25c170: 0x24020002
    ctx->pc = 0x25c170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25c174: 0x14620010
    ctx->pc = 0x25C174u;
    {
        const bool branch_taken_0x25c174 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25C178u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        if (branch_taken_0x25c174) {
            ctx->pc = 0x25C1B8u;
            goto label_25c1b8;
        }
    }
    ctx->pc = 0x25C17Cu;
    // 0x25c17c: 0x8fa20010
    ctx->pc = 0x25c17cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c180: 0x844300f0
    ctx->pc = 0x25c180u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x25c184: 0x460000b
    ctx->pc = 0x25C184u;
    {
        const bool branch_taken_0x25c184 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25C188u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x25c184) {
            ctx->pc = 0x25C1B4u;
            goto label_25c1b4;
        }
    }
    ctx->pc = 0x25C18Cu;
    // 0x25c18c: 0x24040050
    ctx->pc = 0x25c18cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 80));
    // 0x25c190: 0x642018
    ctx->pc = 0x25c190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25c194: 0x8c42fa60
    ctx->pc = 0x25c194u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965856)));
    // 0x25c198: 0x822021
    ctx->pc = 0x25c198u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25c19c: 0x27a50014
    ctx->pc = 0x25c19cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 20));
    // 0x25c1a0: 0x27a60018
    ctx->pc = 0x25c1a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 24));
    // 0x25c1a4: 0x27a7001c
    ctx->pc = 0x25c1a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 28));
    // 0x25c1a8: 0x27a80020
    ctx->pc = 0x25c1a8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 32));
    // 0x25c1ac: 0xc096fc4
    ctx->pc = 0x25C1ACu;
    SET_GPR_U32(ctx, 31, 0x25C1B4u);
    ctx->pc = 0x25C1B0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 36));
    ctx->pc = 0x25BF10u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_info_type_0x25bf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C1B4u; }
    }
    if (ctx->pc != 0x25C1B4u) { return; }
    ctx->pc = 0x25C1B4u;
label_25c1b4:
    // 0x25c1b4: 0x8fa20028
    ctx->pc = 0x25c1b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_25c1b8:
    // 0x25c1b8: 0x2442ffdf
    ctx->pc = 0x25c1b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967263));
    // 0x25c1bc: 0x2c4201bf
    ctx->pc = 0x25c1bcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 447));
    // 0x25c1c0: 0x1040008e
    ctx->pc = 0x25C1C0u;
    {
        const bool branch_taken_0x25c1c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C1C4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 44)));
        if (branch_taken_0x25c1c0) {
            ctx->pc = 0x25C3FCu;
            goto label_25c3fc;
        }
    }
    ctx->pc = 0x25C1C8u;
    // 0x25c1c8: 0x440008c
    ctx->pc = 0x25C1C8u;
    {
        const bool branch_taken_0x25c1c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25C1CCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 384));
        if (branch_taken_0x25c1c8) {
            ctx->pc = 0x25C3FCu;
            goto label_25c3fc;
        }
    }
    ctx->pc = 0x25C1D0u;
    // 0x25c1d0: 0x1040008a
    ctx->pc = 0x25C1D0u;
    {
        const bool branch_taken_0x25c1d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C1D4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        if (branch_taken_0x25c1d0) {
            ctx->pc = 0x25C3FCu;
            goto label_25c3fc;
        }
    }
    ctx->pc = 0x25C1D8u;
    // 0x25c1d8: 0x24020005
    ctx->pc = 0x25c1d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x25c1dc: 0x10620029
    ctx->pc = 0x25C1DCu;
    {
        const bool branch_taken_0x25c1dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25C1E0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 6));
        if (branch_taken_0x25c1dc) {
            ctx->pc = 0x25C284u;
            goto label_25c284;
        }
    }
    ctx->pc = 0x25C1E4u;
    // 0x25c1e4: 0x10400005
    ctx->pc = 0x25C1E4u;
    {
        const bool branch_taken_0x25c1e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C1E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25c1e4) {
            ctx->pc = 0x25C1FCu;
            goto label_25c1fc;
        }
    }
    ctx->pc = 0x25C1ECu;
    // 0x25c1ec: 0x10620008
    ctx->pc = 0x25C1ECu;
    {
        const bool branch_taken_0x25c1ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25C1F0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        if (branch_taken_0x25c1ec) {
            ctx->pc = 0x25C210u;
            goto label_25c210;
        }
    }
    ctx->pc = 0x25C1F4u;
    // 0x25c1f4: 0x10000072
    ctx->pc = 0x25C1F4u;
    {
        const bool branch_taken_0x25c1f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C1F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x25c1f4) {
            ctx->pc = 0x25C3C0u;
            goto label_25c3c0;
        }
    }
    ctx->pc = 0x25C1FCu;
label_25c1fc:
    // 0x25c1fc: 0x2402000c
    ctx->pc = 0x25c1fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x25c200: 0x10620020
    ctx->pc = 0x25C200u;
    {
        const bool branch_taken_0x25c200 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25C204u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        if (branch_taken_0x25c200) {
            ctx->pc = 0x25C284u;
            goto label_25c284;
        }
    }
    ctx->pc = 0x25C208u;
    // 0x25c208: 0x1000006d
    ctx->pc = 0x25C208u;
    {
        const bool branch_taken_0x25c208 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C20Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x25c208) {
            ctx->pc = 0x25C3C0u;
            goto label_25c3c0;
        }
    }
    ctx->pc = 0x25C210u;
label_25c210:
    // 0x25c210: 0x8faa0018
    ctx->pc = 0x25c210u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25c214: 0x2d420011
    ctx->pc = 0x25c214u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 10), 17));
    // 0x25c218: 0x10400079
    ctx->pc = 0x25C218u;
    {
        const bool branch_taken_0x25c218 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C21Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x25c218) {
            ctx->pc = 0x25C400u;
            goto label_25c400;
        }
    }
    ctx->pc = 0x25C220u;
    // 0x25c220: 0x3c020033
    ctx->pc = 0x25c220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x25c224: 0x24424a40
    ctx->pc = 0x25c224u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19008));
    // 0x25c228: 0x8fa30014
    ctx->pc = 0x25c228u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x25c22c: 0x31880
    ctx->pc = 0x25c22cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x25c230: 0x621821
    ctx->pc = 0x25c230u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c234: 0x3c020033
    ctx->pc = 0x25c234u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x25c238: 0x24424a78
    ctx->pc = 0x25c238u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19064));
    // 0x25c23c: 0xa5080
    ctx->pc = 0x25c23cu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 2));
    // 0x25c240: 0x1425021
    ctx->pc = 0x25c240u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x25c244: 0x8fa20010
    ctx->pc = 0x25c244u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c248: 0x804200e0
    ctx->pc = 0x25c248u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x25c24c: 0xafa20000
    ctx->pc = 0x25c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x25c250: 0x42023
    ctx->pc = 0x25c250u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x25c254: 0x8fa5002c
    ctx->pc = 0x25c254u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x25c258: 0x302d
    ctx->pc = 0x25c258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c25c: 0x3c0700ff
    ctx->pc = 0x25c25cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x25c260: 0x34e7ffff
    ctx->pc = 0x25c260u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x25c264: 0x3c08003b
    ctx->pc = 0x25c264u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x25c268: 0x25089100
    ctx->pc = 0x25c268u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294938880));
    // 0x25c26c: 0x8c690000
    ctx->pc = 0x25c26cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c270: 0x8d4a0000
    ctx->pc = 0x25c270u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x25c274: 0xc0804c8
    ctx->pc = 0x25C274u;
    SET_GPR_U32(ctx, 31, 0x25C27Cu);
    ctx->pc = 0x25C278u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C27Cu; }
    }
    if (ctx->pc != 0x25C27Cu) { return; }
    ctx->pc = 0x25C27Cu;
    // 0x25c27c: 0x10000060
    ctx->pc = 0x25C27Cu;
    {
        const bool branch_taken_0x25c27c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C280u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x25c27c) {
            ctx->pc = 0x25C400u;
            goto label_25c400;
        }
    }
    ctx->pc = 0x25C284u;
label_25c284:
    // 0x25c284: 0x8fa20010
    ctx->pc = 0x25c284u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c288: 0x8c4200f0
    ctx->pc = 0x25c288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x25c28c: 0x1040005b
    ctx->pc = 0x25C28Cu;
    {
        const bool branch_taken_0x25c28c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C290u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        if (branch_taken_0x25c28c) {
            ctx->pc = 0x25C3FCu;
            goto label_25c3fc;
        }
    }
    ctx->pc = 0x25C294u;
    // 0x25c294: 0x2402000c
    ctx->pc = 0x25c294u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x25c298: 0x14620008
    ctx->pc = 0x25C298u;
    {
        const bool branch_taken_0x25c298 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25C29Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        if (branch_taken_0x25c298) {
            ctx->pc = 0x25C2BCu;
            goto label_25c2bc;
        }
    }
    ctx->pc = 0x25C2A0u;
    // 0x25c2a0: 0x3c04003c
    ctx->pc = 0x25c2a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x25c2a4: 0x24842ab0
    ctx->pc = 0x25c2a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10928));
    // 0x25c2a8: 0x3c05003b
    ctx->pc = 0x25c2a8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25c2ac: 0xc0b6252
    ctx->pc = 0x25C2ACu;
    SET_GPR_U32(ctx, 31, 0x25C2B4u);
    ctx->pc = 0x25C2B0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294938896));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2B4u; }
    }
    if (ctx->pc != 0x25C2B4u) { return; }
    ctx->pc = 0x25C2B4u;
    // 0x25c2b4: 0x10000033
    ctx->pc = 0x25C2B4u;
    {
        const bool branch_taken_0x25c2b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C2B8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        if (branch_taken_0x25c2b4) {
            ctx->pc = 0x25C384u;
            goto label_25c384;
        }
    }
    ctx->pc = 0x25C2BCu;
label_25c2bc:
    // 0x25c2bc: 0x24020014
    ctx->pc = 0x25c2bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x25c2c0: 0x10620003
    ctx->pc = 0x25C2C0u;
    {
        const bool branch_taken_0x25c2c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25C2C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
        if (branch_taken_0x25c2c0) {
            ctx->pc = 0x25C2D0u;
            goto label_25c2d0;
        }
    }
    ctx->pc = 0x25C2C8u;
    // 0x25c2c8: 0x14620008
    ctx->pc = 0x25C2C8u;
    {
        const bool branch_taken_0x25c2c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25C2CCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        if (branch_taken_0x25c2c8) {
            ctx->pc = 0x25C2ECu;
            goto label_25c2ec;
        }
    }
    ctx->pc = 0x25C2D0u;
label_25c2d0:
    // 0x25c2d0: 0x3c04003c
    ctx->pc = 0x25c2d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x25c2d4: 0x24842ab0
    ctx->pc = 0x25c2d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10928));
    // 0x25c2d8: 0x3c05003b
    ctx->pc = 0x25c2d8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25c2dc: 0xc0b6252
    ctx->pc = 0x25C2DCu;
    SET_GPR_U32(ctx, 31, 0x25C2E4u);
    ctx->pc = 0x25C2E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294938904));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C2E4u; }
    }
    if (ctx->pc != 0x25C2E4u) { return; }
    ctx->pc = 0x25C2E4u;
    // 0x25c2e4: 0x10000027
    ctx->pc = 0x25C2E4u;
    {
        const bool branch_taken_0x25c2e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C2E8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        if (branch_taken_0x25c2e4) {
            ctx->pc = 0x25C384u;
            goto label_25c384;
        }
    }
    ctx->pc = 0x25C2ECu;
label_25c2ec:
    // 0x25c2ec: 0x24020015
    ctx->pc = 0x25c2ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
    // 0x25c2f0: 0x10620003
    ctx->pc = 0x25C2F0u;
    {
        const bool branch_taken_0x25c2f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25C2F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x25c2f0) {
            ctx->pc = 0x25C300u;
            goto label_25c300;
        }
    }
    ctx->pc = 0x25C2F8u;
    // 0x25c2f8: 0x14620008
    ctx->pc = 0x25C2F8u;
    {
        const bool branch_taken_0x25c2f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25C2FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        if (branch_taken_0x25c2f8) {
            ctx->pc = 0x25C31Cu;
            goto label_25c31c;
        }
    }
    ctx->pc = 0x25C300u;
label_25c300:
    // 0x25c300: 0x3c04003c
    ctx->pc = 0x25c300u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x25c304: 0x24842ab0
    ctx->pc = 0x25c304u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10928));
    // 0x25c308: 0x3c05003b
    ctx->pc = 0x25c308u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25c30c: 0xc0b6252
    ctx->pc = 0x25C30Cu;
    SET_GPR_U32(ctx, 31, 0x25C314u);
    ctx->pc = 0x25C310u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294938912));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C314u; }
    }
    if (ctx->pc != 0x25C314u) { return; }
    ctx->pc = 0x25C314u;
    // 0x25c314: 0x1000001b
    ctx->pc = 0x25C314u;
    {
        const bool branch_taken_0x25c314 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C318u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        if (branch_taken_0x25c314) {
            ctx->pc = 0x25C384u;
            goto label_25c384;
        }
    }
    ctx->pc = 0x25C31Cu;
label_25c31c:
    // 0x25c31c: 0x2442ffe7
    ctx->pc = 0x25c31cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x25c320: 0x2c420002
    ctx->pc = 0x25c320u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x25c324: 0x10400007
    ctx->pc = 0x25C324u;
    {
        const bool branch_taken_0x25c324 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C328u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x25c324) {
            ctx->pc = 0x25C344u;
            goto label_25c344;
        }
    }
    ctx->pc = 0x25C32Cu;
    // 0x25c32c: 0x24842ab0
    ctx->pc = 0x25c32cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10928));
    // 0x25c330: 0x3c05003b
    ctx->pc = 0x25c330u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25c334: 0xc0b6252
    ctx->pc = 0x25C334u;
    SET_GPR_U32(ctx, 31, 0x25C33Cu);
    ctx->pc = 0x25C338u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294938920));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C33Cu; }
    }
    if (ctx->pc != 0x25C33Cu) { return; }
    ctx->pc = 0x25C33Cu;
    // 0x25c33c: 0x10000011
    ctx->pc = 0x25C33Cu;
    {
        const bool branch_taken_0x25c33c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C340u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        if (branch_taken_0x25c33c) {
            ctx->pc = 0x25C384u;
            goto label_25c384;
        }
    }
    ctx->pc = 0x25C344u;
label_25c344:
    // 0x25c344: 0x8fa20018
    ctx->pc = 0x25c344u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25c348: 0x2442ffe5
    ctx->pc = 0x25c348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967269));
    // 0x25c34c: 0x2c420003
    ctx->pc = 0x25c34cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x25c350: 0x10400006
    ctx->pc = 0x25C350u;
    {
        const bool branch_taken_0x25c350 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C354u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10928));
        if (branch_taken_0x25c350) {
            ctx->pc = 0x25C36Cu;
            goto label_25c36c;
        }
    }
    ctx->pc = 0x25C358u;
    // 0x25c358: 0x3c05003b
    ctx->pc = 0x25c358u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25c35c: 0xc0b6252
    ctx->pc = 0x25C35Cu;
    SET_GPR_U32(ctx, 31, 0x25C364u);
    ctx->pc = 0x25C360u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294938928));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C364u; }
    }
    if (ctx->pc != 0x25C364u) { return; }
    ctx->pc = 0x25C364u;
    // 0x25c364: 0x10000007
    ctx->pc = 0x25C364u;
    {
        const bool branch_taken_0x25c364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C368u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        if (branch_taken_0x25c364) {
            ctx->pc = 0x25C384u;
            goto label_25c384;
        }
    }
    ctx->pc = 0x25C36Cu;
label_25c36c:
    // 0x25c36c: 0x3c04003c
    ctx->pc = 0x25c36cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x25c370: 0x24842ab0
    ctx->pc = 0x25c370u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10928));
    // 0x25c374: 0x3c05003b
    ctx->pc = 0x25c374u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25c378: 0xc0b6252
    ctx->pc = 0x25C378u;
    SET_GPR_U32(ctx, 31, 0x25C380u);
    ctx->pc = 0x25C37Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294938936));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C380u; }
    }
    if (ctx->pc != 0x25C380u) { return; }
    ctx->pc = 0x25C380u;
    // 0x25c380: 0x8fa40028
    ctx->pc = 0x25c380u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_25c384:
    // 0x25c384: 0x8fa20010
    ctx->pc = 0x25c384u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c388: 0x42023
    ctx->pc = 0x25c388u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x25c38c: 0x8fa5002c
    ctx->pc = 0x25c38cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x25c390: 0x302d
    ctx->pc = 0x25c390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c394: 0x3c0700ff
    ctx->pc = 0x25c394u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x25c398: 0x34e7ffff
    ctx->pc = 0x25c398u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x25c39c: 0x3c08003b
    ctx->pc = 0x25c39cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x25c3a0: 0x25089140
    ctx->pc = 0x25c3a0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294938944));
    // 0x25c3a4: 0x3c09003c
    ctx->pc = 0x25c3a4u;
    SET_GPR_U32(ctx, 9, ((uint32_t)60 << 16));
    // 0x25c3a8: 0x25292ab0
    ctx->pc = 0x25c3a8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 10928));
    // 0x25c3ac: 0x8c4a00f0
    ctx->pc = 0x25c3acu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x25c3b0: 0xc0804c8
    ctx->pc = 0x25C3B0u;
    SET_GPR_U32(ctx, 31, 0x25C3B8u);
    ctx->pc = 0x25C3B4u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 224)));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C3B8u; }
    }
    if (ctx->pc != 0x25C3B8u) { return; }
    ctx->pc = 0x25C3B8u;
    // 0x25c3b8: 0x10000011
    ctx->pc = 0x25C3B8u;
    {
        const bool branch_taken_0x25c3b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C3BCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x25c3b8) {
            ctx->pc = 0x25C400u;
            goto label_25c400;
        }
    }
    ctx->pc = 0x25C3C0u;
label_25c3c0:
    // 0x25c3c0: 0x24424a40
    ctx->pc = 0x25c3c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19008));
    // 0x25c3c4: 0x8fa30014
    ctx->pc = 0x25c3c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x25c3c8: 0x31880
    ctx->pc = 0x25c3c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x25c3cc: 0x621821
    ctx->pc = 0x25c3ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c3d0: 0x8fa20010
    ctx->pc = 0x25c3d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c3d4: 0x42023
    ctx->pc = 0x25c3d4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x25c3d8: 0x8fa5002c
    ctx->pc = 0x25c3d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x25c3dc: 0x302d
    ctx->pc = 0x25c3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c3e0: 0x3c0700ff
    ctx->pc = 0x25c3e0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x25c3e4: 0x34e7ffff
    ctx->pc = 0x25c3e4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x25c3e8: 0x3c08003b
    ctx->pc = 0x25c3e8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x25c3ec: 0x25089150
    ctx->pc = 0x25c3ecu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294938960));
    // 0x25c3f0: 0x8c690000
    ctx->pc = 0x25c3f0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c3f4: 0xc0804c8
    ctx->pc = 0x25C3F4u;
    SET_GPR_U32(ctx, 31, 0x25C3FCu);
    ctx->pc = 0x25C3F8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 224)));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C3FCu; }
    }
    if (ctx->pc != 0x25C3FCu) { return; }
    ctx->pc = 0x25C3FCu;
label_25c3fc:
    // 0x25c3fc: 0xdfbf0030
    ctx->pc = 0x25c3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25c400:
    // 0x25c400: 0x3e00008
    ctx->pc = 0x25C400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C404u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25C1B4u: goto label_25c1b4;
            case 0x25C1B8u: goto label_25c1b8;
            case 0x25C1FCu: goto label_25c1fc;
            case 0x25C210u: goto label_25c210;
            case 0x25C284u: goto label_25c284;
            case 0x25C2BCu: goto label_25c2bc;
            case 0x25C2D0u: goto label_25c2d0;
            case 0x25C2ECu: goto label_25c2ec;
            case 0x25C300u: goto label_25c300;
            case 0x25C31Cu: goto label_25c31c;
            case 0x25C344u: goto label_25c344;
            case 0x25C36Cu: goto label_25c36c;
            case 0x25C384u: goto label_25c384;
            case 0x25C3C0u: goto label_25c3c0;
            case 0x25C3FCu: goto label_25c3fc;
            case 0x25C400u: goto label_25c400;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25C408u;
}
