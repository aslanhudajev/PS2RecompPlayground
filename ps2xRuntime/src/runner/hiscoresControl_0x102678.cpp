#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: hiscoresControl
// Address: 0x102678 - 0x10273c
void hiscoresControl_0x102678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102678u;

    // 0x102678: 0x27bdffe0
    ctx->pc = 0x102678u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10267c: 0x202d
    ctx->pc = 0x10267cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102680: 0xffb00000
    ctx->pc = 0x102680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102684: 0x282d
    ctx->pc = 0x102684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102688: 0x3c100014
    ctx->pc = 0x102688u;
    SET_GPR_S32(ctx, 16, ((uint32_t)20 << 16));
    // 0x10268c: 0xffbf0010
    ctx->pc = 0x10268cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x102690: 0xc0458fe
    ctx->pc = 0x102690u;
    SET_GPR_U32(ctx, 31, 0x102698u);
    ctx->pc = 0x102694u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4294959360));
    ctx->pc = 0x1163F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadRead_0x1163f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102698u; }
    }
    if (ctx->pc != 0x102698u) { return; }
    ctx->pc = 0x102698u;
    // 0x102698: 0x202d
    ctx->pc = 0x102698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10269c: 0xc04591e
    ctx->pc = 0x10269Cu;
    SET_GPR_U32(ctx, 31, 0x1026A4u);
    ctx->pc = 0x1026A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116478u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x116478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1026A4u; }
    }
    if (ctx->pc != 0x1026A4u) { return; }
    ctx->pc = 0x1026A4u;
    // 0x1026a4: 0x40182d
    ctx->pc = 0x1026a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1026a8: 0x24020006
    ctx->pc = 0x1026a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1026ac: 0x10620006
    ctx->pc = 0x1026ACu;
    {
        const bool branch_taken_0x1026ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1026B0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934804), GPR_U32(ctx, 3));
        if (branch_taken_0x1026ac) {
            ctx->pc = 0x1026C8u;
            goto label_1026c8;
        }
    }
    ctx->pc = 0x1026B4u;
    // 0x1026b4: 0x24020002
    ctx->pc = 0x1026b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1026b8: 0x10620004
    ctx->pc = 0x1026B8u;
    {
        const bool branch_taken_0x1026b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1026BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294959360));
        if (branch_taken_0x1026b8) {
            ctx->pc = 0x1026CCu;
            goto label_1026cc;
        }
    }
    ctx->pc = 0x1026C0u;
    // 0x1026c0: 0x10000007
    ctx->pc = 0x1026C0u;
    {
        const bool branch_taken_0x1026c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1026C4u;
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1026c0) {
            ctx->pc = 0x1026E0u;
            goto label_1026e0;
        }
    }
    ctx->pc = 0x1026C8u;
label_1026c8:
    // 0x1026c8: 0x2602e100
    ctx->pc = 0x1026c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294959360));
label_1026cc:
    // 0x1026cc: 0x90430002
    ctx->pc = 0x1026ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1026d0: 0x90440003
    ctx->pc = 0x1026d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1026d4: 0x31a00
    ctx->pc = 0x1026d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1026d8: 0x641827
    ctx->pc = 0x1026d8u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1026dc: 0xa7838112
    ctx->pc = 0x1026dcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 3));
label_1026e0:
    // 0x1026e0: 0x97828112
    ctx->pc = 0x1026e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
    // 0x1026e4: 0x30420040
    ctx->pc = 0x1026e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x1026e8: 0x14400008
    ctx->pc = 0x1026E8u;
    {
        const bool branch_taken_0x1026e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1026ECu;
        SET_GPR_S32(ctx, 2, ((uint32_t)19 << 16));
        if (branch_taken_0x1026e8) {
            ctx->pc = 0x10270Cu;
            goto label_10270c;
        }
    }
    ctx->pc = 0x1026F0u;
    // 0x1026f0: 0x24030001
    ctx->pc = 0x1026f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1026f4: 0x24441300
    ctx->pc = 0x1026f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4864));
    // 0x1026f8: 0x84820012
    ctx->pc = 0x1026f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1026fc: 0x5043000b
    ctx->pc = 0x1026FCu;
    {
        const bool branch_taken_0x1026fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1026fc) {
            ctx->pc = 0x102700u;
            WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x10272Cu;
            goto label_10272c;
        }
    }
    ctx->pc = 0x102704u;
    // 0x102704: 0x1000000a
    ctx->pc = 0x102704u;
    {
        const bool branch_taken_0x102704 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x102708u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x102704) {
            ctx->pc = 0x102730u;
            goto label_102730;
        }
    }
    ctx->pc = 0x10270Cu;
label_10270c:
    // 0x10270c: 0x24441300
    ctx->pc = 0x10270cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4864));
    // 0x102710: 0x84820012
    ctx->pc = 0x102710u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x102714: 0x14400006
    ctx->pc = 0x102714u;
    {
        const bool branch_taken_0x102714 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x102718u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x102714) {
            ctx->pc = 0x102730u;
            goto label_102730;
        }
    }
    ctx->pc = 0x10271Cu;
    // 0x10271c: 0x24020001
    ctx->pc = 0x10271cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x102720: 0x24030001
    ctx->pc = 0x102720u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x102724: 0xa4820012
    ctx->pc = 0x102724u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x102728: 0xaf838098
    ctx->pc = 0x102728u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934680), GPR_U32(ctx, 3));
label_10272c:
    // 0x10272c: 0xdfbf0010
    ctx->pc = 0x10272cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_102730:
    // 0x102730: 0xdfb00000
    ctx->pc = 0x102730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102734: 0x3e00008
    ctx->pc = 0x102734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102738u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1026C8u: goto label_1026c8;
            case 0x1026CCu: goto label_1026cc;
            case 0x1026E0u: goto label_1026e0;
            case 0x10270Cu: goto label_10270c;
            case 0x10272Cu: goto label_10272c;
            case 0x102730u: goto label_102730;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10273Cu;
}
