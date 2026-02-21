#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartGenHitFx
// Address: 0x27f570 - 0x27f620
void StartGenHitFx_0x27f570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27f570u;

    // 0x27f570: 0x27bdffd0
    ctx->pc = 0x27f570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27f574: 0xffbf0020
    ctx->pc = 0x27f574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27f578: 0xffb10010
    ctx->pc = 0x27f578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27f57c: 0xffb00000
    ctx->pc = 0x27f57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27f580: 0x80882d
    ctx->pc = 0x27f580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f584: 0x2410ffff
    ctx->pc = 0x27f584u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27f588: 0x205102a
    ctx->pc = 0x27f588u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 5)));
    // 0x27f58c: 0x10c00010
    ctx->pc = 0x27F58Cu;
    {
        const bool branch_taken_0x27f58c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x27F590u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
        if (branch_taken_0x27f58c) {
            ctx->pc = 0x27F5D0u;
            goto label_27f5d0;
        }
    }
    ctx->pc = 0x27F594u;
    // 0x27f594: 0x3c030034
    ctx->pc = 0x27f594u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27f598: 0x246355e8
    ctx->pc = 0x27f598u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 21992));
    // 0x27f59c: 0x51080
    ctx->pc = 0x27f59cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x27f5a0: 0x431021
    ctx->pc = 0x27f5a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f5a4: 0x8c440000
    ctx->pc = 0x27f5a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f5a8: 0x4810010
    ctx->pc = 0x27F5A8u;
    {
        const bool branch_taken_0x27f5a8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x27f5a8) {
            ctx->pc = 0x27F5ECu;
            goto label_27f5ec;
        }
    }
    ctx->pc = 0x27F5B0u;
    // 0x27f5b0: 0x4a00005
    ctx->pc = 0x27F5B0u;
    {
        const bool branch_taken_0x27f5b0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x27F5B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27f5b0) {
            ctx->pc = 0x27F5C8u;
            goto label_27f5c8;
        }
    }
    ctx->pc = 0x27F5B8u;
    // 0x27f5b8: 0x10a20003
    ctx->pc = 0x27F5B8u;
    {
        const bool branch_taken_0x27f5b8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x27F5BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x27f5b8) {
            ctx->pc = 0x27F5C8u;
            goto label_27f5c8;
        }
    }
    ctx->pc = 0x27F5C0u;
    // 0x27f5c0: 0x14a20008
    ctx->pc = 0x27F5C0u;
    {
        const bool branch_taken_0x27f5c0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x27f5c0) {
            ctx->pc = 0x27F5E4u;
            goto label_27f5e4;
        }
    }
    ctx->pc = 0x27F5C8u;
label_27f5c8:
    // 0x27f5c8: 0x10000006
    ctx->pc = 0x27F5C8u;
    {
        const bool branch_taken_0x27f5c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27F5CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
        if (branch_taken_0x27f5c8) {
            ctx->pc = 0x27F5E4u;
            goto label_27f5e4;
        }
    }
    ctx->pc = 0x27F5D0u;
label_27f5d0:
    // 0x27f5d0: 0x3c030034
    ctx->pc = 0x27f5d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27f5d4: 0x24635530
    ctx->pc = 0x27f5d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 21808));
    // 0x27f5d8: 0x51080
    ctx->pc = 0x27f5d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x27f5dc: 0x431021
    ctx->pc = 0x27f5dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f5e0: 0x8c440000
    ctx->pc = 0x27f5e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27f5e4:
    // 0x27f5e4: 0x4800009
    ctx->pc = 0x27F5E4u;
    {
        const bool branch_taken_0x27f5e4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27F5E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27f5e4) {
            ctx->pc = 0x27F60Cu;
            goto label_27f60c;
        }
    }
    ctx->pc = 0x27F5ECu;
label_27f5ec:
    // 0x27f5ec: 0xc09f866
    ctx->pc = 0x27F5ECu;
    SET_GPR_U32(ctx, 31, 0x27F5F4u);
    ctx->pc = 0x27F5F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 48));
    ctx->pc = 0x27E198u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXNoLoop_0x27e198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F5F4u; }
    }
    if (ctx->pc != 0x27F5F4u) { return; }
    ctx->pc = 0x27F5F4u;
    // 0x27f5f4: 0x40802d
    ctx->pc = 0x27f5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5f8: 0x200202d
    ctx->pc = 0x27f5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5fc: 0x220282d
    ctx->pc = 0x27f5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f600: 0xc09f748
    ctx->pc = 0x27F600u;
    SET_GPR_U32(ctx, 31, 0x27F608u);
    ctx->pc = 0x27F604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DD20u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetMat_0x27dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F608u; }
    }
    if (ctx->pc != 0x27F608u) { return; }
    ctx->pc = 0x27F608u;
    // 0x27f608: 0x200102d
    ctx->pc = 0x27f608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f60c:
    // 0x27f60c: 0xdfbf0020
    ctx->pc = 0x27f60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f610: 0xdfb10010
    ctx->pc = 0x27f610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f614: 0xdfb00000
    ctx->pc = 0x27f614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f618: 0x3e00008
    ctx->pc = 0x27F618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F61Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F5C8u: goto label_27f5c8;
            case 0x27F5D0u: goto label_27f5d0;
            case 0x27F5E4u: goto label_27f5e4;
            case 0x27F5ECu: goto label_27f5ec;
            case 0x27F60Cu: goto label_27f60c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27F620u;
}
