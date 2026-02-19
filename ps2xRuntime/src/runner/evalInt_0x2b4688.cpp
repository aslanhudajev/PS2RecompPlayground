#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalInt
// Address: 0x2b4688 - 0x2b4744
void evalInt_0x2b4688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4688u;

    // 0x2b4688: 0x27bdffe0
    ctx->pc = 0x2b4688u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b468c: 0xffbf0010
    ctx->pc = 0x2b468cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b4690: 0xffb00000
    ctx->pc = 0x2b4690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4694: 0x80802d
    ctx->pc = 0x2b4694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4698: 0x8e030000
    ctx->pc = 0x2b4698u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b469c: 0x24020001
    ctx->pc = 0x2b469cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b46a0: 0x50620024
    ctx->pc = 0x2B46A0u;
    {
        const bool branch_taken_0x2b46a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b46a0) {
            ctx->pc = 0x2B46A4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2B4734u;
            goto label_2b4734;
        }
    }
    ctx->pc = 0x2B46A8u;
    // 0x2b46a8: 0x10600005
    ctx->pc = 0x2B46A8u;
    {
        const bool branch_taken_0x2b46a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B46ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b46a8) {
            ctx->pc = 0x2B46C0u;
            goto label_2b46c0;
        }
    }
    ctx->pc = 0x2B46B0u;
    // 0x2b46b0: 0x10620020
    ctx->pc = 0x2B46B0u;
    {
        const bool branch_taken_0x2b46b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B46B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b46b0) {
            ctx->pc = 0x2B4734u;
            goto label_2b4734;
        }
    }
    ctx->pc = 0x2B46B8u;
    // 0x2b46b8: 0x10000005
    ctx->pc = 0x2B46B8u;
    {
        const bool branch_taken_0x2b46b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B46BCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b46b8) {
            ctx->pc = 0x2B46D0u;
            goto label_2b46d0;
        }
    }
    ctx->pc = 0x2B46C0u;
label_2b46c0:
    // 0x2b46c0: 0xc0be822
    ctx->pc = 0x2B46C0u;
    SET_GPR_U32(ctx, 31, 0x2B46C8u);
    ctx->pc = 0x2B46C4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA088u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2fa088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B46C8u; }
    }
    if (ctx->pc != 0x2B46C8u) { return; }
    ctx->pc = 0x2B46C8u;
    // 0x2b46c8: 0x1000001b
    ctx->pc = 0x2B46C8u;
    {
        const bool branch_taken_0x2b46c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B46CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2b46c8) {
            ctx->pc = 0x2B4738u;
            goto label_2b4738;
        }
    }
    ctx->pc = 0x2B46D0u;
label_2b46d0:
    // 0x2b46d0: 0x24844650
    ctx->pc = 0x2b46d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
    // 0x2b46d4: 0x24050020
    ctx->pc = 0x2b46d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b46d8: 0x3c06003b
    ctx->pc = 0x2b46d8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b46dc: 0x24c60d80
    ctx->pc = 0x2b46dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b46e0: 0xc0ad0d6
    ctx->pc = 0x2B46E0u;
    SET_GPR_U32(ctx, 31, 0x2B46E8u);
    ctx->pc = 0x2B46E4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B46E8u; }
    }
    if (ctx->pc != 0x2B46E8u) { return; }
    ctx->pc = 0x2B46E8u;
    // 0x2b46e8: 0xc0ad082
    ctx->pc = 0x2B46E8u;
    SET_GPR_U32(ctx, 31, 0x2B46F0u);
    ctx->pc = 0x2B46ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2B4208u;
    {
        const uint32_t __entryPc = ctx->pc;
        typeStr_0x2b4208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B46F0u; }
    }
    if (ctx->pc != 0x2B46F0u) { return; }
    ctx->pc = 0x2B46F0u;
    // 0x2b46f0: 0x3c04003b
    ctx->pc = 0x2b46f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b46f4: 0x24844708
    ctx->pc = 0x2b46f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18184));
    // 0x2b46f8: 0xc0b4a34
    ctx->pc = 0x2B46F8u;
    SET_GPR_U32(ctx, 31, 0x2B4700u);
    ctx->pc = 0x2B46FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4700u; }
    }
    if (ctx->pc != 0x2B4700u) { return; }
    ctx->pc = 0x2B4700u;
    // 0x2b4700: 0x3c04003b
    ctx->pc = 0x2b4700u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b4704: 0xc0b4a34
    ctx->pc = 0x2B4704u;
    SET_GPR_U32(ctx, 31, 0x2B470Cu);
    ctx->pc = 0x2B4708u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B470Cu; }
    }
    if (ctx->pc != 0x2B470Cu) { return; }
    ctx->pc = 0x2B470Cu;
    // 0x2b470c: 0x3c020037
    ctx->pc = 0x2b470cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b4710: 0x8c4320ac
    ctx->pc = 0x2b4710u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b4714: 0x8c620048
    ctx->pc = 0x2b4714u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b4718: 0x34420001
    ctx->pc = 0x2b4718u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2b471c: 0xac620048
    ctx->pc = 0x2b471cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x2b4720: 0x3c030037
    ctx->pc = 0x2b4720u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2b4724: 0x8c6220b0
    ctx->pc = 0x2b4724u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8368)));
    // 0x2b4728: 0x34420004
    ctx->pc = 0x2b4728u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4));
    // 0x2b472c: 0xac6220b0
    ctx->pc = 0x2b472cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8368), GPR_U32(ctx, 2));
    // 0x2b4730: 0x102d
    ctx->pc = 0x2b4730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4734:
    // 0x2b4734: 0xdfbf0010
    ctx->pc = 0x2b4734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b4738:
    // 0x2b4738: 0xdfb00000
    ctx->pc = 0x2b4738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b473c: 0x3e00008
    ctx->pc = 0x2B473Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4740u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B46C0u: goto label_2b46c0;
            case 0x2B46D0u: goto label_2b46d0;
            case 0x2B4734u: goto label_2b4734;
            case 0x2B4738u: goto label_2b4738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4744u;
}
