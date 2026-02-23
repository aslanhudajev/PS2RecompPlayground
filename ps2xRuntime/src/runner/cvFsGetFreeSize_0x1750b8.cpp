#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsGetFreeSize
// Address: 0x1750b8 - 0x1751d8
void cvFsGetFreeSize_0x1750b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsGetFreeSize");


    ctx->pc = 0x1750b8u;

label_1750b8:
    // 0x1750b8: 0x27bdfe70
    ctx->pc = 0x1750b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966896));
label_1750bc:
    // 0x1750bc: 0xffb40170
    ctx->pc = 0x1750bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
label_1750c0:
    // 0x1750c0: 0xffb00130
    ctx->pc = 0x1750c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
label_1750c4:
    // 0x1750c4: 0xa02d
    ctx->pc = 0x1750c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1750c8:
    // 0x1750c8: 0xffbf0180
    ctx->pc = 0x1750c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
label_1750cc:
    // 0x1750cc: 0x80802d
    ctx->pc = 0x1750ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1750d0:
    // 0x1750d0: 0xffb30160
    ctx->pc = 0x1750d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 19));
label_1750d4:
    // 0x1750d4: 0xffb20150
    ctx->pc = 0x1750d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
label_1750d8:
    // 0x1750d8: 0x12000004
label_1750dc:
    if (ctx->pc == 0x1750DCu) {
        ctx->pc = 0x1750DCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 17));
        ctx->pc = 0x1750E0u;
        goto label_1750e0;
    }
    ctx->pc = 0x1750D8u;
    {
        const bool branch_taken_0x1750d8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1750DCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 17));
        if (branch_taken_0x1750d8) {
            ctx->pc = 0x1750ECu;
            goto label_1750ec;
        }
    }
    ctx->pc = 0x1750E0u;
label_1750e0:
    // 0x1750e0: 0x82020000
    ctx->pc = 0x1750e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1750e4:
    // 0x1750e4: 0x14400008
label_1750e8:
    if (ctx->pc == 0x1750E8u) {
        ctx->pc = 0x1750ECu;
        goto label_1750ec;
    }
    ctx->pc = 0x1750E4u;
    {
        const bool branch_taken_0x1750e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1750e4) {
            ctx->pc = 0x175108u;
            goto label_175108;
        }
    }
    ctx->pc = 0x1750ECu;
label_1750ec:
    // 0x1750ec: 0xc05d2e8
label_1750f0:
    if (ctx->pc == 0x1750F0u) {
        ctx->pc = 0x1750F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1750F4u;
        goto label_1750f4;
    }
    ctx->pc = 0x1750ECu;
    SET_GPR_U32(ctx, 31, 0x1750F4u);
    ctx->pc = 0x1750F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDefDev_0x174ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1750F4u; }
        else if (ctx->pc != 0x1750F4u) { ctx->pc = 0x1750F4u; }
    }
    if (ctx->pc != 0x1750F4u) { return; }
    ctx->pc = 0x1750F4u;
label_1750f4:
    // 0x1750f4: 0x83a20000
    ctx->pc = 0x1750f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_1750f8:
    // 0x1750f8: 0x14400009
label_1750fc:
    if (ctx->pc == 0x1750FCu) {
        ctx->pc = 0x1750FCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x175100u;
        goto label_175100;
    }
    ctx->pc = 0x1750F8u;
    {
        const bool branch_taken_0x1750f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1750FCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x1750f8) {
            ctx->pc = 0x175120u;
            goto label_175120;
        }
    }
    ctx->pc = 0x175100u;
label_175100:
    // 0x175100: 0x1000000d
label_175104:
    if (ctx->pc == 0x175104u) {
        ctx->pc = 0x175108u;
        goto label_175108;
    }
    ctx->pc = 0x175100u;
    {
        const bool branch_taken_0x175100 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x175100) {
            ctx->pc = 0x175138u;
            goto label_175138;
        }
    }
    ctx->pc = 0x175108u;
label_175108:
    // 0x175108: 0xc051554
label_17510c:
    if (ctx->pc == 0x17510Cu) {
        ctx->pc = 0x17510Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175110u;
        goto label_175110;
    }
    ctx->pc = 0x175108u;
    SET_GPR_U32(ctx, 31, 0x175110u);
    ctx->pc = 0x17510Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175110u; }
        else if (ctx->pc != 0x175110u) { ctx->pc = 0x175110u; }
    }
    if (ctx->pc != 0x175110u) { return; }
    ctx->pc = 0x175110u;
label_175110:
    // 0x175110: 0x200282d
    ctx->pc = 0x175110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_175114:
    // 0x175114: 0x24460001
    ctx->pc = 0x175114u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 1));
label_175118:
    // 0x175118: 0xc050c90
label_17511c:
    if (ctx->pc == 0x17511Cu) {
        ctx->pc = 0x17511Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175120u;
        goto label_175120;
    }
    ctx->pc = 0x175118u;
    SET_GPR_U32(ctx, 31, 0x175120u);
    ctx->pc = 0x17511Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175120u; }
        else if (ctx->pc != 0x175120u) { ctx->pc = 0x175120u; }
    }
    if (ctx->pc != 0x175120u) { return; }
    ctx->pc = 0x175120u;
label_175120:
    // 0x175120: 0xc051554
label_175124:
    if (ctx->pc == 0x175124u) {
        ctx->pc = 0x175124u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175128u;
        goto label_175128;
    }
    ctx->pc = 0x175120u;
    SET_GPR_U32(ctx, 31, 0x175128u);
    ctx->pc = 0x175124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175128u; }
        else if (ctx->pc != 0x175128u) { ctx->pc = 0x175128u; }
    }
    if (ctx->pc != 0x175128u) { return; }
    ctx->pc = 0x175128u;
label_175128:
    // 0x175128: 0x40982d
    ctx->pc = 0x175128u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17512c:
    // 0x17512c: 0x1e60000a
label_175130:
    if (ctx->pc == 0x175130u) {
        ctx->pc = 0x175130u;
        SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
        ctx->pc = 0x175134u;
        goto label_175134;
    }
    ctx->pc = 0x17512Cu;
    {
        const bool branch_taken_0x17512c = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x175130u;
        SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
        if (branch_taken_0x17512c) {
            ctx->pc = 0x175158u;
            goto label_175158;
        }
    }
    ctx->pc = 0x175134u;
label_175134:
    // 0x175134: 0x3c04002c
    ctx->pc = 0x175134u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175138:
    // 0x175138: 0xc05d076
label_17513c:
    if (ctx->pc == 0x17513Cu) {
        ctx->pc = 0x17513Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944904));
        ctx->pc = 0x175140u;
        goto label_175140;
    }
    ctx->pc = 0x175138u;
    SET_GPR_U32(ctx, 31, 0x175140u);
    ctx->pc = 0x17513Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944904));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175140u; }
        else if (ctx->pc != 0x175140u) { ctx->pc = 0x175140u; }
    }
    if (ctx->pc != 0x175140u) { return; }
    ctx->pc = 0x175140u;
label_175140:
    // 0x175140: 0x1000001d
label_175144:
    if (ctx->pc == 0x175144u) {
        ctx->pc = 0x175144u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175148u;
        goto label_175148;
    }
    ctx->pc = 0x175140u;
    {
        const bool branch_taken_0x175140 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175144u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175140) {
            ctx->pc = 0x1751B8u;
            goto label_1751b8;
        }
    }
    ctx->pc = 0x175148u;
label_175148:
    // 0x175148: 0xc05d076
label_17514c:
    if (ctx->pc == 0x17514Cu) {
        ctx->pc = 0x17514Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944944));
        ctx->pc = 0x175150u;
        goto label_175150;
    }
    ctx->pc = 0x175148u;
    SET_GPR_U32(ctx, 31, 0x175150u);
    ctx->pc = 0x17514Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944944));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175150u; }
        else if (ctx->pc != 0x175150u) { ctx->pc = 0x175150u; }
    }
    if (ctx->pc != 0x175150u) { return; }
    ctx->pc = 0x175150u;
label_175150:
    // 0x175150: 0x10000019
label_175154:
    if (ctx->pc == 0x175154u) {
        ctx->pc = 0x175154u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175158u;
        goto label_175158;
    }
    ctx->pc = 0x175150u;
    {
        const bool branch_taken_0x175150 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175154u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175150) {
            ctx->pc = 0x1751B8u;
            goto label_1751b8;
        }
    }
    ctx->pc = 0x175158u;
label_175158:
    // 0x175158: 0x902d
    ctx->pc = 0x175158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17515c:
    // 0x17515c: 0x2442f2ec
    ctx->pc = 0x17515cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294963948));
label_175160:
    // 0x175160: 0x40882d
    ctx->pc = 0x175160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175164:
    // 0x175164: 0x2450fffc
    ctx->pc = 0x175164u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967292));
label_175168:
    // 0x175168: 0x3a0202d
    ctx->pc = 0x175168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17516c:
    // 0x17516c: 0x220282d
    ctx->pc = 0x17516cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_175170:
    // 0x175170: 0xc05160e
label_175174:
    if (ctx->pc == 0x175174u) {
        ctx->pc = 0x175174u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175178u;
        goto label_175178;
    }
    ctx->pc = 0x175170u;
    SET_GPR_U32(ctx, 31, 0x175178u);
    ctx->pc = 0x175174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145838u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x145838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175178u; }
        else if (ctx->pc != 0x175178u) { ctx->pc = 0x175178u; }
    }
    if (ctx->pc != 0x175178u) { return; }
    ctx->pc = 0x175178u;
label_175178:
    // 0x175178: 0x5440000a
label_17517c:
    if (ctx->pc == 0x17517Cu) {
        ctx->pc = 0x17517Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x175180u;
        goto label_175180;
    }
    ctx->pc = 0x175178u;
    {
        const bool branch_taken_0x175178 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x175178) {
            ctx->pc = 0x17517Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x1751A4u;
            goto label_1751a4;
        }
    }
    ctx->pc = 0x175180u;
label_175180:
    // 0x175180: 0x8e020000
    ctx->pc = 0x175180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_175184:
    // 0x175184: 0x1040fff0
label_175188:
    if (ctx->pc == 0x175188u) {
        ctx->pc = 0x175188u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x17518Cu;
        goto label_17518c;
    }
    ctx->pc = 0x175184u;
    {
        const bool branch_taken_0x175184 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175188u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x175184) {
            ctx->pc = 0x175148u;
            goto label_175148;
        }
    }
    ctx->pc = 0x17518Cu;
label_17518c:
    // 0x17518c: 0x8c42000c
    ctx->pc = 0x17518cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_175190:
    // 0x175190: 0x10400004
label_175194:
    if (ctx->pc == 0x175194u) {
        ctx->pc = 0x175194u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x175198u;
        goto label_175198;
    }
    ctx->pc = 0x175190u;
    {
        const bool branch_taken_0x175190 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175194u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x175190) {
            ctx->pc = 0x1751A4u;
            goto label_1751a4;
        }
    }
    ctx->pc = 0x175198u;
label_175198:
    // 0x175198: 0x40f809
label_17519c:
    if (ctx->pc == 0x17519Cu) {
        ctx->pc = 0x1751A0u;
        goto label_1751a0;
    }
    ctx->pc = 0x175198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1751A0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1750B8u: goto label_1750b8;
            case 0x1750BCu: goto label_1750bc;
            case 0x1750C0u: goto label_1750c0;
            case 0x1750C4u: goto label_1750c4;
            case 0x1750C8u: goto label_1750c8;
            case 0x1750CCu: goto label_1750cc;
            case 0x1750D0u: goto label_1750d0;
            case 0x1750D4u: goto label_1750d4;
            case 0x1750D8u: goto label_1750d8;
            case 0x1750DCu: goto label_1750dc;
            case 0x1750E0u: goto label_1750e0;
            case 0x1750E4u: goto label_1750e4;
            case 0x1750E8u: goto label_1750e8;
            case 0x1750ECu: goto label_1750ec;
            case 0x1750F0u: goto label_1750f0;
            case 0x1750F4u: goto label_1750f4;
            case 0x1750F8u: goto label_1750f8;
            case 0x1750FCu: goto label_1750fc;
            case 0x175100u: goto label_175100;
            case 0x175104u: goto label_175104;
            case 0x175108u: goto label_175108;
            case 0x17510Cu: goto label_17510c;
            case 0x175110u: goto label_175110;
            case 0x175114u: goto label_175114;
            case 0x175118u: goto label_175118;
            case 0x17511Cu: goto label_17511c;
            case 0x175120u: goto label_175120;
            case 0x175124u: goto label_175124;
            case 0x175128u: goto label_175128;
            case 0x17512Cu: goto label_17512c;
            case 0x175130u: goto label_175130;
            case 0x175134u: goto label_175134;
            case 0x175138u: goto label_175138;
            case 0x17513Cu: goto label_17513c;
            case 0x175140u: goto label_175140;
            case 0x175144u: goto label_175144;
            case 0x175148u: goto label_175148;
            case 0x17514Cu: goto label_17514c;
            case 0x175150u: goto label_175150;
            case 0x175154u: goto label_175154;
            case 0x175158u: goto label_175158;
            case 0x17515Cu: goto label_17515c;
            case 0x175160u: goto label_175160;
            case 0x175164u: goto label_175164;
            case 0x175168u: goto label_175168;
            case 0x17516Cu: goto label_17516c;
            case 0x175170u: goto label_175170;
            case 0x175174u: goto label_175174;
            case 0x175178u: goto label_175178;
            case 0x17517Cu: goto label_17517c;
            case 0x175180u: goto label_175180;
            case 0x175184u: goto label_175184;
            case 0x175188u: goto label_175188;
            case 0x17518Cu: goto label_17518c;
            case 0x175190u: goto label_175190;
            case 0x175194u: goto label_175194;
            case 0x175198u: goto label_175198;
            case 0x17519Cu: goto label_17519c;
            case 0x1751A0u: goto label_1751a0;
            case 0x1751A4u: goto label_1751a4;
            case 0x1751A8u: goto label_1751a8;
            case 0x1751ACu: goto label_1751ac;
            case 0x1751B0u: goto label_1751b0;
            case 0x1751B4u: goto label_1751b4;
            case 0x1751B8u: goto label_1751b8;
            case 0x1751BCu: goto label_1751bc;
            case 0x1751C0u: goto label_1751c0;
            case 0x1751C4u: goto label_1751c4;
            case 0x1751C8u: goto label_1751c8;
            case 0x1751CCu: goto label_1751cc;
            case 0x1751D0u: goto label_1751d0;
            case 0x1751D4u: goto label_1751d4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1751A0u; }
            if (ctx->pc != 0x1751A0u) { return; }
        }
    }
    ctx->pc = 0x1751A0u;
label_1751a0:
    // 0x1751a0: 0x40a02d
    ctx->pc = 0x1751a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1751a4:
    // 0x1751a4: 0x26100010
    ctx->pc = 0x1751a4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
label_1751a8:
    // 0x1751a8: 0x2a420020
    ctx->pc = 0x1751a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 32));
label_1751ac:
    // 0x1751ac: 0x1440ffee
label_1751b0:
    if (ctx->pc == 0x1751B0u) {
        ctx->pc = 0x1751B0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x1751B4u;
        goto label_1751b4;
    }
    ctx->pc = 0x1751ACu;
    {
        const bool branch_taken_0x1751ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1751B0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x1751ac) {
            ctx->pc = 0x175168u;
            goto label_175168;
        }
    }
    ctx->pc = 0x1751B4u;
label_1751b4:
    // 0x1751b4: 0x280102d
    ctx->pc = 0x1751b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1751b8:
    // 0x1751b8: 0xdfbf0180
    ctx->pc = 0x1751b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_1751bc:
    // 0x1751bc: 0xdfb40170
    ctx->pc = 0x1751bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_1751c0:
    // 0x1751c0: 0xdfb30160
    ctx->pc = 0x1751c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_1751c4:
    // 0x1751c4: 0xdfb20150
    ctx->pc = 0x1751c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_1751c8:
    // 0x1751c8: 0xdfb10140
    ctx->pc = 0x1751c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_1751cc:
    // 0x1751cc: 0xdfb00130
    ctx->pc = 0x1751ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_1751d0:
    // 0x1751d0: 0x3e00008
label_1751d4:
    if (ctx->pc == 0x1751D4u) {
        ctx->pc = 0x1751D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x1751D8u;
        goto label_fallthrough_0x1751d0;
    }
    ctx->pc = 0x1751D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1751D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1750B8u: goto label_1750b8;
            case 0x1750BCu: goto label_1750bc;
            case 0x1750C0u: goto label_1750c0;
            case 0x1750C4u: goto label_1750c4;
            case 0x1750C8u: goto label_1750c8;
            case 0x1750CCu: goto label_1750cc;
            case 0x1750D0u: goto label_1750d0;
            case 0x1750D4u: goto label_1750d4;
            case 0x1750D8u: goto label_1750d8;
            case 0x1750DCu: goto label_1750dc;
            case 0x1750E0u: goto label_1750e0;
            case 0x1750E4u: goto label_1750e4;
            case 0x1750E8u: goto label_1750e8;
            case 0x1750ECu: goto label_1750ec;
            case 0x1750F0u: goto label_1750f0;
            case 0x1750F4u: goto label_1750f4;
            case 0x1750F8u: goto label_1750f8;
            case 0x1750FCu: goto label_1750fc;
            case 0x175100u: goto label_175100;
            case 0x175104u: goto label_175104;
            case 0x175108u: goto label_175108;
            case 0x17510Cu: goto label_17510c;
            case 0x175110u: goto label_175110;
            case 0x175114u: goto label_175114;
            case 0x175118u: goto label_175118;
            case 0x17511Cu: goto label_17511c;
            case 0x175120u: goto label_175120;
            case 0x175124u: goto label_175124;
            case 0x175128u: goto label_175128;
            case 0x17512Cu: goto label_17512c;
            case 0x175130u: goto label_175130;
            case 0x175134u: goto label_175134;
            case 0x175138u: goto label_175138;
            case 0x17513Cu: goto label_17513c;
            case 0x175140u: goto label_175140;
            case 0x175144u: goto label_175144;
            case 0x175148u: goto label_175148;
            case 0x17514Cu: goto label_17514c;
            case 0x175150u: goto label_175150;
            case 0x175154u: goto label_175154;
            case 0x175158u: goto label_175158;
            case 0x17515Cu: goto label_17515c;
            case 0x175160u: goto label_175160;
            case 0x175164u: goto label_175164;
            case 0x175168u: goto label_175168;
            case 0x17516Cu: goto label_17516c;
            case 0x175170u: goto label_175170;
            case 0x175174u: goto label_175174;
            case 0x175178u: goto label_175178;
            case 0x17517Cu: goto label_17517c;
            case 0x175180u: goto label_175180;
            case 0x175184u: goto label_175184;
            case 0x175188u: goto label_175188;
            case 0x17518Cu: goto label_17518c;
            case 0x175190u: goto label_175190;
            case 0x175194u: goto label_175194;
            case 0x175198u: goto label_175198;
            case 0x17519Cu: goto label_17519c;
            case 0x1751A0u: goto label_1751a0;
            case 0x1751A4u: goto label_1751a4;
            case 0x1751A8u: goto label_1751a8;
            case 0x1751ACu: goto label_1751ac;
            case 0x1751B0u: goto label_1751b0;
            case 0x1751B4u: goto label_1751b4;
            case 0x1751B8u: goto label_1751b8;
            case 0x1751BCu: goto label_1751bc;
            case 0x1751C0u: goto label_1751c0;
            case 0x1751C4u: goto label_1751c4;
            case 0x1751C8u: goto label_1751c8;
            case 0x1751CCu: goto label_1751cc;
            case 0x1751D0u: goto label_1751d0;
            case 0x1751D4u: goto label_1751d4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1751d0:
    ctx->pc = 0x1751D8u;
}
