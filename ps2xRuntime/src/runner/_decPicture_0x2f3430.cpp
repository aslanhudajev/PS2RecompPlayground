#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _decPicture
// Address: 0x2f3430 - 0x2f3510
void _decPicture_0x2f3430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f3430u;

    // 0x2f3430: 0x27bdffc0
    ctx->pc = 0x2f3430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f3434: 0x24020003
    ctx->pc = 0x2f3434u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f3438: 0xffb10010
    ctx->pc = 0x2f3438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f343c: 0x3c11003a
    ctx->pc = 0x2f343cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f3440: 0xffb20020
    ctx->pc = 0x2f3440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f3444: 0x8e2331ec
    ctx->pc = 0x2f3444u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12780)));
    // 0x2f3448: 0x80902d
    ctx->pc = 0x2f3448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f344c: 0xffbf0030
    ctx->pc = 0x2f344cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f3450: 0x14620009
    ctx->pc = 0x2F3450u;
    {
        const bool branch_taken_0x2f3450 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F3454u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x2f3450) {
            ctx->pc = 0x2F3478u;
            goto label_2f3478;
        }
    }
    ctx->pc = 0x2F3458u;
    // 0x2f3458: 0x3c10003a
    ctx->pc = 0x2f3458u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f345c: 0x8e02315c
    ctx->pc = 0x2f345cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12636)));
    // 0x2f3460: 0x10400006
    ctx->pc = 0x2F3460u;
    {
        const bool branch_taken_0x2f3460 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3464u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12780)));
        if (branch_taken_0x2f3460) {
            ctx->pc = 0x2F347Cu;
            goto label_2f347c;
        }
    }
    ctx->pc = 0x2F3468u;
    // 0x2f3468: 0x3c04003c
    ctx->pc = 0x2f3468u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2f346c: 0xc0bba56
    ctx->pc = 0x2F346Cu;
    SET_GPR_U32(ctx, 31, 0x2F3474u);
    ctx->pc = 0x2F3470u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942984));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3474u; }
    }
    if (ctx->pc != 0x2F3474u) { return; }
    ctx->pc = 0x2F3474u;
    // 0x2f3474: 0xae00315c
    ctx->pc = 0x2f3474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12636), GPR_U32(ctx, 0));
label_2f3478:
    // 0x2f3478: 0x8e2331ec
    ctx->pc = 0x2f3478u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12780)));
label_2f347c:
    // 0x2f347c: 0x24020002
    ctx->pc = 0x2f347cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f3480: 0x1062000f
    ctx->pc = 0x2F3480u;
    {
        const bool branch_taken_0x2f3480 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2F3484u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
        if (branch_taken_0x2f3480) {
            ctx->pc = 0x2F34C0u;
            goto label_2f34c0;
        }
    }
    ctx->pc = 0x2F3488u;
    // 0x2f3488: 0x10400005
    ctx->pc = 0x2F3488u;
    {
        const bool branch_taken_0x2f3488 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F348Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f3488) {
            ctx->pc = 0x2F34A0u;
            goto label_2f34a0;
        }
    }
    ctx->pc = 0x2F3490u;
    // 0x2f3490: 0x10620008
    ctx->pc = 0x2F3490u;
    {
        const bool branch_taken_0x2f3490 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2F3494u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f3490) {
            ctx->pc = 0x2F34B4u;
            goto label_2f34b4;
        }
    }
    ctx->pc = 0x2F3498u;
    // 0x2f3498: 0x1000000d
    ctx->pc = 0x2F3498u;
    {
        const bool branch_taken_0x2f3498 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F349Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2f3498) {
            ctx->pc = 0x2F34D0u;
            goto label_2f34d0;
        }
    }
    ctx->pc = 0x2F34A0u;
label_2f34a0:
    // 0x2f34a0: 0x24020003
    ctx->pc = 0x2f34a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f34a4: 0x14620009
    ctx->pc = 0x2F34A4u;
    {
        const bool branch_taken_0x2f34a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F34A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f34a4) {
            ctx->pc = 0x2F34CCu;
            goto label_2f34cc;
        }
    }
    ctx->pc = 0x2F34ACu;
    // 0x2f34ac: 0x1000000b
    ctx->pc = 0x2F34ACu;
    {
        const bool branch_taken_0x2f34ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F34B0u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 12932)));
        if (branch_taken_0x2f34ac) {
            ctx->pc = 0x2F34DCu;
            goto label_2f34dc;
        }
    }
    ctx->pc = 0x2F34B4u;
label_2f34b4:
    // 0x2f34b4: 0x3c02003a
    ctx->pc = 0x2f34b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f34b8: 0x10000008
    ctx->pc = 0x2F34B8u;
    {
        const bool branch_taken_0x2f34b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F34BCu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 12936)));
        if (branch_taken_0x2f34b8) {
            ctx->pc = 0x2F34DCu;
            goto label_2f34dc;
        }
    }
    ctx->pc = 0x2F34C0u;
label_2f34c0:
    // 0x2f34c0: 0x3c02003a
    ctx->pc = 0x2f34c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f34c4: 0x10000005
    ctx->pc = 0x2F34C4u;
    {
        const bool branch_taken_0x2f34c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F34C8u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 12940)));
        if (branch_taken_0x2f34c4) {
            ctx->pc = 0x2F34DCu;
            goto label_2f34dc;
        }
    }
    ctx->pc = 0x2F34CCu;
label_2f34cc:
    // 0x2f34cc: 0x3c04003c
    ctx->pc = 0x2f34ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_2f34d0:
    // 0x2f34d0: 0x8c503284
    ctx->pc = 0x2f34d0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 12932)));
    // 0x2f34d4: 0xc0bba56
    ctx->pc = 0x2F34D4u;
    SET_GPR_U32(ctx, 31, 0x2F34DCu);
    ctx->pc = 0x2F34D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943016));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F34DCu; }
    }
    if (ctx->pc != 0x2F34DCu) { return; }
    ctx->pc = 0x2F34DCu;
label_2f34dc:
    // 0x2f34dc: 0xc0bc56a
    ctx->pc = 0x2F34DCu;
    SET_GPR_U32(ctx, 31, 0x2F34E4u);
    ctx->pc = 0x2F34E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F15A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _pictureData0_0x2f15a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F34E4u; }
    }
    if (ctx->pc != 0x2F34E4u) { return; }
    ctx->pc = 0x2F34E4u;
    // 0x2f34e4: 0x40182d
    ctx->pc = 0x2f34e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34e8: 0x10600002
    ctx->pc = 0x2F34E8u;
    {
        const bool branch_taken_0x2f34e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F34ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f34e8) {
            ctx->pc = 0x2F34F4u;
            goto label_2f34f4;
        }
    }
    ctx->pc = 0x2F34F0u;
    // 0x2f34f0: 0xae020028
    ctx->pc = 0x2f34f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_2f34f4:
    // 0x2f34f4: 0xdfbf0030
    ctx->pc = 0x2f34f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f34f8: 0x60102d
    ctx->pc = 0x2f34f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34fc: 0xdfb20020
    ctx->pc = 0x2f34fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3500: 0xdfb10010
    ctx->pc = 0x2f3500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3504: 0xdfb00000
    ctx->pc = 0x2f3504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3508: 0x3e00008
    ctx->pc = 0x2F3508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F350Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F3478u: goto label_2f3478;
            case 0x2F347Cu: goto label_2f347c;
            case 0x2F34A0u: goto label_2f34a0;
            case 0x2F34B4u: goto label_2f34b4;
            case 0x2F34C0u: goto label_2f34c0;
            case 0x2F34CCu: goto label_2f34cc;
            case 0x2F34D0u: goto label_2f34d0;
            case 0x2F34DCu: goto label_2f34dc;
            case 0x2F34F4u: goto label_2f34f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F3510u;
}
