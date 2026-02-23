#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gameLoop__10PlayerTaskFv
// Address: 0x20e410 - 0x20e7a0
void gameLoop__10PlayerTaskFv_0x20e410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gameLoop__10PlayerTaskFv");


    ctx->pc = 0x20e410u;

    // 0x20e410: 0x27bdffe0
    ctx->pc = 0x20e410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20e414: 0x7fbf0010
    ctx->pc = 0x20e414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20e418: 0x7fb00000
    ctx->pc = 0x20e418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e41c: 0xc083dcc
    ctx->pc = 0x20E41Cu;
    SET_GPR_U32(ctx, 31, 0x20E424u);
    ctx->pc = 0x20E420u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20F730u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMaxBullet__10PlayerTaskFv_0x20f730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E424u; }
        else if (ctx->pc != 0x20E424u) { ctx->pc = 0x20E424u; }
    }
    if (ctx->pc != 0x20E424u) { return; }
    ctx->pc = 0x20E424u;
    // 0x20e424: 0xc083e5c
    ctx->pc = 0x20E424u;
    SET_GPR_U32(ctx, 31, 0x20E42Cu);
    ctx->pc = 0x20E428u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20F970u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispSight__10PlayerTaskFv_0x20f970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E42Cu; }
        else if (ctx->pc != 0x20E42Cu) { ctx->pc = 0x20E42Cu; }
    }
    if (ctx->pc != 0x20E42Cu) { return; }
    ctx->pc = 0x20E42Cu;
    // 0x20e42c: 0x3c010050
    ctx->pc = 0x20e42cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20e430: 0x8423e504
    ctx->pc = 0x20e430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20e434: 0x24020009
    ctx->pc = 0x20e434u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x20e438: 0x14620004
    ctx->pc = 0x20E438u;
    {
        const bool branch_taken_0x20e438 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20e438) {
            ctx->pc = 0x20E44Cu;
            goto label_20e44c;
        }
    }
    ctx->pc = 0x20E440u;
    // 0x20e440: 0x8e021cbc
    ctx->pc = 0x20e440u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x20e444: 0x24030001
    ctx->pc = 0x20e444u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e448: 0xac430010
    ctx->pc = 0x20e448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_20e44c:
    // 0x20e44c: 0x8e021cbc
    ctx->pc = 0x20e44cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x20e450: 0x24430010
    ctx->pc = 0x20e450u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 16));
    // 0x20e454: 0x8c420010
    ctx->pc = 0x20e454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x20e458: 0x1c400002
    ctx->pc = 0x20E458u;
    {
        const bool branch_taken_0x20e458 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x20e458) {
            ctx->pc = 0x20E464u;
            goto label_20e464;
        }
    }
    ctx->pc = 0x20E460u;
    // 0x20e460: 0xac600000
    ctx->pc = 0x20e460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20e464:
    // 0x20e464: 0x8e031cbc
    ctx->pc = 0x20e464u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x20e468: 0x906200c8
    ctx->pc = 0x20e468u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x20e46c: 0x30420001
    ctx->pc = 0x20e46cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x20e470: 0x14400006
    ctx->pc = 0x20E470u;
    {
        const bool branch_taken_0x20e470 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20e470) {
            ctx->pc = 0x20E48Cu;
            goto label_20e48c;
        }
    }
    ctx->pc = 0x20E478u;
    // 0x20e478: 0x8c6200bc
    ctx->pc = 0x20e478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x20e47c: 0x10400003
    ctx->pc = 0x20E47Cu;
    {
        const bool branch_taken_0x20e47c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e47c) {
            ctx->pc = 0x20E48Cu;
            goto label_20e48c;
        }
    }
    ctx->pc = 0x20E484u;
    // 0x20e484: 0xc084bfc
    ctx->pc = 0x20E484u;
    SET_GPR_U32(ctx, 31, 0x20E48Cu);
    ctx->pc = 0x20E488u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    ctx->pc = 0x212FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispPlDamEffReq__Fi_0x212ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E48Cu; }
        else if (ctx->pc != 0x20E48Cu) { ctx->pc = 0x20E48Cu; }
    }
    if (ctx->pc != 0x20E48Cu) { return; }
    ctx->pc = 0x20E48Cu;
label_20e48c:
    // 0x20e48c: 0x3c020050
    ctx->pc = 0x20e48cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20e490: 0xc07ce18
    ctx->pc = 0x20E490u;
    SET_GPR_U32(ctx, 31, 0x20E498u);
    ctx->pc = 0x20E494u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E498u; }
        else if (ctx->pc != 0x20E498u) { ctx->pc = 0x20E498u; }
    }
    if (ctx->pc != 0x20E498u) { return; }
    ctx->pc = 0x20E498u;
    // 0x20e498: 0x28410004
    ctx->pc = 0x20e498u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 4));
    // 0x20e49c: 0x10200031
    ctx->pc = 0x20E49Cu;
    {
        const bool branch_taken_0x20e49c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E4A0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x20e49c) {
            ctx->pc = 0x20E564u;
            goto label_20e564;
        }
    }
    ctx->pc = 0x20E4A4u;
    // 0x20e4a4: 0x8e041cbc
    ctx->pc = 0x20e4a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x20e4a8: 0x8c820010
    ctx->pc = 0x20e4a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x20e4ac: 0x50400038
    ctx->pc = 0x20E4ACu;
    {
        const bool branch_taken_0x20e4ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e4ac) {
            ctx->pc = 0x20E4B0u;
            SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
            ctx->pc = 0x20E590u;
            goto label_20e590;
        }
    }
    ctx->pc = 0x20E4B4u;
    // 0x20e4b4: 0x8f838bcc
    ctx->pc = 0x20e4b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x20e4b8: 0x24020001
    ctx->pc = 0x20e4b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e4bc: 0x5462000e
    ctx->pc = 0x20E4BCu;
    {
        const bool branch_taken_0x20e4bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20e4bc) {
            ctx->pc = 0x20E4C0u;
            SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
            ctx->pc = 0x20E4F8u;
            goto label_20e4f8;
        }
    }
    ctx->pc = 0x20E4C4u;
    // 0x20e4c4: 0x8f828cb0
    ctx->pc = 0x20e4c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x20e4c8: 0x30420010
    ctx->pc = 0x20e4c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x20e4cc: 0x14400009
    ctx->pc = 0x20E4CCu;
    {
        const bool branch_taken_0x20e4cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20e4cc) {
            ctx->pc = 0x20E4F4u;
            goto label_20e4f4;
        }
    }
    ctx->pc = 0x20E4D4u;
    // 0x20e4d4: 0x8c830004
    ctx->pc = 0x20e4d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20e4d8: 0x24020008
    ctx->pc = 0x20e4d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x20e4dc: 0x10620005
    ctx->pc = 0x20E4DCu;
    {
        const bool branch_taken_0x20e4dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20E4E0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20e4dc) {
            ctx->pc = 0x20E4F4u;
            goto label_20e4f4;
        }
    }
    ctx->pc = 0x20E4E4u;
    // 0x20e4e4: 0xc283d24
    ctx->pc = 0x20E4E4u;
    SET_GPR_U32(ctx, 31, 0x20E4ECu);
    ctx->pc = 0xA0F490u;
    {
        const uint32_t __entryPc = ctx->pc;
        gunOrgExe__10PlayerTaskFv_0xa0f490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E4ECu; }
        else if (ctx->pc != 0x20E4ECu) { ctx->pc = 0x20E4ECu; }
    }
    if (ctx->pc != 0x20E4ECu) { return; }
    ctx->pc = 0x20E4ECu;
    // 0x20e4ec: 0x10000005
    ctx->pc = 0x20E4ECu;
    {
        const bool branch_taken_0x20e4ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E4F0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
        if (branch_taken_0x20e4ec) {
            ctx->pc = 0x20E504u;
            goto label_20e504;
        }
    }
    ctx->pc = 0x20E4F4u;
label_20e4f4:
    // 0x20e4f4: 0x72002628
    ctx->pc = 0x20e4f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_20e4f8:
    // 0x20e4f8: 0xc083f08
    ctx->pc = 0x20E4F8u;
    SET_GPR_U32(ctx, 31, 0x20E500u);
    ctx->pc = 0x20FC20u;
    {
        const uint32_t __entryPc = ctx->pc;
        gunExe__10PlayerTaskFv_0x20fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E500u; }
        else if (ctx->pc != 0x20E500u) { ctx->pc = 0x20E500u; }
    }
    if (ctx->pc != 0x20E500u) { return; }
    ctx->pc = 0x20E500u;
    // 0x20e500: 0x8f828b68
    ctx->pc = 0x20e500u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
label_20e504:
    // 0x20e504: 0x14400021
    ctx->pc = 0x20E504u;
    {
        const bool branch_taken_0x20e504 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20e504) {
            ctx->pc = 0x20E58Cu;
            goto label_20e58c;
        }
    }
    ctx->pc = 0x20E50Cu;
    // 0x20e50c: 0x8f828ce4
    ctx->pc = 0x20e50cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937828)));
    // 0x20e510: 0x1040001e
    ctx->pc = 0x20E510u;
    {
        const bool branch_taken_0x20e510 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e510) {
            ctx->pc = 0x20E58Cu;
            goto label_20e58c;
        }
    }
    ctx->pc = 0x20E518u;
    // 0x20e518: 0x8e041cb8
    ctx->pc = 0x20e518u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x20e51c: 0x3c020050
    ctx->pc = 0x20e51cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20e520: 0x2442db7e
    ctx->pc = 0x20e520u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957950));
    // 0x20e524: 0x41880
    ctx->pc = 0x20e524u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20e528: 0x642021
    ctx->pc = 0x20e528u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20e52c: 0x41880
    ctx->pc = 0x20e52cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20e530: 0x831821
    ctx->pc = 0x20e530u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20e534: 0x31880
    ctx->pc = 0x20e534u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20e538: 0x431021
    ctx->pc = 0x20e538u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e53c: 0x80420000
    ctx->pc = 0x20e53cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e540: 0x10400012
    ctx->pc = 0x20E540u;
    {
        const bool branch_taken_0x20e540 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E544u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x20e540) {
            ctx->pc = 0x20E58Cu;
            goto label_20e58c;
        }
    }
    ctx->pc = 0x20E548u;
    // 0x20e548: 0x2442db7c
    ctx->pc = 0x20e548u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957948));
    // 0x20e54c: 0x431021
    ctx->pc = 0x20e54cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e550: 0x84420000
    ctx->pc = 0x20e550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e554: 0x1040000d
    ctx->pc = 0x20E554u;
    {
        const bool branch_taken_0x20e554 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E558u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20e554) {
            ctx->pc = 0x20E58Cu;
            goto label_20e58c;
        }
    }
    ctx->pc = 0x20E55Cu;
    // 0x20e55c: 0x1000000b
    ctx->pc = 0x20E55Cu;
    {
        const bool branch_taken_0x20e55c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E560u;
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937824), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x20e55c) {
            ctx->pc = 0x20E58Cu;
            goto label_20e58c;
        }
    }
    ctx->pc = 0x20E564u;
label_20e564:
    // 0x20e564: 0x8423e504
    ctx->pc = 0x20e564u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20e568: 0x2402000a
    ctx->pc = 0x20e568u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20e56c: 0x14620007
    ctx->pc = 0x20E56Cu;
    {
        const bool branch_taken_0x20e56c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20e56c) {
            ctx->pc = 0x20E58Cu;
            goto label_20e58c;
        }
    }
    ctx->pc = 0x20E574u;
    // 0x20e574: 0x8f838bcc
    ctx->pc = 0x20e574u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x20e578: 0x24020001
    ctx->pc = 0x20e578u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e57c: 0x14620003
    ctx->pc = 0x20E57Cu;
    {
        const bool branch_taken_0x20e57c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20E580u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20e57c) {
            ctx->pc = 0x20E58Cu;
            goto label_20e58c;
        }
    }
    ctx->pc = 0x20E584u;
    // 0x20e584: 0xc283d0c
    ctx->pc = 0x20E584u;
    SET_GPR_U32(ctx, 31, 0x20E58Cu);
    ctx->pc = 0xA0F430u;
    {
        const uint32_t __entryPc = ctx->pc;
        gunOrgSoundOff__10PlayerTaskFv_0xa0f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E58Cu; }
        else if (ctx->pc != 0x20E58Cu) { ctx->pc = 0x20E58Cu; }
    }
    if (ctx->pc != 0x20E58Cu) { return; }
    ctx->pc = 0x20E58Cu;
label_20e58c:
    // 0x20e58c: 0x72002628
    ctx->pc = 0x20e58cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_20e590:
    // 0x20e590: 0xc0840a8
    ctx->pc = 0x20E590u;
    SET_GPR_U32(ctx, 31, 0x20E598u);
    ctx->pc = 0x2102A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        bullet__10PlayerTaskFv_0x2102a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E598u; }
        else if (ctx->pc != 0x20E598u) { ctx->pc = 0x20E598u; }
    }
    if (ctx->pc != 0x20E598u) { return; }
    ctx->pc = 0x20E598u;
    // 0x20e598: 0x3c010050
    ctx->pc = 0x20e598u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20e59c: 0x8425e504
    ctx->pc = 0x20e59cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20e5a0: 0x2402000e
    ctx->pc = 0x20e5a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x20e5a4: 0x10a20072
    ctx->pc = 0x20E5A4u;
    {
        const bool branch_taken_0x20e5a4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x20E5A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x20e5a4) {
            ctx->pc = 0x20E770u;
            goto label_20e770;
        }
    }
    ctx->pc = 0x20E5ACu;
    // 0x20e5ac: 0x10a20070
    ctx->pc = 0x20E5ACu;
    {
        const bool branch_taken_0x20e5ac = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x20e5ac) {
            ctx->pc = 0x20E770u;
            goto label_20e770;
        }
    }
    ctx->pc = 0x20E5B4u;
    // 0x20e5b4: 0x8e021cbc
    ctx->pc = 0x20e5b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x20e5b8: 0x8c420010
    ctx->pc = 0x20e5b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x20e5bc: 0x14400016
    ctx->pc = 0x20E5BCu;
    {
        const bool branch_taken_0x20e5bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20E5C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x20e5bc) {
            ctx->pc = 0x20E618u;
            goto label_20e618;
        }
    }
    ctx->pc = 0x20E5C4u;
    // 0x20e5c4: 0x3c010050
    ctx->pc = 0x20e5c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20e5c8: 0x8424e3e8
    ctx->pc = 0x20e5c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960104)));
    // 0x20e5cc: 0x24030001
    ctx->pc = 0x20e5ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e5d0: 0x2402000a
    ctx->pc = 0x20e5d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20e5d4: 0xa3838b80
    ctx->pc = 0x20e5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937472), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e5d8: 0xa3838b84
    ctx->pc = 0x20e5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937476), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e5dc: 0x2484ffff
    ctx->pc = 0x20e5dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x20e5e0: 0x3c010050
    ctx->pc = 0x20e5e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20e5e4: 0x14a20006
    ctx->pc = 0x20E5E4u;
    {
        const bool branch_taken_0x20e5e4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x20E5E8u;
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294960104), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x20e5e4) {
            ctx->pc = 0x20E600u;
            goto label_20e600;
        }
    }
    ctx->pc = 0x20E5ECu;
    // 0x20e5ec: 0x8f828bcc
    ctx->pc = 0x20e5ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x20e5f0: 0x14430004
    ctx->pc = 0x20E5F0u;
    {
        const bool branch_taken_0x20e5f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x20E5F4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20e5f0) {
            ctx->pc = 0x20E604u;
            goto label_20e604;
        }
    }
    ctx->pc = 0x20E5F8u;
    // 0x20e5f8: 0xc283d0c
    ctx->pc = 0x20E5F8u;
    SET_GPR_U32(ctx, 31, 0x20E600u);
    ctx->pc = 0x20E5FCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0xA0F430u;
    {
        const uint32_t __entryPc = ctx->pc;
        gunOrgSoundOff__10PlayerTaskFv_0xa0f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E600u; }
        else if (ctx->pc != 0x20E600u) { ctx->pc = 0x20E600u; }
    }
    if (ctx->pc != 0x20E600u) { return; }
    ctx->pc = 0x20E600u;
label_20e600:
    // 0x20e600: 0x72002628
    ctx->pc = 0x20e600u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_20e604:
    // 0x20e604: 0x24050004
    ctx->pc = 0x20e604u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e608: 0xc083d34
    ctx->pc = 0x20E608u;
    SET_GPR_U32(ctx, 31, 0x20E610u);
    ctx->pc = 0x20E60Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20F4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        changePlayerMode__10PlayerTaskFii_0x20f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E610u; }
        else if (ctx->pc != 0x20E610u) { ctx->pc = 0x20E610u; }
    }
    if (ctx->pc != 0x20E610u) { return; }
    ctx->pc = 0x20E610u;
    // 0x20e610: 0x10000057
    ctx->pc = 0x20E610u;
    {
        const bool branch_taken_0x20e610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e610) {
            ctx->pc = 0x20E770u;
            goto label_20e770;
        }
    }
    ctx->pc = 0x20E618u;
label_20e618:
    // 0x20e618: 0x14a20012
    ctx->pc = 0x20E618u;
    {
        const bool branch_taken_0x20e618 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x20E61Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20e618) {
            ctx->pc = 0x20E664u;
            goto label_20e664;
        }
    }
    ctx->pc = 0x20E620u;
    // 0x20e620: 0x83828ba8
    ctx->pc = 0x20e620u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x20e624: 0x24040005
    ctx->pc = 0x20e624u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x20e628: 0x1444000d
    ctx->pc = 0x20E628u;
    {
        const bool branch_taken_0x20e628 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x20e628) {
            ctx->pc = 0x20E660u;
            goto label_20e660;
        }
    }
    ctx->pc = 0x20E630u;
    // 0x20e630: 0x83838bac
    ctx->pc = 0x20e630u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937516)));
    // 0x20e634: 0x24020003
    ctx->pc = 0x20e634u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x20e638: 0x1062004d
    ctx->pc = 0x20E638u;
    {
        const bool branch_taken_0x20e638 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x20e638) {
            ctx->pc = 0x20E770u;
            goto label_20e770;
        }
    }
    ctx->pc = 0x20E640u;
    // 0x20e640: 0x83838b90
    ctx->pc = 0x20e640u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937488)));
    // 0x20e644: 0x1064004a
    ctx->pc = 0x20E644u;
    {
        const bool branch_taken_0x20e644 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x20E648u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x20e644) {
            ctx->pc = 0x20E770u;
            goto label_20e770;
        }
    }
    ctx->pc = 0x20E64Cu;
    // 0x20e64c: 0x10620048
    ctx->pc = 0x20E64Cu;
    {
        const bool branch_taken_0x20e64c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20E650u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967281));
        if (branch_taken_0x20e64c) {
            ctx->pc = 0x20E770u;
            goto label_20e770;
        }
    }
    ctx->pc = 0x20E654u;
    // 0x20e654: 0x2c410002
    ctx->pc = 0x20e654u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x20e658: 0x14200045
    ctx->pc = 0x20E658u;
    {
        const bool branch_taken_0x20e658 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x20e658) {
            ctx->pc = 0x20E770u;
            goto label_20e770;
        }
    }
    ctx->pc = 0x20E660u;
label_20e660:
    // 0x20e660: 0x70002628
    ctx->pc = 0x20e660u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20e664:
    // 0x20e664: 0xc0693a0
    ctx->pc = 0x20E664u;
    SET_GPR_U32(ctx, 31, 0x20E66Cu);
    ctx->pc = 0x1A4E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPushMatrix_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E66Cu; }
        else if (ctx->pc != 0x20E66Cu) { ctx->pc = 0x20E66Cu; }
    }
    if (ctx->pc != 0x20E66Cu) { return; }
    ctx->pc = 0x20E66Cu;
    // 0x20e66c: 0x8e0327fc
    ctx->pc = 0x20e66cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10236)));
    // 0x20e670: 0x3c02c120
    ctx->pc = 0x20e670u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49440 << 16));
    // 0x20e674: 0x44827000
    ctx->pc = 0x20e674u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x20e678: 0x44806000
    ctx->pc = 0x20e678u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x20e67c: 0x72002628
    ctx->pc = 0x20e67cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20e680: 0x46006346
    ctx->pc = 0x20e680u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x20e684: 0x34620008
    ctx->pc = 0x20e684u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 8));
    // 0x20e688: 0xc084854
    ctx->pc = 0x20E688u;
    SET_GPR_U32(ctx, 31, 0x20E690u);
    ctx->pc = 0x20E68Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10236), GPR_U32(ctx, 2));
    ctx->pc = 0x212150u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispLifePtclCalcVelX__10PlayerTaskFfff_0x212150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E690u; }
        else if (ctx->pc != 0x20E690u) { ctx->pc = 0x20E690u; }
    }
    if (ctx->pc != 0x20E690u) { return; }
    ctx->pc = 0x20E690u;
    // 0x20e690: 0xc06b26c
    ctx->pc = 0x20E690u;
    SET_GPR_U32(ctx, 31, 0x20E698u);
    ctx->pc = 0x1AC9B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPushPerspective_0x1ac9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E698u; }
        else if (ctx->pc != 0x20E698u) { ctx->pc = 0x20E698u; }
    }
    if (ctx->pc != 0x20E698u) { return; }
    ctx->pc = 0x20E698u;
    // 0x20e698: 0x3c023fb6
    ctx->pc = 0x20e698u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16310 << 16));
    // 0x20e69c: 0x3442db6e
    ctx->pc = 0x20e69cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 56174));
    // 0x20e6a0: 0x44826000
    ctx->pc = 0x20e6a0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x20e6a4: 0x24042aab
    ctx->pc = 0x20e6a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10923));
    // 0x20e6a8: 0x3c023c34
    ctx->pc = 0x20e6a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15412 << 16));
    // 0x20e6ac: 0x34423958
    ctx->pc = 0x20e6acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 14680));
    // 0x20e6b0: 0x44826800
    ctx->pc = 0x20e6b0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x20e6b4: 0x3c02477d
    ctx->pc = 0x20e6b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)18301 << 16));
    // 0x20e6b8: 0x3442e800
    ctx->pc = 0x20e6b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 59392));
    // 0x20e6bc: 0x44827000
    ctx->pc = 0x20e6bcu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x20e6c0: 0xc06b0c8
    ctx->pc = 0x20E6C0u;
    SET_GPR_U32(ctx, 31, 0x20E6C8u);
    ctx->pc = 0x20E6C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AC320u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPerspectiveI_0x1ac320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E6C8u; }
        else if (ctx->pc != 0x20E6C8u) { ctx->pc = 0x20E6C8u; }
    }
    if (ctx->pc != 0x20E6C8u) { return; }
    ctx->pc = 0x20E6C8u;
    // 0x20e6c8: 0xc06c20d
    ctx->pc = 0x20E6C8u;
    SET_GPR_U32(ctx, 31, 0x20E6D0u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E6D0u; }
        else if (ctx->pc != 0x20E6D0u) { ctx->pc = 0x20E6D0u; }
    }
    if (ctx->pc != 0x20E6D0u) { return; }
    ctx->pc = 0x20E6D0u;
    // 0x20e6d0: 0xc084498
    ctx->pc = 0x20E6D0u;
    SET_GPR_U32(ctx, 31, 0x20E6D8u);
    ctx->pc = 0x20E6D4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x211260u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispBulletLoop__10PlayerTaskFv_0x211260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E6D8u; }
        else if (ctx->pc != 0x20E6D8u) { ctx->pc = 0x20E6D8u; }
    }
    if (ctx->pc != 0x20E6D8u) { return; }
    ctx->pc = 0x20E6D8u;
    // 0x20e6d8: 0xc084390
    ctx->pc = 0x20E6D8u;
    SET_GPR_U32(ctx, 31, 0x20E6E0u);
    ctx->pc = 0x20E6DCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x210E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispCartridgeLoop__10PlayerTaskFv_0x210e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E6E0u; }
        else if (ctx->pc != 0x20E6E0u) { ctx->pc = 0x20E6E0u; }
    }
    if (ctx->pc != 0x20E6E0u) { return; }
    ctx->pc = 0x20E6E0u;
    // 0x20e6e0: 0xc0843e8
    ctx->pc = 0x20E6E0u;
    SET_GPR_U32(ctx, 31, 0x20E6E8u);
    ctx->pc = 0x20E6E4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x210FA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispCartridgePut__10PlayerTaskFv_0x210fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E6E8u; }
        else if (ctx->pc != 0x20E6E8u) { ctx->pc = 0x20E6E8u; }
    }
    if (ctx->pc != 0x20E6E8u) { return; }
    ctx->pc = 0x20E6E8u;
    // 0x20e6e8: 0xc084654
    ctx->pc = 0x20E6E8u;
    SET_GPR_U32(ctx, 31, 0x20E6F0u);
    ctx->pc = 0x20E6ECu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x211950u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispLife__10PlayerTaskFv_0x211950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E6F0u; }
        else if (ctx->pc != 0x20E6F0u) { ctx->pc = 0x20E6F0u; }
    }
    if (ctx->pc != 0x20E6F0u) { return; }
    ctx->pc = 0x20E6F0u;
    // 0x20e6f0: 0xc084924
    ctx->pc = 0x20E6F0u;
    SET_GPR_U32(ctx, 31, 0x20E6F8u);
    ctx->pc = 0x20E6F4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x212490u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispLifePtclLoop__10PlayerTaskFv_0x212490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E6F8u; }
        else if (ctx->pc != 0x20E6F8u) { ctx->pc = 0x20E6F8u; }
    }
    if (ctx->pc != 0x20E6F8u) { return; }
    ctx->pc = 0x20E6F8u;
    // 0x20e6f8: 0xc08495c
    ctx->pc = 0x20E6F8u;
    SET_GPR_U32(ctx, 31, 0x20E700u);
    ctx->pc = 0x20E6FCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x212570u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispLifePtclPut__10PlayerTaskFv_0x212570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E700u; }
        else if (ctx->pc != 0x20E700u) { ctx->pc = 0x20E700u; }
    }
    if (ctx->pc != 0x20E700u) { return; }
    ctx->pc = 0x20E700u;
    // 0x20e700: 0x8e021cbc
    ctx->pc = 0x20e700u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x20e704: 0x904200c8
    ctx->pc = 0x20e704u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x20e708: 0x30420001
    ctx->pc = 0x20e708u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x20e70c: 0x1040000f
    ctx->pc = 0x20E70Cu;
    {
        const bool branch_taken_0x20e70c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e70c) {
            ctx->pc = 0x20E74Cu;
            goto label_20e74c;
        }
    }
    ctx->pc = 0x20E714u;
    // 0x20e714: 0x8e041cb8
    ctx->pc = 0x20e714u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x20e718: 0x3c020050
    ctx->pc = 0x20e718u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20e71c: 0x2442e3b0
    ctx->pc = 0x20e71cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294960048));
    // 0x20e720: 0x418c0
    ctx->pc = 0x20e720u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x20e724: 0x641823
    ctx->pc = 0x20e724u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20e728: 0x31880
    ctx->pc = 0x20e728u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20e72c: 0x431021
    ctx->pc = 0x20e72cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e730: 0x8c420000
    ctx->pc = 0x20e730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e734: 0x10400007
    ctx->pc = 0x20E734u;
    {
        const bool branch_taken_0x20e734 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e734) {
            ctx->pc = 0x20E754u;
            goto label_20e754;
        }
    }
    ctx->pc = 0x20E73Cu;
    // 0x20e73c: 0xc084ad4
    ctx->pc = 0x20E73Cu;
    SET_GPR_U32(ctx, 31, 0x20E744u);
    ctx->pc = 0x212B50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClrPlDamEff__Fi_0x212b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E744u; }
        else if (ctx->pc != 0x20E744u) { ctx->pc = 0x20E744u; }
    }
    if (ctx->pc != 0x20E744u) { return; }
    ctx->pc = 0x20E744u;
    // 0x20e744: 0x10000003
    ctx->pc = 0x20E744u;
    {
        const bool branch_taken_0x20e744 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e744) {
            ctx->pc = 0x20E754u;
            goto label_20e754;
        }
    }
    ctx->pc = 0x20E74Cu;
label_20e74c:
    // 0x20e74c: 0xc084ae0
    ctx->pc = 0x20E74Cu;
    SET_GPR_U32(ctx, 31, 0x20E754u);
    ctx->pc = 0x20E750u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    ctx->pc = 0x212B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispPlDamEff__Fi_0x212b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E754u; }
        else if (ctx->pc != 0x20E754u) { ctx->pc = 0x20E754u; }
    }
    if (ctx->pc != 0x20E754u) { return; }
    ctx->pc = 0x20E754u;
label_20e754:
    // 0x20e754: 0xc06b2d8
    ctx->pc = 0x20E754u;
    SET_GPR_U32(ctx, 31, 0x20E75Cu);
    ctx->pc = 0x1ACB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPopPerspective_0x1acb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E75Cu; }
        else if (ctx->pc != 0x20E75Cu) { ctx->pc = 0x20E75Cu; }
    }
    if (ctx->pc != 0x20E75Cu) { return; }
    ctx->pc = 0x20E75Cu;
    // 0x20e75c: 0xc069394
    ctx->pc = 0x20E75Cu;
    SET_GPR_U32(ctx, 31, 0x20E764u);
    ctx->pc = 0x20E760u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A4E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPopMatrix_0x1a4e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E764u; }
        else if (ctx->pc != 0x20E764u) { ctx->pc = 0x20E764u; }
    }
    if (ctx->pc != 0x20E764u) { return; }
    ctx->pc = 0x20E764u;
    // 0x20e764: 0x8e031cbc
    ctx->pc = 0x20e764u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x20e768: 0x8c620010
    ctx->pc = 0x20e768u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x20e76c: 0xac620014
    ctx->pc = 0x20e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_20e770:
    // 0x20e770: 0xc080a54
    ctx->pc = 0x20E770u;
    SET_GPR_U32(ctx, 31, 0x20E778u);
    ctx->pc = 0x202950u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_DemoPlay__Fv_0x202950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E778u; }
        else if (ctx->pc != 0x20E778u) { ctx->pc = 0x20E778u; }
    }
    if (ctx->pc != 0x20E778u) { return; }
    ctx->pc = 0x20E778u;
    // 0x20e778: 0x10400003
    ctx->pc = 0x20E778u;
    {
        const bool branch_taken_0x20e778 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E77Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20e778) {
            ctx->pc = 0x20E788u;
            goto label_20e788;
        }
    }
    ctx->pc = 0x20E780u;
    // 0x20e780: 0xc083bb8
    ctx->pc = 0x20E780u;
    SET_GPR_U32(ctx, 31, 0x20E788u);
    ctx->pc = 0x20EEE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        joinWaitLoop_main__10PlayerTaskFv_0x20eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E788u; }
        else if (ctx->pc != 0x20E788u) { ctx->pc = 0x20E788u; }
    }
    if (ctx->pc != 0x20E788u) { return; }
    ctx->pc = 0x20E788u;
label_20e788:
    // 0x20e788: 0xc083740
    ctx->pc = 0x20E788u;
    SET_GPR_U32(ctx, 31, 0x20E790u);
    ctx->pc = 0x20E78Cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 7352)));
    ctx->pc = 0x20DD00u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlScoreDispChk__Fs_0x20dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E790u; }
        else if (ctx->pc != 0x20E790u) { ctx->pc = 0x20E790u; }
    }
    if (ctx->pc != 0x20E790u) { return; }
    ctx->pc = 0x20E790u;
    // 0x20e790: 0x7bbf0010
    ctx->pc = 0x20e790u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e794: 0x7bb00000
    ctx->pc = 0x20e794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e798: 0x3e00008
    ctx->pc = 0x20E798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E79Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E44Cu: goto label_20e44c;
            case 0x20E464u: goto label_20e464;
            case 0x20E48Cu: goto label_20e48c;
            case 0x20E4F4u: goto label_20e4f4;
            case 0x20E4F8u: goto label_20e4f8;
            case 0x20E504u: goto label_20e504;
            case 0x20E564u: goto label_20e564;
            case 0x20E58Cu: goto label_20e58c;
            case 0x20E590u: goto label_20e590;
            case 0x20E600u: goto label_20e600;
            case 0x20E604u: goto label_20e604;
            case 0x20E618u: goto label_20e618;
            case 0x20E660u: goto label_20e660;
            case 0x20E664u: goto label_20e664;
            case 0x20E74Cu: goto label_20e74c;
            case 0x20E754u: goto label_20e754;
            case 0x20E770u: goto label_20e770;
            case 0x20E788u: goto label_20e788;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20E7A0u;
}
