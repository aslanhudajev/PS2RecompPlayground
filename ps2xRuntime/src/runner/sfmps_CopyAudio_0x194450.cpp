#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_CopyAudio
// Address: 0x194450 - 0x194594
void sfmps_CopyAudio_0x194450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_CopyAudio");


    ctx->pc = 0x194450u;

    // 0x194450: 0x27bdff60
    ctx->pc = 0x194450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x194454: 0xffb40040
    ctx->pc = 0x194454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x194458: 0xffb20020
    ctx->pc = 0x194458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19445c: 0x80a02d
    ctx->pc = 0x19445cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194460: 0xffbe0080
    ctx->pc = 0x194460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x194464: 0xa0902d
    ctx->pc = 0x194464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194468: 0xffb70070
    ctx->pc = 0x194468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x19446c: 0xe0f02d
    ctx->pc = 0x19446cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194470: 0xffb10010
    ctx->pc = 0x194470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x194474: 0xc0b82d
    ctx->pc = 0x194474u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194478: 0xffbf0090
    ctx->pc = 0x194478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x19447c: 0x100882d
    ctx->pc = 0x19447cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194480: 0xffb60060
    ctx->pc = 0x194480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x194484: 0xffb50050
    ctx->pc = 0x194484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x194488: 0x24050006
    ctx->pc = 0x194488u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19448c: 0xffb30030
    ctx->pc = 0x19448cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x194490: 0xc0674c2
    ctx->pc = 0x194490u;
    SET_GPR_U32(ctx, 31, 0x194498u);
    ctx->pc = 0x194494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194498u; }
        else if (ctx->pc != 0x194498u) { ctx->pc = 0x194498u; }
    }
    if (ctx->pc != 0x194498u) { return; }
    ctx->pc = 0x194498u;
    // 0x194498: 0x1040001f
    ctx->pc = 0x194498u;
    {
        const bool branch_taken_0x194498 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19449Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 20), 12384));
        if (branch_taken_0x194498) {
            ctx->pc = 0x194518u;
            goto label_194518;
        }
    }
    ctx->pc = 0x1944A0u;
    // 0x1944a0: 0x8e02002c
    ctx->pc = 0x1944a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1944a4: 0x2413ffff
    ctx->pc = 0x1944a4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1944a8: 0x14530002
    ctx->pc = 0x1944A8u;
    {
        const bool branch_taken_0x1944a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x1944ACu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 20), 12376));
        if (branch_taken_0x1944a8) {
            ctx->pc = 0x1944B4u;
            goto label_1944b4;
        }
    }
    ctx->pc = 0x1944B0u;
    // 0x1944b0: 0xae12002c
    ctx->pc = 0x1944b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
label_1944b4:
    // 0x1944b4: 0x8e020024
    ctx->pc = 0x1944b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1944b8: 0x50530001
    ctx->pc = 0x1944B8u;
    {
        const bool branch_taken_0x1944b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        if (branch_taken_0x1944b8) {
            ctx->pc = 0x1944BCu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
            ctx->pc = 0x1944C0u;
            goto label_1944c0;
        }
    }
    ctx->pc = 0x1944C0u;
label_1944c0:
    // 0x1944c0: 0x280202d
    ctx->pc = 0x1944c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1944c4: 0xc0674c2
    ctx->pc = 0x1944C4u;
    SET_GPR_U32(ctx, 31, 0x1944CCu);
    ctx->pc = 0x1944C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1944CCu; }
        else if (ctx->pc != 0x1944CCu) { ctx->pc = 0x1944CCu; }
    }
    if (ctx->pc != 0x1944CCu) { return; }
    ctx->pc = 0x1944CCu;
    // 0x1944cc: 0x40a82d
    ctx->pc = 0x1944ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1944d0: 0x12b3000e
    ctx->pc = 0x1944D0u;
    {
        const bool branch_taken_0x1944d0 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 19));
        ctx->pc = 0x1944D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1944d0) {
            ctx->pc = 0x19450Cu;
            goto label_19450c;
        }
    }
    ctx->pc = 0x1944D8u;
    // 0x1944d8: 0xc0674c2
    ctx->pc = 0x1944D8u;
    SET_GPR_U32(ctx, 31, 0x1944E0u);
    ctx->pc = 0x1944DCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 55));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1944E0u; }
        else if (ctx->pc != 0x1944E0u) { ctx->pc = 0x1944E0u; }
    }
    if (ctx->pc != 0x1944E0u) { return; }
    ctx->pc = 0x1944E0u;
    // 0x1944e0: 0x50400007
    ctx->pc = 0x1944E0u;
    {
        const bool branch_taken_0x1944e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1944e0) {
            ctx->pc = 0x1944E4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x194500u;
            goto label_194500;
        }
    }
    ctx->pc = 0x1944E8u;
    // 0x1944e8: 0x8e02001c
    ctx->pc = 0x1944e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1944ec: 0x242102a
    ctx->pc = 0x1944ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x1944f0: 0x54400006
    ctx->pc = 0x1944F0u;
    {
        const bool branch_taken_0x1944f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1944f0) {
            ctx->pc = 0x1944F4u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 21));
            ctx->pc = 0x19450Cu;
            goto label_19450c;
        }
    }
    ctx->pc = 0x1944F8u;
    // 0x1944f8: 0x10000005
    ctx->pc = 0x1944F8u;
    {
        const bool branch_taken_0x1944f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1944FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        if (branch_taken_0x1944f8) {
            ctx->pc = 0x194510u;
            goto label_194510;
        }
    }
    ctx->pc = 0x194500u;
label_194500:
    // 0x194500: 0x56420003
    ctx->pc = 0x194500u;
    {
        const bool branch_taken_0x194500 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x194500) {
            ctx->pc = 0x194504u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x194510u;
            goto label_194510;
        }
    }
    ctx->pc = 0x194508u;
    // 0x194508: 0xae15002c
    ctx->pc = 0x194508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 21));
label_19450c:
    // 0x19450c: 0x8e02002c
    ctx->pc = 0x19450cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_194510:
    // 0x194510: 0x10520003
    ctx->pc = 0x194510u;
    {
        const bool branch_taken_0x194510 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        ctx->pc = 0x194514u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
        if (branch_taken_0x194510) {
            ctx->pc = 0x194520u;
            goto label_194520;
        }
    }
    ctx->pc = 0x194518u;
label_194518:
    // 0x194518: 0x10000012
    ctx->pc = 0x194518u;
    {
        const bool branch_taken_0x194518 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19451Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x194518) {
            ctx->pc = 0x194564u;
            goto label_194564;
        }
    }
    ctx->pc = 0x194520u;
label_194520:
    // 0x194520: 0x622000b
    ctx->pc = 0x194520u;
    {
        const bool branch_taken_0x194520 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x194520) {
            ctx->pc = 0x194524u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 1716)));
            ctx->pc = 0x194550u;
            goto label_194550;
        }
    }
    ctx->pc = 0x194528u;
    // 0x194528: 0x8e03000c
    ctx->pc = 0x194528u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19452c: 0x8e020010
    ctx->pc = 0x19452cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x194530: 0x223202a
    ctx->pc = 0x194530u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x194534: 0x222282a
    ctx->pc = 0x194534u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x194538: 0x224180b
    ctx->pc = 0x194538u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 17));
    // 0x19453c: 0x225100b
    ctx->pc = 0x19453cu;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 17));
    // 0x194540: 0xae03000c
    ctx->pc = 0x194540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x194544: 0xae020010
    ctx->pc = 0x194544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x194548: 0x2238823
    ctx->pc = 0x194548u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x19454c: 0x8ec506b4
    ctx->pc = 0x19454cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 1716)));
label_194550:
    // 0x194550: 0x280202d
    ctx->pc = 0x194550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194554: 0x2e0302d
    ctx->pc = 0x194554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194558: 0x3c0382d
    ctx->pc = 0x194558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19455c: 0xc06529e
    ctx->pc = 0x19455Cu;
    SET_GPR_U32(ctx, 31, 0x194564u);
    ctx->pc = 0x194560u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x194A78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_CopyDstBuft_0x194a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194564u; }
        else if (ctx->pc != 0x194564u) { ctx->pc = 0x194564u; }
    }
    if (ctx->pc != 0x194564u) { return; }
    ctx->pc = 0x194564u;
label_194564:
    // 0x194564: 0xdfbf0090
    ctx->pc = 0x194564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x194568: 0xdfbe0080
    ctx->pc = 0x194568u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19456c: 0xdfb70070
    ctx->pc = 0x19456cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x194570: 0xdfb60060
    ctx->pc = 0x194570u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x194574: 0xdfb50050
    ctx->pc = 0x194574u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x194578: 0xdfb40040
    ctx->pc = 0x194578u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19457c: 0xdfb30030
    ctx->pc = 0x19457cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194580: 0xdfb20020
    ctx->pc = 0x194580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194584: 0xdfb10010
    ctx->pc = 0x194584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194588: 0xdfb00000
    ctx->pc = 0x194588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19458c: 0x3e00008
    ctx->pc = 0x19458Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194590u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1944B4u: goto label_1944b4;
            case 0x1944C0u: goto label_1944c0;
            case 0x194500u: goto label_194500;
            case 0x19450Cu: goto label_19450c;
            case 0x194510u: goto label_194510;
            case 0x194518u: goto label_194518;
            case 0x194520u: goto label_194520;
            case 0x194550u: goto label_194550;
            case 0x194564u: goto label_194564;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194594u;
}
