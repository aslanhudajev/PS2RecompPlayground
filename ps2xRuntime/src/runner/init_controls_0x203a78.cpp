#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_controls
// Address: 0x203a78 - 0x203c44
void init_controls_0x203a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203a78u;

    // 0x203a78: 0x27bdffa0
    ctx->pc = 0x203a78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x203a7c: 0xffbf0050
    ctx->pc = 0x203a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x203a80: 0xffb40040
    ctx->pc = 0x203a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x203a84: 0xffb30030
    ctx->pc = 0x203a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x203a88: 0xffb20020
    ctx->pc = 0x203a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x203a8c: 0xffb10010
    ctx->pc = 0x203a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x203a90: 0xffb00000
    ctx->pc = 0x203a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203a94: 0x3c020031
    ctx->pc = 0x203a94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203a98: 0xac400e4c
    ctx->pc = 0x203a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3660), GPR_U32(ctx, 0));
    // 0x203a9c: 0x3c020031
    ctx->pc = 0x203a9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203aa0: 0xac400e50
    ctx->pc = 0x203aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3664), GPR_U32(ctx, 0));
    // 0x203aa4: 0x802d
    ctx->pc = 0x203aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203aa8: 0x3c020031
    ctx->pc = 0x203aa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203aac: 0x24461c80
    ctx->pc = 0x203aacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 7296));
    // 0x203ab0: 0x24040003
    ctx->pc = 0x203ab0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x203ab4: 0x3c020031
    ctx->pc = 0x203ab4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203ab8: 0x24451c88
    ctx->pc = 0x203ab8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 7304));
    // 0x203abc: 0x101080
    ctx->pc = 0x203abcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_203ac0:
    // 0x203ac0: 0x461821
    ctx->pc = 0x203ac0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x203ac4: 0xac640000
    ctx->pc = 0x203ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x203ac8: 0x451021
    ctx->pc = 0x203ac8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x203acc: 0xac440000
    ctx->pc = 0x203accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x203ad0: 0x26100001
    ctx->pc = 0x203ad0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x203ad4: 0x2a020002
    ctx->pc = 0x203ad4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x203ad8: 0x1440fff9
    ctx->pc = 0x203AD8u;
    {
        const bool branch_taken_0x203ad8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x203ADCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x203ad8) {
            ctx->pc = 0x203AC0u;
            goto label_203ac0;
        }
    }
    ctx->pc = 0x203AE0u;
    // 0x203ae0: 0xc0b8f46
    ctx->pc = 0x203AE0u;
    SET_GPR_U32(ctx, 31, 0x203AE8u);
    ctx->pc = 0x203AE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E3D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadInit_0x2e3d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203AE8u; }
    }
    if (ctx->pc != 0x203AE8u) { return; }
    ctx->pc = 0x203AE8u;
    // 0x203ae8: 0x3c030031
    ctx->pc = 0x203ae8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x203aec: 0x8c620f10
    ctx->pc = 0x203aecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3856)));
    // 0x203af0: 0x4410006
    ctx->pc = 0x203AF0u;
    {
        const bool branch_taken_0x203af0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x203AF4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x203af0) {
            ctx->pc = 0x203B0Cu;
            goto label_203b0c;
        }
    }
    ctx->pc = 0x203AF8u;
    // 0x203af8: 0xac600f10
    ctx->pc = 0x203af8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3856), GPR_U32(ctx, 0));
    // 0x203afc: 0xc0b492e
    ctx->pc = 0x203AFCu;
    SET_GPR_U32(ctx, 31, 0x203B04u);
    ctx->pc = 0x203B00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18688));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203B04u; }
    }
    if (ctx->pc != 0x203B04u) { return; }
    ctx->pc = 0x203B04u;
    // 0x203b04: 0x10000006
    ctx->pc = 0x203B04u;
    {
        const bool branch_taken_0x203b04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203B08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x203b04) {
            ctx->pc = 0x203B20u;
            goto label_203b20;
        }
    }
    ctx->pc = 0x203B0Cu;
label_203b0c:
    // 0x203b0c: 0xc0b93ba
    ctx->pc = 0x203B0Cu;
    SET_GPR_U32(ctx, 31, 0x203B14u);
    ctx->pc = 0x2E4EE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMtapInit_0x2e4ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203B14u; }
    }
    if (ctx->pc != 0x203B14u) { return; }
    ctx->pc = 0x203B14u;
    // 0x203b14: 0x3c030031
    ctx->pc = 0x203b14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x203b18: 0xac620f10
    ctx->pc = 0x203b18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3856), GPR_U32(ctx, 2));
    // 0x203b1c: 0x3c020031
    ctx->pc = 0x203b1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_203b20:
    // 0x203b20: 0x8c420f10
    ctx->pc = 0x203b20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3856)));
    // 0x203b24: 0x1440000b
    ctx->pc = 0x203B24u;
    {
        const bool branch_taken_0x203b24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x203B28u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x203b24) {
            ctx->pc = 0x203B54u;
            goto label_203b54;
        }
    }
    ctx->pc = 0x203B2Cu;
    // 0x203b2c: 0x3c030031
    ctx->pc = 0x203b2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x203b30: 0x24641c80
    ctx->pc = 0x203b30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 7296));
    // 0x203b34: 0x24020001
    ctx->pc = 0x203b34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x203b38: 0xac621c80
    ctx->pc = 0x203b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7296), GPR_U32(ctx, 2));
    // 0x203b3c: 0xac820004
    ctx->pc = 0x203b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x203b40: 0x3c030031
    ctx->pc = 0x203b40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x203b44: 0x24641c88
    ctx->pc = 0x203b44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 7304));
    // 0x203b48: 0xac621c88
    ctx->pc = 0x203b48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7304), GPR_U32(ctx, 2));
    // 0x203b4c: 0x10000009
    ctx->pc = 0x203B4Cu;
    {
        const bool branch_taken_0x203b4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203B50u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x203b4c) {
            ctx->pc = 0x203B74u;
            goto label_203b74;
        }
    }
    ctx->pc = 0x203B54u;
label_203b54:
    // 0x203b54: 0x200202d
    ctx->pc = 0x203b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203b58:
    // 0x203b58: 0xc080e3e
    ctx->pc = 0x203B58u;
    SET_GPR_U32(ctx, 31, 0x203B60u);
    ctx->pc = 0x203B5Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2038F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MtapOpenPort_0x2038f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203B60u; }
    }
    if (ctx->pc != 0x203B60u) { return; }
    ctx->pc = 0x203B60u;
    // 0x203b60: 0x26100001
    ctx->pc = 0x203b60u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x203b64: 0x2a020002
    ctx->pc = 0x203b64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x203b68: 0x1440fffb
    ctx->pc = 0x203B68u;
    {
        const bool branch_taken_0x203b68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x203B6Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x203b68) {
            ctx->pc = 0x203B58u;
            goto label_203b58;
        }
    }
    ctx->pc = 0x203B70u;
    // 0x203b70: 0x802d
    ctx->pc = 0x203b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203b74:
    // 0x203b74: 0x2414ffff
    ctx->pc = 0x203b74u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203b78: 0x3c13003a
    ctx->pc = 0x203b78u;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x203b7c: 0x26020003
    ctx->pc = 0x203b7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 3));
label_203b80:
    // 0x203b80: 0x290182a
    ctx->pc = 0x203b80u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 16)));
    // 0x203b84: 0x203100b
    ctx->pc = 0x203b84u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 16));
    // 0x203b88: 0x28883
    ctx->pc = 0x203b88u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
    // 0x203b8c: 0x32120003
    ctx->pc = 0x203b8cu;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 16), 3));
    // 0x203b90: 0x220202d
    ctx->pc = 0x203b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b94: 0xc080dda
    ctx->pc = 0x203B94u;
    SET_GPR_U32(ctx, 31, 0x203B9Cu);
    ctx->pc = 0x203B98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203768u;
    {
        const uint32_t __entryPc = ctx->pc;
        joy_open_0x203768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203B9Cu; }
    }
    if (ctx->pc != 0x203B9Cu) { return; }
    ctx->pc = 0x203B9Cu;
    // 0x203b9c: 0x54400006
    ctx->pc = 0x203B9Cu;
    {
        const bool branch_taken_0x203b9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x203b9c) {
            ctx->pc = 0x203BA0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x203BB8u;
            goto label_203bb8;
        }
    }
    ctx->pc = 0x203BA4u;
    // 0x203ba4: 0x26644928
    ctx->pc = 0x203ba4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 18728));
    // 0x203ba8: 0x220282d
    ctx->pc = 0x203ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203bac: 0xc0b4a34
    ctx->pc = 0x203BACu;
    SET_GPR_U32(ctx, 31, 0x203BB4u);
    ctx->pc = 0x203BB0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203BB4u; }
    }
    if (ctx->pc != 0x203BB4u) { return; }
    ctx->pc = 0x203BB4u;
    // 0x203bb4: 0x26100001
    ctx->pc = 0x203bb4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_203bb8:
    // 0x203bb8: 0x2a020008
    ctx->pc = 0x203bb8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x203bbc: 0x1440fff0
    ctx->pc = 0x203BBCu;
    {
        const bool branch_taken_0x203bbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x203BC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 3));
        if (branch_taken_0x203bbc) {
            ctx->pc = 0x203B80u;
            goto label_203b80;
        }
    }
    ctx->pc = 0x203BC4u;
    // 0x203bc4: 0x3c04003c
    ctx->pc = 0x203bc4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x203bc8: 0x2484bd40
    ctx->pc = 0x203bc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950208));
    // 0x203bcc: 0x282d
    ctx->pc = 0x203bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203bd0: 0xc0becc6
    ctx->pc = 0x203BD0u;
    SET_GPR_U32(ctx, 31, 0x203BD8u);
    ctx->pc = 0x203BD4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203BD8u; }
    }
    if (ctx->pc != 0x203BD8u) { return; }
    ctx->pc = 0x203BD8u;
    // 0x203bd8: 0x3c04003c
    ctx->pc = 0x203bd8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x203bdc: 0x2484bd60
    ctx->pc = 0x203bdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950240));
    // 0x203be0: 0x282d
    ctx->pc = 0x203be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203be4: 0xc0becc6
    ctx->pc = 0x203BE4u;
    SET_GPR_U32(ctx, 31, 0x203BECu);
    ctx->pc = 0x203BE8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203BECu; }
    }
    if (ctx->pc != 0x203BECu) { return; }
    ctx->pc = 0x203BECu;
    // 0x203bec: 0x3c04003c
    ctx->pc = 0x203becu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x203bf0: 0x2484bd80
    ctx->pc = 0x203bf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x203bf4: 0x282d
    ctx->pc = 0x203bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203bf8: 0xc0becc6
    ctx->pc = 0x203BF8u;
    SET_GPR_U32(ctx, 31, 0x203C00u);
    ctx->pc = 0x203BFCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203C00u; }
    }
    if (ctx->pc != 0x203C00u) { return; }
    ctx->pc = 0x203C00u;
    // 0x203c00: 0x3c04003c
    ctx->pc = 0x203c00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x203c04: 0x2484bda0
    ctx->pc = 0x203c04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950304));
    // 0x203c08: 0x282d
    ctx->pc = 0x203c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c0c: 0xc0becc6
    ctx->pc = 0x203C0Cu;
    SET_GPR_U32(ctx, 31, 0x203C14u);
    ctx->pc = 0x203C10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203C14u; }
    }
    if (ctx->pc != 0x203C14u) { return; }
    ctx->pc = 0x203C14u;
    // 0x203c14: 0x3c04003c
    ctx->pc = 0x203c14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x203c18: 0x2484bdc0
    ctx->pc = 0x203c18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950336));
    // 0x203c1c: 0x282d
    ctx->pc = 0x203c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c20: 0x24060020
    ctx->pc = 0x203c20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x203c24: 0xdfbf0050
    ctx->pc = 0x203c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x203c28: 0xdfb40040
    ctx->pc = 0x203c28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203c2c: 0xdfb30030
    ctx->pc = 0x203c2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203c30: 0xdfb20020
    ctx->pc = 0x203c30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203c34: 0xdfb10010
    ctx->pc = 0x203c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203c38: 0xdfb00000
    ctx->pc = 0x203c38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203c3c: 0x80becc6
    ctx->pc = 0x203C3Cu;
    ctx->pc = 0x203C40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2FB318u;
    memset_0x2fb318(rdram, ctx, runtime); return;
    ctx->pc = 0x203C44u;
}
