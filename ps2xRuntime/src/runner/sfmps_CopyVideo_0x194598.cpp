#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_CopyVideo
// Address: 0x194598 - 0x19475c
void sfmps_CopyVideo_0x194598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_CopyVideo");


    ctx->pc = 0x194598u;

    // 0x194598: 0x27bdff60
    ctx->pc = 0x194598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19459c: 0xffb60060
    ctx->pc = 0x19459cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1945a0: 0xffb10010
    ctx->pc = 0x1945a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1945a4: 0xa0b02d
    ctx->pc = 0x1945a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1945a8: 0xffbe0080
    ctx->pc = 0x1945a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1945ac: 0x80882d
    ctx->pc = 0x1945acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1945b0: 0xffb40040
    ctx->pc = 0x1945b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1945b4: 0x100f02d
    ctx->pc = 0x1945b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1945b8: 0xffb30030
    ctx->pc = 0x1945b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1945bc: 0xc0a02d
    ctx->pc = 0x1945bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1945c0: 0xffbf0090
    ctx->pc = 0x1945c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1945c4: 0xe0982d
    ctx->pc = 0x1945c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1945c8: 0xffb70070
    ctx->pc = 0x1945c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1945cc: 0xffb50050
    ctx->pc = 0x1945ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1945d0: 0x24050005
    ctx->pc = 0x1945d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1945d4: 0xffb20020
    ctx->pc = 0x1945d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1945d8: 0xc0674c2
    ctx->pc = 0x1945D8u;
    SET_GPR_U32(ctx, 31, 0x1945E0u);
    ctx->pc = 0x1945DCu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1945E0u; }
        else if (ctx->pc != 0x1945E0u) { ctx->pc = 0x1945E0u; }
    }
    if (ctx->pc != 0x1945E0u) { return; }
    ctx->pc = 0x1945E0u;
    // 0x1945e0: 0x10400036
    ctx->pc = 0x1945E0u;
    {
        const bool branch_taken_0x1945e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1945E4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 12384));
        if (branch_taken_0x1945e0) {
            ctx->pc = 0x1946BCu;
            goto label_1946bc;
        }
    }
    ctx->pc = 0x1945E8u;
    // 0x1945e8: 0x8e020028
    ctx->pc = 0x1945e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1945ec: 0x2415ffff
    ctx->pc = 0x1945ecu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1945f0: 0x14550005
    ctx->pc = 0x1945F0u;
    {
        const bool branch_taken_0x1945f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 21));
        ctx->pc = 0x1945F4u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 17), 12376));
        if (branch_taken_0x1945f0) {
            ctx->pc = 0x194608u;
            goto label_194608;
        }
    }
    ctx->pc = 0x1945F8u;
    // 0x1945f8: 0x220202d
    ctx->pc = 0x1945f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1945fc: 0xc0651d8
    ctx->pc = 0x1945FCu;
    SET_GPR_U32(ctx, 31, 0x194604u);
    ctx->pc = 0x194600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x194760u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_AutoVchPlay_0x194760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194604u; }
        else if (ctx->pc != 0x194604u) { ctx->pc = 0x194604u; }
    }
    if (ctx->pc != 0x194604u) { return; }
    ctx->pc = 0x194604u;
    // 0x194604: 0xae020028
    ctx->pc = 0x194604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_194608:
    // 0x194608: 0x8e020020
    ctx->pc = 0x194608u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x19460c: 0x50550001
    ctx->pc = 0x19460Cu;
    {
        const bool branch_taken_0x19460c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 21));
        if (branch_taken_0x19460c) {
            ctx->pc = 0x194610u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 22));
            ctx->pc = 0x194614u;
            goto label_194614;
        }
    }
    ctx->pc = 0x194614u;
label_194614:
    // 0x194614: 0x220202d
    ctx->pc = 0x194614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194618: 0xc0674c2
    ctx->pc = 0x194618u;
    SET_GPR_U32(ctx, 31, 0x194620u);
    ctx->pc = 0x19461Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 29));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194620u; }
        else if (ctx->pc != 0x194620u) { ctx->pc = 0x194620u; }
    }
    if (ctx->pc != 0x194620u) { return; }
    ctx->pc = 0x194620u;
    // 0x194620: 0x40902d
    ctx->pc = 0x194620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194624: 0x12550022
    ctx->pc = 0x194624u;
    {
        const bool branch_taken_0x194624 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 21));
        ctx->pc = 0x194628u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194624) {
            ctx->pc = 0x1946B0u;
            goto label_1946b0;
        }
    }
    ctx->pc = 0x19462Cu;
    // 0x19462c: 0xc0674c2
    ctx->pc = 0x19462Cu;
    SET_GPR_U32(ctx, 31, 0x194634u);
    ctx->pc = 0x194630u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 55));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194634u; }
        else if (ctx->pc != 0x194634u) { ctx->pc = 0x194634u; }
    }
    if (ctx->pc != 0x194634u) { return; }
    ctx->pc = 0x194634u;
    // 0x194634: 0x50400007
    ctx->pc = 0x194634u;
    {
        const bool branch_taken_0x194634 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x194634) {
            ctx->pc = 0x194638u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->pc = 0x194654u;
            goto label_194654;
        }
    }
    ctx->pc = 0x19463Cu;
    // 0x19463c: 0x8e020018
    ctx->pc = 0x19463cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x194640: 0x2c2102a
    ctx->pc = 0x194640u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 2)));
    // 0x194644: 0x14400005
    ctx->pc = 0x194644u;
    {
        const bool branch_taken_0x194644 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x194648u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        if (branch_taken_0x194644) {
            ctx->pc = 0x19465Cu;
            goto label_19465c;
        }
    }
    ctx->pc = 0x19464Cu;
    // 0x19464c: 0x10000019
    ctx->pc = 0x19464Cu;
    {
        const bool branch_taken_0x19464c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x19464c) {
            ctx->pc = 0x1946B4u;
            goto label_1946b4;
        }
    }
    ctx->pc = 0x194654u;
label_194654:
    // 0x194654: 0x16c20017
    ctx->pc = 0x194654u;
    {
        const bool branch_taken_0x194654 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 2));
        ctx->pc = 0x194658u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        if (branch_taken_0x194654) {
            ctx->pc = 0x1946B4u;
            goto label_1946b4;
        }
    }
    ctx->pc = 0x19465Cu;
label_19465c:
    // 0x19465c: 0x10920015
    ctx->pc = 0x19465Cu;
    {
        const bool branch_taken_0x19465c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 18));
        ctx->pc = 0x194660u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
        if (branch_taken_0x19465c) {
            ctx->pc = 0x1946B4u;
            goto label_1946b4;
        }
    }
    ctx->pc = 0x194664u;
    // 0x194664: 0x14400013
    ctx->pc = 0x194664u;
    {
        const bool branch_taken_0x194664 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x194664) {
            ctx->pc = 0x1946B4u;
            goto label_1946b4;
        }
    }
    ctx->pc = 0x19466Cu;
    // 0x19466c: 0x82820000
    ctx->pc = 0x19466cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x194670: 0x14400010
    ctx->pc = 0x194670u;
    {
        const bool branch_taken_0x194670 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x194670) {
            ctx->pc = 0x1946B4u;
            goto label_1946b4;
        }
    }
    ctx->pc = 0x194678u;
    // 0x194678: 0x82820001
    ctx->pc = 0x194678u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x19467c: 0x1440000d
    ctx->pc = 0x19467Cu;
    {
        const bool branch_taken_0x19467c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x194680u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19467c) {
            ctx->pc = 0x1946B4u;
            goto label_1946b4;
        }
    }
    ctx->pc = 0x194684u;
    // 0x194684: 0x92830002
    ctx->pc = 0x194684u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x194688: 0x1462000a
    ctx->pc = 0x194688u;
    {
        const bool branch_taken_0x194688 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x19468Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 179));
        if (branch_taken_0x194688) {
            ctx->pc = 0x1946B4u;
            goto label_1946b4;
        }
    }
    ctx->pc = 0x194690u;
    // 0x194690: 0x92830003
    ctx->pc = 0x194690u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x194694: 0x10620003
    ctx->pc = 0x194694u;
    {
        const bool branch_taken_0x194694 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x194698u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 184));
        if (branch_taken_0x194694) {
            ctx->pc = 0x1946A4u;
            goto label_1946a4;
        }
    }
    ctx->pc = 0x19469Cu;
    // 0x19469c: 0x14620005
    ctx->pc = 0x19469Cu;
    {
        const bool branch_taken_0x19469c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x19469c) {
            ctx->pc = 0x1946B4u;
            goto label_1946b4;
        }
    }
    ctx->pc = 0x1946A4u;
label_1946a4:
    // 0x1946a4: 0x240202d
    ctx->pc = 0x1946a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946a8: 0x10000002
    ctx->pc = 0x1946A8u;
    {
        const bool branch_taken_0x1946a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1946ACu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
        if (branch_taken_0x1946a8) {
            ctx->pc = 0x1946B4u;
            goto label_1946b4;
        }
    }
    ctx->pc = 0x1946B0u;
label_1946b0:
    // 0x1946b0: 0x8e040028
    ctx->pc = 0x1946b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1946b4:
    // 0x1946b4: 0x10960003
    ctx->pc = 0x1946B4u;
    {
        const bool branch_taken_0x1946b4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 22));
        ctx->pc = 0x1946B8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
        if (branch_taken_0x1946b4) {
            ctx->pc = 0x1946C4u;
            goto label_1946c4;
        }
    }
    ctx->pc = 0x1946BCu;
label_1946bc:
    // 0x1946bc: 0x1000001b
    ctx->pc = 0x1946BCu;
    {
        const bool branch_taken_0x1946bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1946C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1946bc) {
            ctx->pc = 0x19472Cu;
            goto label_19472c;
        }
    }
    ctx->pc = 0x1946C4u;
label_1946c4:
    // 0x1946c4: 0x260302d
    ctx->pc = 0x1946c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946c8: 0x220202d
    ctx->pc = 0x1946c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946cc: 0xc0668a8
    ctx->pc = 0x1946CCu;
    SET_GPR_U32(ctx, 31, 0x1946D4u);
    ctx->pc = 0x1946D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19A2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVP_Put_0x19a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1946D4u; }
        else if (ctx->pc != 0x1946D4u) { ctx->pc = 0x1946D4u; }
    }
    if (ctx->pc != 0x1946D4u) { return; }
    ctx->pc = 0x1946D4u;
    // 0x1946d4: 0x40982d
    ctx->pc = 0x1946d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946d8: 0x5e600003
    ctx->pc = 0x1946D8u;
    {
        const bool branch_taken_0x1946d8 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x1946d8) {
            ctx->pc = 0x1946DCu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 23), 1712)));
            ctx->pc = 0x1946E8u;
            goto label_1946e8;
        }
    }
    ctx->pc = 0x1946E0u;
    // 0x1946e0: 0x10000012
    ctx->pc = 0x1946E0u;
    {
        const bool branch_taken_0x1946e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1946E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1946e0) {
            ctx->pc = 0x19472Cu;
            goto label_19472c;
        }
    }
    ctx->pc = 0x1946E8u;
label_1946e8:
    // 0x1946e8: 0x3c0402d
    ctx->pc = 0x1946e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946ec: 0x220202d
    ctx->pc = 0x1946ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946f0: 0x280302d
    ctx->pc = 0x1946f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946f4: 0xc06529e
    ctx->pc = 0x1946F4u;
    SET_GPR_U32(ctx, 31, 0x1946FCu);
    ctx->pc = 0x1946F8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x194A78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_CopyDstBuft_0x194a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1946FCu; }
        else if (ctx->pc != 0x1946FCu) { ctx->pc = 0x1946FCu; }
    }
    if (ctx->pc != 0x1946FCu) { return; }
    ctx->pc = 0x1946FCu;
    // 0x1946fc: 0x40802d
    ctx->pc = 0x1946fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194700: 0x24020001
    ctx->pc = 0x194700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x194704: 0x12020005
    ctx->pc = 0x194704u;
    {
        const bool branch_taken_0x194704 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x194708u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194704) {
            ctx->pc = 0x19471Cu;
            goto label_19471c;
        }
    }
    ctx->pc = 0x19470Cu;
    // 0x19470c: 0xc0668be
    ctx->pc = 0x19470Cu;
    SET_GPR_U32(ctx, 31, 0x194714u);
    ctx->pc = 0x194710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19A2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVP_Unput_0x19a2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194714u; }
        else if (ctx->pc != 0x194714u) { ctx->pc = 0x194714u; }
    }
    if (ctx->pc != 0x194714u) { return; }
    ctx->pc = 0x194714u;
    // 0x194714: 0x10000005
    ctx->pc = 0x194714u;
    {
        const bool branch_taken_0x194714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194718u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194714) {
            ctx->pc = 0x19472Cu;
            goto label_19472c;
        }
    }
    ctx->pc = 0x19471Cu;
label_19471c:
    // 0x19471c: 0x280282d
    ctx->pc = 0x19471cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194720: 0xc06697a
    ctx->pc = 0x194720u;
    SET_GPR_U32(ctx, 31, 0x194728u);
    ctx->pc = 0x194724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19A5E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVP_SearchPsc_0x19a5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194728u; }
        else if (ctx->pc != 0x194728u) { ctx->pc = 0x194728u; }
    }
    if (ctx->pc != 0x194728u) { return; }
    ctx->pc = 0x194728u;
    // 0x194728: 0x200102d
    ctx->pc = 0x194728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19472c:
    // 0x19472c: 0xdfbf0090
    ctx->pc = 0x19472cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x194730: 0xdfbe0080
    ctx->pc = 0x194730u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x194734: 0xdfb70070
    ctx->pc = 0x194734u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x194738: 0xdfb60060
    ctx->pc = 0x194738u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19473c: 0xdfb50050
    ctx->pc = 0x19473cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x194740: 0xdfb40040
    ctx->pc = 0x194740u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194744: 0xdfb30030
    ctx->pc = 0x194744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194748: 0xdfb20020
    ctx->pc = 0x194748u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19474c: 0xdfb10010
    ctx->pc = 0x19474cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194750: 0xdfb00000
    ctx->pc = 0x194750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194754: 0x3e00008
    ctx->pc = 0x194754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194758u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194608u: goto label_194608;
            case 0x194614u: goto label_194614;
            case 0x194654u: goto label_194654;
            case 0x19465Cu: goto label_19465c;
            case 0x1946A4u: goto label_1946a4;
            case 0x1946B0u: goto label_1946b0;
            case 0x1946B4u: goto label_1946b4;
            case 0x1946BCu: goto label_1946bc;
            case 0x1946C4u: goto label_1946c4;
            case 0x1946E8u: goto label_1946e8;
            case 0x19471Cu: goto label_19471c;
            case 0x19472Cu: goto label_19472c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19475Cu;
}
