#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_SetMpsRaw
// Address: 0x195240 - 0x1952e8
void sfmps_SetMpsRaw_0x195240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_SetMpsRaw");


    ctx->pc = 0x195240u;

    // 0x195240: 0x27bdff90
    ctx->pc = 0x195240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x195244: 0xffb30050
    ctx->pc = 0x195244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x195248: 0xffb20040
    ctx->pc = 0x195248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x19524c: 0xc0982d
    ctx->pc = 0x19524cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195250: 0xffb00020
    ctx->pc = 0x195250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x195254: 0xe0902d
    ctx->pc = 0x195254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195258: 0xffb10030
    ctx->pc = 0x195258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x19525c: 0xffbf0060
    ctx->pc = 0x19525cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x195260: 0xc065590
    ctx->pc = 0x195260u;
    SET_GPR_U32(ctx, 31, 0x195268u);
    ctx->pc = 0x195264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_GetHd_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195268u; }
        else if (ctx->pc != 0x195268u) { ctx->pc = 0x195268u; }
    }
    if (ctx->pc != 0x195268u) { return; }
    ctx->pc = 0x195268u;
    // 0x195268: 0x40882d
    ctx->pc = 0x195268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19526c: 0x12200018
    ctx->pc = 0x19526Cu;
    {
        const bool branch_taken_0x19526c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x195270u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x19526c) {
            ctx->pc = 0x1952D0u;
            goto label_1952d0;
        }
    }
    ctx->pc = 0x195274u;
    // 0x195274: 0x8e220000
    ctx->pc = 0x195274u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x195278: 0x54400016
    ctx->pc = 0x195278u;
    {
        const bool branch_taken_0x195278 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x195278) {
            ctx->pc = 0x19527Cu;
            SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->pc = 0x1952D4u;
            goto label_1952d4;
        }
    }
    ctx->pc = 0x195280u;
    // 0x195280: 0x200202d
    ctx->pc = 0x195280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195284: 0xc0608d8
    ctx->pc = 0x195284u;
    SET_GPR_U32(ctx, 31, 0x19528Cu);
    ctx->pc = 0x195288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182360u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPS_GetLastSysHd_0x182360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19528Cu; }
        else if (ctx->pc != 0x19528Cu) { ctx->pc = 0x19528Cu; }
    }
    if (ctx->pc != 0x19528Cu) { return; }
    ctx->pc = 0x19528Cu;
    // 0x19528c: 0x26300024
    ctx->pc = 0x19528cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 36));
    // 0x195290: 0x240302d
    ctx->pc = 0x195290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195294: 0x240200b0
    ctx->pc = 0x195294u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 176));
    // 0x195298: 0x28c300b1
    ctx->pc = 0x195298u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 177));
    // 0x19529c: 0x8fa4000c
    ctx->pc = 0x19529cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1952a0: 0x18800004
    ctx->pc = 0x1952A0u;
    {
        const bool branch_taken_0x1952a0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1952A4u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
        if (branch_taken_0x1952a0) {
            ctx->pc = 0x1952B4u;
            goto label_1952b4;
        }
    }
    ctx->pc = 0x1952A8u;
    // 0x1952a8: 0x200202d
    ctx->pc = 0x1952a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1952ac: 0x10000005
    ctx->pc = 0x1952ACu;
    {
        const bool branch_taken_0x1952ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1952B0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 6));
        if (branch_taken_0x1952ac) {
            ctx->pc = 0x1952C4u;
            goto label_1952c4;
        }
    }
    ctx->pc = 0x1952B4u;
label_1952b4:
    // 0x1952b4: 0x8fa20008
    ctx->pc = 0x1952b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1952b8: 0x18400004
    ctx->pc = 0x1952B8u;
    {
        const bool branch_taken_0x1952b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1952BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 212));
        if (branch_taken_0x1952b8) {
            ctx->pc = 0x1952CCu;
            goto label_1952cc;
        }
    }
    ctx->pc = 0x1952C0u;
    // 0x1952c0: 0xae060164
    ctx->pc = 0x1952c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 6));
label_1952c4:
    // 0x1952c4: 0xc060172
    ctx->pc = 0x1952C4u;
    SET_GPR_U32(ctx, 31, 0x1952CCu);
    ctx->pc = 0x1952C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1805C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MEM_Copy_0x1805c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1952CCu; }
        else if (ctx->pc != 0x1952CCu) { ctx->pc = 0x1952CCu; }
    }
    if (ctx->pc != 0x1952CCu) { return; }
    ctx->pc = 0x1952CCu;
label_1952cc:
    // 0x1952cc: 0xdfbf0060
    ctx->pc = 0x1952ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1952d0:
    // 0x1952d0: 0xdfb30050
    ctx->pc = 0x1952d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1952d4:
    // 0x1952d4: 0xdfb20040
    ctx->pc = 0x1952d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1952d8: 0xdfb10030
    ctx->pc = 0x1952d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1952dc: 0xdfb00020
    ctx->pc = 0x1952dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1952e0: 0x3e00008
    ctx->pc = 0x1952E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1952E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1952B4u: goto label_1952b4;
            case 0x1952C4u: goto label_1952c4;
            case 0x1952CCu: goto label_1952cc;
            case 0x1952D0u: goto label_1952d0;
            case 0x1952D4u: goto label_1952d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1952E8u;
}
