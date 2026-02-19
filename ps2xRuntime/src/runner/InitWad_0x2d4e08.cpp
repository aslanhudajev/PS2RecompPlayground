#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitWad
// Address: 0x2d4e08 - 0x2d4f30
void InitWad_0x2d4e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d4e08u;

    // 0x2d4e08: 0x27bdfe40
    ctx->pc = 0x2d4e08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x2d4e0c: 0xffbf01b0
    ctx->pc = 0x2d4e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
    // 0x2d4e10: 0xffb201a0
    ctx->pc = 0x2d4e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 18));
    // 0x2d4e14: 0xffb10190
    ctx->pc = 0x2d4e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 17));
    // 0x2d4e18: 0xffb00180
    ctx->pc = 0x2d4e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 16));
    // 0x2d4e1c: 0x3c03003a
    ctx->pc = 0x2d4e1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d4e20: 0x2402ffff
    ctx->pc = 0x2d4e20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d4e24: 0xac62231c
    ctx->pc = 0x2d4e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8988), GPR_U32(ctx, 2));
    // 0x2d4e28: 0x3c11003b
    ctx->pc = 0x2d4e28u;
    SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
    // 0x2d4e2c: 0x60802d
    ctx->pc = 0x2d4e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d4e30:
    // 0x2d4e30: 0x3a0202d
    ctx->pc = 0x2d4e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e34: 0x282d
    ctx->pc = 0x2d4e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e38: 0xc0b4dce
    ctx->pc = 0x2D4E38u;
    SET_GPR_U32(ctx, 31, 0x2D4E40u);
    ctx->pc = 0x2D4E3Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 31248));
    ctx->pc = 0x2D3738u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_path_0x2d3738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4E40u; }
    }
    if (ctx->pc != 0x2D4E40u) { return; }
    ctx->pc = 0x2D4E40u;
    // 0x2d4e40: 0x3a0202d
    ctx->pc = 0x2d4e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e44: 0xc0c1b06
    ctx->pc = 0x2D4E44u;
    SET_GPR_U32(ctx, 31, 0x2D4E4Cu);
    ctx->pc = 0x2D4E48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x306C18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x306c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4E4Cu; }
    }
    if (ctx->pc != 0x2D4E4Cu) { return; }
    ctx->pc = 0x2D4E4Cu;
    // 0x2d4e4c: 0x440fff8
    ctx->pc = 0x2D4E4Cu;
    {
        const bool branch_taken_0x2d4e4c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D4E50u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8988), GPR_U32(ctx, 2));
        if (branch_taken_0x2d4e4c) {
            ctx->pc = 0x2D4E30u;
            goto label_2d4e30;
        }
    }
    ctx->pc = 0x2D4E54u;
    // 0x2d4e54: 0x3c12003a
    ctx->pc = 0x2d4e54u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2d4e58: 0x3c11003a
    ctx->pc = 0x2d4e58u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2d4e5c: 0x24100004
    ctx->pc = 0x2d4e5cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d4e60: 0x8e44231c
    ctx->pc = 0x2d4e60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8988)));
    // 0x2d4e64: 0x0
    ctx->pc = 0x2d4e64u;
    // NOP
label_2d4e68:
    // 0x2d4e68: 0x26252320
    ctx->pc = 0x2d4e68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8992));
    // 0x2d4e6c: 0xc0c1c2e
    ctx->pc = 0x2D4E6Cu;
    SET_GPR_U32(ctx, 31, 0x2D4E74u);
    ctx->pc = 0x2D4E70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x3070B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x3070b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4E74u; }
    }
    if (ctx->pc != 0x2D4E74u) { return; }
    ctx->pc = 0x2D4E74u;
    // 0x2d4e74: 0x1450fffc
    ctx->pc = 0x2D4E74u;
    {
        const bool branch_taken_0x2d4e74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x2D4E78u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8988)));
        if (branch_taken_0x2d4e74) {
            ctx->pc = 0x2D4E68u;
            goto label_2d4e68;
        }
    }
    ctx->pc = 0x2D4E7Cu;
    // 0x2d4e7c: 0x3c02003a
    ctx->pc = 0x2d4e7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d4e80: 0x8c422320
    ctx->pc = 0x2d4e80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8992)));
    // 0x2d4e84: 0x28900
    ctx->pc = 0x2d4e84u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d4e88: 0x3223000f
    ctx->pc = 0x2d4e88u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 15));
    // 0x2d4e8c: 0x10600002
    ctx->pc = 0x2D4E8Cu;
    {
        const bool branch_taken_0x2d4e8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D4E90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x2d4e8c) {
            ctx->pc = 0x2D4E98u;
            goto label_2d4e98;
        }
    }
    ctx->pc = 0x2D4E94u;
    // 0x2d4e94: 0x438823
    ctx->pc = 0x2d4e94u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d4e98:
    // 0x2d4e98: 0x3c10003a
    ctx->pc = 0x2d4e98u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2d4e9c: 0xc0be97a
    ctx->pc = 0x2D4E9Cu;
    SET_GPR_U32(ctx, 31, 0x2D4EA4u);
    ctx->pc = 0x2D4EA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FA5E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x2fa5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4EA4u; }
    }
    if (ctx->pc != 0x2D4EA4u) { return; }
    ctx->pc = 0x2D4EA4u;
    // 0x2d4ea4: 0x10400011
    ctx->pc = 0x2D4EA4u;
    {
        const bool branch_taken_0x2d4ea4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D4EA8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8996), GPR_U32(ctx, 2));
        if (branch_taken_0x2d4ea4) {
            ctx->pc = 0x2D4EECu;
            goto label_2d4eec;
        }
    }
    ctx->pc = 0x2D4EACu;
    // 0x2d4eac: 0x3c02003a
    ctx->pc = 0x2d4eacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d4eb0: 0x8c44231c
    ctx->pc = 0x2d4eb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8988)));
    // 0x2d4eb4: 0x24050004
    ctx->pc = 0x2d4eb4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d4eb8: 0xc0c1bb4
    ctx->pc = 0x2D4EB8u;
    SET_GPR_U32(ctx, 31, 0x2D4EC0u);
    ctx->pc = 0x2D4EBCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x306ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x306ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4EC0u; }
    }
    if (ctx->pc != 0x2D4EC0u) { return; }
    ctx->pc = 0x2D4EC0u;
    // 0x2d4ec0: 0x12200015
    ctx->pc = 0x2D4EC0u;
    {
        const bool branch_taken_0x2d4ec0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D4EC4u;
        SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
        if (branch_taken_0x2d4ec0) {
            ctx->pc = 0x2D4F18u;
            goto label_2d4f18;
        }
    }
    ctx->pc = 0x2D4EC8u;
    // 0x2d4ec8: 0x8e44231c
    ctx->pc = 0x2d4ec8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8988)));
    // 0x2d4ecc: 0x0
    ctx->pc = 0x2d4eccu;
    // NOP
label_2d4ed0:
    // 0x2d4ed0: 0x8e052324
    ctx->pc = 0x2d4ed0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8996)));
    // 0x2d4ed4: 0xc0c1c2e
    ctx->pc = 0x2D4ED4u;
    SET_GPR_U32(ctx, 31, 0x2D4EDCu);
    ctx->pc = 0x2D4ED8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3070B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x3070b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4EDCu; }
    }
    if (ctx->pc != 0x2D4EDCu) { return; }
    ctx->pc = 0x2D4EDCu;
    // 0x2d4edc: 0x1451fffc
    ctx->pc = 0x2D4EDCu;
    {
        const bool branch_taken_0x2d4edc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x2D4EE0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8988)));
        if (branch_taken_0x2d4edc) {
            ctx->pc = 0x2D4ED0u;
            goto label_2d4ed0;
        }
    }
    ctx->pc = 0x2D4EE4u;
    // 0x2d4ee4: 0x1000000d
    ctx->pc = 0x2D4EE4u;
    {
        const bool branch_taken_0x2d4ee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D4EE8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
        if (branch_taken_0x2d4ee4) {
            ctx->pc = 0x2D4F1Cu;
            goto label_2d4f1c;
        }
    }
    ctx->pc = 0x2D4EECu;
label_2d4eec:
    // 0x2d4eec: 0x27b00100
    ctx->pc = 0x2d4eecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d4ef0: 0x3c02003a
    ctx->pc = 0x2d4ef0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d4ef4: 0x200202d
    ctx->pc = 0x2d4ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ef8: 0x3c05003b
    ctx->pc = 0x2d4ef8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2d4efc: 0x24a57cc8
    ctx->pc = 0x2d4efcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31944));
    // 0x2d4f00: 0x8c462320
    ctx->pc = 0x2d4f00u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 8992)));
    // 0x2d4f04: 0xc0b6252
    ctx->pc = 0x2D4F04u;
    SET_GPR_U32(ctx, 31, 0x2D4F0Cu);
    ctx->pc = 0x2D4F08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4F0Cu; }
    }
    if (ctx->pc != 0x2D4F0Cu) { return; }
    ctx->pc = 0x2D4F0Cu;
    // 0x2d4f0c: 0x200202d
    ctx->pc = 0x2d4f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f10: 0xc0b49a6
    ctx->pc = 0x2D4F10u;
    SET_GPR_U32(ctx, 31, 0x2D4F18u);
    ctx->pc = 0x2D4F14u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4F18u; }
    }
    if (ctx->pc != 0x2D4F18u) { return; }
    ctx->pc = 0x2D4F18u;
label_2d4f18:
    // 0x2d4f18: 0xdfbf01b0
    ctx->pc = 0x2d4f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_2d4f1c:
    // 0x2d4f1c: 0xdfb201a0
    ctx->pc = 0x2d4f1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2d4f20: 0xdfb10190
    ctx->pc = 0x2d4f20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2d4f24: 0xdfb00180
    ctx->pc = 0x2d4f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2d4f28: 0x3e00008
    ctx->pc = 0x2D4F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4F2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D4E30u: goto label_2d4e30;
            case 0x2D4E68u: goto label_2d4e68;
            case 0x2D4E98u: goto label_2d4e98;
            case 0x2D4ED0u: goto label_2d4ed0;
            case 0x2D4EECu: goto label_2d4eec;
            case 0x2D4F18u: goto label_2d4f18;
            case 0x2D4F1Cu: goto label_2d4f1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D4F30u;
}
