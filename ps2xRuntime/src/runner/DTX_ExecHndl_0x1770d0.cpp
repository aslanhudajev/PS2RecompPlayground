#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DTX_ExecHndl
// Address: 0x1770d0 - 0x177224
void DTX_ExecHndl_0x1770d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DTX_ExecHndl");


    ctx->pc = 0x1770d0u;

label_1770d0:
    // 0x1770d0: 0x8f828294
    ctx->pc = 0x1770d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935188)));
label_1770d4:
    // 0x1770d4: 0x27bdffd0
    ctx->pc = 0x1770d4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1770d8:
    // 0x1770d8: 0xffb00000
    ctx->pc = 0x1770d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1770dc:
    // 0x1770dc: 0x24420001
    ctx->pc = 0x1770dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1770e0:
    // 0x1770e0: 0xffbf0020
    ctx->pc = 0x1770e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1770e4:
    // 0x1770e4: 0xffb10010
    ctx->pc = 0x1770e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1770e8:
    // 0x1770e8: 0x80802d
    ctx->pc = 0x1770e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1770ec:
    // 0x1770ec: 0xaf828294
    ctx->pc = 0x1770ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 2));
label_1770f0:
    // 0x1770f0: 0x24040001
    ctx->pc = 0x1770f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1770f4:
    // 0x1770f4: 0x82030001
    ctx->pc = 0x1770f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1770f8:
    // 0x1770f8: 0x54640016
label_1770fc:
    if (ctx->pc == 0x1770FCu) {
        ctx->pc = 0x1770FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x177100u;
        goto label_177100;
    }
    ctx->pc = 0x1770F8u;
    {
        const bool branch_taken_0x1770f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1770f8) {
            ctx->pc = 0x1770FCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x177154u;
            goto label_177154;
        }
    }
    ctx->pc = 0x177100u;
label_177100:
    // 0x177100: 0x8e020014
    ctx->pc = 0x177100u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_177104:
    // 0x177104: 0x8e030008
    ctx->pc = 0x177104u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_177108:
    // 0x177108: 0x8c44003c
    ctx->pc = 0x177108u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_17710c:
    // 0x17710c: 0x64182a
    ctx->pc = 0x17710cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_177110:
    // 0x177110: 0x50600010
label_177114:
    if (ctx->pc == 0x177114u) {
        ctx->pc = 0x177114u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x177118u;
        goto label_177118;
    }
    ctx->pc = 0x177110u;
    {
        const bool branch_taken_0x177110 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x177110) {
            ctx->pc = 0x177114u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x177154u;
            goto label_177154;
        }
    }
    ctx->pc = 0x177118u;
label_177118:
    // 0x177118: 0x8e050010
    ctx->pc = 0x177118u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17711c:
    // 0x17711c: 0x8e04000c
    ctx->pc = 0x17711cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_177120:
    // 0x177120: 0x24a5ffff
    ctx->pc = 0x177120u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
label_177124:
    // 0x177124: 0xc05549c
label_177128:
    if (ctx->pc == 0x177128u) {
        ctx->pc = 0x177128u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x17712Cu;
        goto label_17712c;
    }
    ctx->pc = 0x177124u;
    SET_GPR_U32(ctx, 31, 0x17712Cu);
    ctx->pc = 0x177128u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->pc = 0x155270u;
    {
        const uint32_t __entryPc = ctx->pc;
        InvalidDCache_0x155270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17712Cu; }
        else if (ctx->pc != 0x17712Cu) { ctx->pc = 0x17712Cu; }
    }
    if (ctx->pc != 0x17712Cu) { return; }
    ctx->pc = 0x17712Cu;
label_17712c:
    // 0x17712c: 0x8e030020
    ctx->pc = 0x17712cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_177130:
    // 0x177130: 0x8e040024
    ctx->pc = 0x177130u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_177134:
    // 0x177134: 0x8e05000c
    ctx->pc = 0x177134u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_177138:
    // 0x177138: 0x60f809
label_17713c:
    if (ctx->pc == 0x17713Cu) {
        ctx->pc = 0x17713Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x177140u;
        goto label_177140;
    }
    ctx->pc = 0x177138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x177140u);
        ctx->pc = 0x17713Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1770D0u: goto label_1770d0;
            case 0x1770D4u: goto label_1770d4;
            case 0x1770D8u: goto label_1770d8;
            case 0x1770DCu: goto label_1770dc;
            case 0x1770E0u: goto label_1770e0;
            case 0x1770E4u: goto label_1770e4;
            case 0x1770E8u: goto label_1770e8;
            case 0x1770ECu: goto label_1770ec;
            case 0x1770F0u: goto label_1770f0;
            case 0x1770F4u: goto label_1770f4;
            case 0x1770F8u: goto label_1770f8;
            case 0x1770FCu: goto label_1770fc;
            case 0x177100u: goto label_177100;
            case 0x177104u: goto label_177104;
            case 0x177108u: goto label_177108;
            case 0x17710Cu: goto label_17710c;
            case 0x177110u: goto label_177110;
            case 0x177114u: goto label_177114;
            case 0x177118u: goto label_177118;
            case 0x17711Cu: goto label_17711c;
            case 0x177120u: goto label_177120;
            case 0x177124u: goto label_177124;
            case 0x177128u: goto label_177128;
            case 0x17712Cu: goto label_17712c;
            case 0x177130u: goto label_177130;
            case 0x177134u: goto label_177134;
            case 0x177138u: goto label_177138;
            case 0x17713Cu: goto label_17713c;
            case 0x177140u: goto label_177140;
            case 0x177144u: goto label_177144;
            case 0x177148u: goto label_177148;
            case 0x17714Cu: goto label_17714c;
            case 0x177150u: goto label_177150;
            case 0x177154u: goto label_177154;
            case 0x177158u: goto label_177158;
            case 0x17715Cu: goto label_17715c;
            case 0x177160u: goto label_177160;
            case 0x177164u: goto label_177164;
            case 0x177168u: goto label_177168;
            case 0x17716Cu: goto label_17716c;
            case 0x177170u: goto label_177170;
            case 0x177174u: goto label_177174;
            case 0x177178u: goto label_177178;
            case 0x17717Cu: goto label_17717c;
            case 0x177180u: goto label_177180;
            case 0x177184u: goto label_177184;
            case 0x177188u: goto label_177188;
            case 0x17718Cu: goto label_17718c;
            case 0x177190u: goto label_177190;
            case 0x177194u: goto label_177194;
            case 0x177198u: goto label_177198;
            case 0x17719Cu: goto label_17719c;
            case 0x1771A0u: goto label_1771a0;
            case 0x1771A4u: goto label_1771a4;
            case 0x1771A8u: goto label_1771a8;
            case 0x1771ACu: goto label_1771ac;
            case 0x1771B0u: goto label_1771b0;
            case 0x1771B4u: goto label_1771b4;
            case 0x1771B8u: goto label_1771b8;
            case 0x1771BCu: goto label_1771bc;
            case 0x1771C0u: goto label_1771c0;
            case 0x1771C4u: goto label_1771c4;
            case 0x1771C8u: goto label_1771c8;
            case 0x1771CCu: goto label_1771cc;
            case 0x1771D0u: goto label_1771d0;
            case 0x1771D4u: goto label_1771d4;
            case 0x1771D8u: goto label_1771d8;
            case 0x1771DCu: goto label_1771dc;
            case 0x1771E0u: goto label_1771e0;
            case 0x1771E4u: goto label_1771e4;
            case 0x1771E8u: goto label_1771e8;
            case 0x1771ECu: goto label_1771ec;
            case 0x1771F0u: goto label_1771f0;
            case 0x1771F4u: goto label_1771f4;
            case 0x1771F8u: goto label_1771f8;
            case 0x1771FCu: goto label_1771fc;
            case 0x177200u: goto label_177200;
            case 0x177204u: goto label_177204;
            case 0x177208u: goto label_177208;
            case 0x17720Cu: goto label_17720c;
            case 0x177210u: goto label_177210;
            case 0x177214u: goto label_177214;
            case 0x177218u: goto label_177218;
            case 0x17721Cu: goto label_17721c;
            case 0x177220u: goto label_177220;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x177140u; }
            if (ctx->pc != 0x177140u) { return; }
        }
    }
    ctx->pc = 0x177140u;
label_177140:
    // 0x177140: 0x8e020014
    ctx->pc = 0x177140u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_177144:
    // 0x177144: 0x8c43003c
    ctx->pc = 0x177144u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_177148:
    // 0x177148: 0xa2000001
    ctx->pc = 0x177148u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_17714c:
    // 0x17714c: 0xae030008
    ctx->pc = 0x17714cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_177150:
    // 0x177150: 0x8e020000
    ctx->pc = 0x177150u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_177154:
    // 0x177154: 0x3c0300ff
    ctx->pc = 0x177154u;
    SET_GPR_U32(ctx, 3, ((uint32_t)255 << 16));
label_177158:
    // 0x177158: 0x3463ff00
    ctx->pc = 0x177158u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65280));
label_17715c:
    // 0x17715c: 0x3c040001
    ctx->pc = 0x17715cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
label_177160:
    // 0x177160: 0x431024
    ctx->pc = 0x177160u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_177164:
    // 0x177164: 0x1444002b
label_177168:
    if (ctx->pc == 0x177168u) {
        ctx->pc = 0x177168u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x17716Cu;
        goto label_17716c;
    }
    ctx->pc = 0x177164u;
    {
        const bool branch_taken_0x177164 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x177168u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x177164) {
            ctx->pc = 0x177214u;
            goto label_177214;
        }
    }
    ctx->pc = 0x17716Cu;
label_17716c:
    // 0x17716c: 0x8f918288
    ctx->pc = 0x17716cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 28), 4294935176)));
label_177170:
    // 0x177170: 0x24020001
    ctx->pc = 0x177170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_177174:
    // 0x177174: 0x56220028
label_177178:
    if (ctx->pc == 0x177178u) {
        ctx->pc = 0x177178u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x17717Cu;
        goto label_17717c;
    }
    ctx->pc = 0x177174u;
    {
        const bool branch_taken_0x177174 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x177174) {
            ctx->pc = 0x177178u;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x177218u;
            goto label_177218;
        }
    }
    ctx->pc = 0x17717Cu;
label_17717c:
    // 0x17717c: 0x8e030028
    ctx->pc = 0x17717cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_177180:
    // 0x177180: 0x8e04002c
    ctx->pc = 0x177180u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_177184:
    // 0x177184: 0x8e05000c
    ctx->pc = 0x177184u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_177188:
    // 0x177188: 0x60f809
label_17718c:
    if (ctx->pc == 0x17718Cu) {
        ctx->pc = 0x17718Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x177190u;
        goto label_177190;
    }
    ctx->pc = 0x177188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x177190u);
        ctx->pc = 0x17718Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1770D0u: goto label_1770d0;
            case 0x1770D4u: goto label_1770d4;
            case 0x1770D8u: goto label_1770d8;
            case 0x1770DCu: goto label_1770dc;
            case 0x1770E0u: goto label_1770e0;
            case 0x1770E4u: goto label_1770e4;
            case 0x1770E8u: goto label_1770e8;
            case 0x1770ECu: goto label_1770ec;
            case 0x1770F0u: goto label_1770f0;
            case 0x1770F4u: goto label_1770f4;
            case 0x1770F8u: goto label_1770f8;
            case 0x1770FCu: goto label_1770fc;
            case 0x177100u: goto label_177100;
            case 0x177104u: goto label_177104;
            case 0x177108u: goto label_177108;
            case 0x17710Cu: goto label_17710c;
            case 0x177110u: goto label_177110;
            case 0x177114u: goto label_177114;
            case 0x177118u: goto label_177118;
            case 0x17711Cu: goto label_17711c;
            case 0x177120u: goto label_177120;
            case 0x177124u: goto label_177124;
            case 0x177128u: goto label_177128;
            case 0x17712Cu: goto label_17712c;
            case 0x177130u: goto label_177130;
            case 0x177134u: goto label_177134;
            case 0x177138u: goto label_177138;
            case 0x17713Cu: goto label_17713c;
            case 0x177140u: goto label_177140;
            case 0x177144u: goto label_177144;
            case 0x177148u: goto label_177148;
            case 0x17714Cu: goto label_17714c;
            case 0x177150u: goto label_177150;
            case 0x177154u: goto label_177154;
            case 0x177158u: goto label_177158;
            case 0x17715Cu: goto label_17715c;
            case 0x177160u: goto label_177160;
            case 0x177164u: goto label_177164;
            case 0x177168u: goto label_177168;
            case 0x17716Cu: goto label_17716c;
            case 0x177170u: goto label_177170;
            case 0x177174u: goto label_177174;
            case 0x177178u: goto label_177178;
            case 0x17717Cu: goto label_17717c;
            case 0x177180u: goto label_177180;
            case 0x177184u: goto label_177184;
            case 0x177188u: goto label_177188;
            case 0x17718Cu: goto label_17718c;
            case 0x177190u: goto label_177190;
            case 0x177194u: goto label_177194;
            case 0x177198u: goto label_177198;
            case 0x17719Cu: goto label_17719c;
            case 0x1771A0u: goto label_1771a0;
            case 0x1771A4u: goto label_1771a4;
            case 0x1771A8u: goto label_1771a8;
            case 0x1771ACu: goto label_1771ac;
            case 0x1771B0u: goto label_1771b0;
            case 0x1771B4u: goto label_1771b4;
            case 0x1771B8u: goto label_1771b8;
            case 0x1771BCu: goto label_1771bc;
            case 0x1771C0u: goto label_1771c0;
            case 0x1771C4u: goto label_1771c4;
            case 0x1771C8u: goto label_1771c8;
            case 0x1771CCu: goto label_1771cc;
            case 0x1771D0u: goto label_1771d0;
            case 0x1771D4u: goto label_1771d4;
            case 0x1771D8u: goto label_1771d8;
            case 0x1771DCu: goto label_1771dc;
            case 0x1771E0u: goto label_1771e0;
            case 0x1771E4u: goto label_1771e4;
            case 0x1771E8u: goto label_1771e8;
            case 0x1771ECu: goto label_1771ec;
            case 0x1771F0u: goto label_1771f0;
            case 0x1771F4u: goto label_1771f4;
            case 0x1771F8u: goto label_1771f8;
            case 0x1771FCu: goto label_1771fc;
            case 0x177200u: goto label_177200;
            case 0x177204u: goto label_177204;
            case 0x177208u: goto label_177208;
            case 0x17720Cu: goto label_17720c;
            case 0x177210u: goto label_177210;
            case 0x177214u: goto label_177214;
            case 0x177218u: goto label_177218;
            case 0x17721Cu: goto label_17721c;
            case 0x177220u: goto label_177220;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x177190u; }
            if (ctx->pc != 0x177190u) { return; }
        }
    }
    ctx->pc = 0x177190u;
label_177190:
    // 0x177190: 0x8e020008
    ctx->pc = 0x177190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_177194:
    // 0x177194: 0x8e030014
    ctx->pc = 0x177194u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_177198:
    // 0x177198: 0x24420001
    ctx->pc = 0x177198u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_17719c:
    // 0x17719c: 0x8e05000c
    ctx->pc = 0x17719cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1771a0:
    // 0x1771a0: 0xae020008
    ctx->pc = 0x1771a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1771a4:
    // 0x1771a4: 0xac62003c
    ctx->pc = 0x1771a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
label_1771a8:
    // 0x1771a8: 0xa0202d
    ctx->pc = 0x1771a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1771ac:
    // 0x1771ac: 0x8e020010
    ctx->pc = 0x1771acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1771b0:
    // 0x1771b0: 0xa22821
    ctx->pc = 0x1771b0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1771b4:
    // 0x1771b4: 0xc05544c
label_1771b8:
    if (ctx->pc == 0x1771B8u) {
        ctx->pc = 0x1771B8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x1771BCu;
        goto label_1771bc;
    }
    ctx->pc = 0x1771B4u;
    SET_GPR_U32(ctx, 31, 0x1771BCu);
    ctx->pc = 0x1771B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x155130u;
    {
        const uint32_t __entryPc = ctx->pc;
        SyncDCache_0x155130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1771BCu; }
        else if (ctx->pc != 0x1771BCu) { ctx->pc = 0x1771BCu; }
    }
    if (ctx->pc != 0x1771BCu) { return; }
    ctx->pc = 0x1771BCu;
label_1771bc:
    // 0x1771bc: 0x8e05000c
    ctx->pc = 0x1771bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1771c0:
    // 0x1771c0: 0x8e020010
    ctx->pc = 0x1771c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1771c4:
    // 0x1771c4: 0xa0202d
    ctx->pc = 0x1771c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1771c8:
    // 0x1771c8: 0xa22821
    ctx->pc = 0x1771c8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1771cc:
    // 0x1771cc: 0xc05549c
label_1771d0:
    if (ctx->pc == 0x1771D0u) {
        ctx->pc = 0x1771D0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 63));
        ctx->pc = 0x1771D4u;
        goto label_1771d4;
    }
    ctx->pc = 0x1771CCu;
    SET_GPR_U32(ctx, 31, 0x1771D4u);
    ctx->pc = 0x1771D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 63));
    ctx->pc = 0x155270u;
    {
        const uint32_t __entryPc = ctx->pc;
        InvalidDCache_0x155270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1771D4u; }
        else if (ctx->pc != 0x1771D4u) { ctx->pc = 0x1771D4u; }
    }
    if (ctx->pc != 0x1771D4u) { return; }
    ctx->pc = 0x1771D4u;
label_1771d4:
    // 0x1771d4: 0x8e03000c
    ctx->pc = 0x1771d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1771d8:
    // 0x1771d8: 0x3c020fff
    ctx->pc = 0x1771d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
label_1771dc:
    // 0x1771dc: 0x3442ffff
    ctx->pc = 0x1771dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_1771e0:
    // 0x1771e0: 0x8e060018
    ctx->pc = 0x1771e0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1771e4:
    // 0x1771e4: 0x8e07001c
    ctx->pc = 0x1771e4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1771e8:
    // 0x1771e8: 0x621824
    ctx->pc = 0x1771e8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1771ec:
    // 0x1771ec: 0xae00003c
    ctx->pc = 0x1771ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_1771f0:
    // 0x1771f0: 0x26040030
    ctx->pc = 0x1771f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 48));
label_1771f4:
    // 0x1771f4: 0xae030030
    ctx->pc = 0x1771f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_1771f8:
    // 0x1771f8: 0x24050001
    ctx->pc = 0x1771f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_1771fc:
    // 0x1771fc: 0xae060034
    ctx->pc = 0x1771fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
label_177200:
    // 0x177200: 0xc055328
label_177204:
    if (ctx->pc == 0x177204u) {
        ctx->pc = 0x177204u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 7));
        ctx->pc = 0x177208u;
        goto label_177208;
    }
    ctx->pc = 0x177200u;
    SET_GPR_U32(ctx, 31, 0x177208u);
    ctx->pc = 0x177204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 7));
    ctx->pc = 0x154CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetDma_0x154ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177208u; }
        else if (ctx->pc != 0x177208u) { ctx->pc = 0x177208u; }
    }
    if (ctx->pc != 0x177208u) { return; }
    ctx->pc = 0x177208u;
label_177208:
    // 0x177208: 0xa2110001
    ctx->pc = 0x177208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
label_17720c:
    // 0x17720c: 0xae020040
    ctx->pc = 0x17720cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_177210:
    // 0x177210: 0xdfbf0020
    ctx->pc = 0x177210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_177214:
    // 0x177214: 0xdfb10010
    ctx->pc = 0x177214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_177218:
    // 0x177218: 0xdfb00000
    ctx->pc = 0x177218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17721c:
    // 0x17721c: 0x3e00008
label_177220:
    if (ctx->pc == 0x177220u) {
        ctx->pc = 0x177220u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x177224u;
        goto label_fallthrough_0x17721c;
    }
    ctx->pc = 0x17721Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177220u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1770D0u: goto label_1770d0;
            case 0x1770D4u: goto label_1770d4;
            case 0x1770D8u: goto label_1770d8;
            case 0x1770DCu: goto label_1770dc;
            case 0x1770E0u: goto label_1770e0;
            case 0x1770E4u: goto label_1770e4;
            case 0x1770E8u: goto label_1770e8;
            case 0x1770ECu: goto label_1770ec;
            case 0x1770F0u: goto label_1770f0;
            case 0x1770F4u: goto label_1770f4;
            case 0x1770F8u: goto label_1770f8;
            case 0x1770FCu: goto label_1770fc;
            case 0x177100u: goto label_177100;
            case 0x177104u: goto label_177104;
            case 0x177108u: goto label_177108;
            case 0x17710Cu: goto label_17710c;
            case 0x177110u: goto label_177110;
            case 0x177114u: goto label_177114;
            case 0x177118u: goto label_177118;
            case 0x17711Cu: goto label_17711c;
            case 0x177120u: goto label_177120;
            case 0x177124u: goto label_177124;
            case 0x177128u: goto label_177128;
            case 0x17712Cu: goto label_17712c;
            case 0x177130u: goto label_177130;
            case 0x177134u: goto label_177134;
            case 0x177138u: goto label_177138;
            case 0x17713Cu: goto label_17713c;
            case 0x177140u: goto label_177140;
            case 0x177144u: goto label_177144;
            case 0x177148u: goto label_177148;
            case 0x17714Cu: goto label_17714c;
            case 0x177150u: goto label_177150;
            case 0x177154u: goto label_177154;
            case 0x177158u: goto label_177158;
            case 0x17715Cu: goto label_17715c;
            case 0x177160u: goto label_177160;
            case 0x177164u: goto label_177164;
            case 0x177168u: goto label_177168;
            case 0x17716Cu: goto label_17716c;
            case 0x177170u: goto label_177170;
            case 0x177174u: goto label_177174;
            case 0x177178u: goto label_177178;
            case 0x17717Cu: goto label_17717c;
            case 0x177180u: goto label_177180;
            case 0x177184u: goto label_177184;
            case 0x177188u: goto label_177188;
            case 0x17718Cu: goto label_17718c;
            case 0x177190u: goto label_177190;
            case 0x177194u: goto label_177194;
            case 0x177198u: goto label_177198;
            case 0x17719Cu: goto label_17719c;
            case 0x1771A0u: goto label_1771a0;
            case 0x1771A4u: goto label_1771a4;
            case 0x1771A8u: goto label_1771a8;
            case 0x1771ACu: goto label_1771ac;
            case 0x1771B0u: goto label_1771b0;
            case 0x1771B4u: goto label_1771b4;
            case 0x1771B8u: goto label_1771b8;
            case 0x1771BCu: goto label_1771bc;
            case 0x1771C0u: goto label_1771c0;
            case 0x1771C4u: goto label_1771c4;
            case 0x1771C8u: goto label_1771c8;
            case 0x1771CCu: goto label_1771cc;
            case 0x1771D0u: goto label_1771d0;
            case 0x1771D4u: goto label_1771d4;
            case 0x1771D8u: goto label_1771d8;
            case 0x1771DCu: goto label_1771dc;
            case 0x1771E0u: goto label_1771e0;
            case 0x1771E4u: goto label_1771e4;
            case 0x1771E8u: goto label_1771e8;
            case 0x1771ECu: goto label_1771ec;
            case 0x1771F0u: goto label_1771f0;
            case 0x1771F4u: goto label_1771f4;
            case 0x1771F8u: goto label_1771f8;
            case 0x1771FCu: goto label_1771fc;
            case 0x177200u: goto label_177200;
            case 0x177204u: goto label_177204;
            case 0x177208u: goto label_177208;
            case 0x17720Cu: goto label_17720c;
            case 0x177210u: goto label_177210;
            case 0x177214u: goto label_177214;
            case 0x177218u: goto label_177218;
            case 0x17721Cu: goto label_17721c;
            case 0x177220u: goto label_177220;
            default: break;
        }
        return;
    }
label_fallthrough_0x17721c:
    ctx->pc = 0x177224u;
}
