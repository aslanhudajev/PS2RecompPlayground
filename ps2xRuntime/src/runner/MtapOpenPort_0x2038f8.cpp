#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MtapOpenPort
// Address: 0x2038f8 - 0x203a74
void MtapOpenPort_0x2038f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2038f8u;

    // 0x2038f8: 0x27bdffa0
    ctx->pc = 0x2038f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2038fc: 0xffbf0050
    ctx->pc = 0x2038fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x203900: 0xffb40040
    ctx->pc = 0x203900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x203904: 0xffb30030
    ctx->pc = 0x203904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x203908: 0xffb20020
    ctx->pc = 0x203908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20390c: 0xffb10010
    ctx->pc = 0x20390cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x203910: 0xffb00000
    ctx->pc = 0x203910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203914: 0x3c020031
    ctx->pc = 0x203914u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203918: 0x8c420f10
    ctx->pc = 0x203918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3856)));
    // 0x20391c: 0x1040004d
    ctx->pc = 0x20391Cu;
    {
        const bool branch_taken_0x20391c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x203920u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20391c) {
            ctx->pc = 0x203A54u;
            goto label_203a54;
        }
    }
    ctx->pc = 0x203924u;
    // 0x203924: 0x3c030031
    ctx->pc = 0x203924u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x203928: 0x24631c80
    ctx->pc = 0x203928u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7296));
    // 0x20392c: 0x101080
    ctx->pc = 0x20392cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x203930: 0x431021
    ctx->pc = 0x203930u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x203934: 0x8c430000
    ctx->pc = 0x203934u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203938: 0x24020001
    ctx->pc = 0x203938u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20393c: 0x10620045
    ctx->pc = 0x20393Cu;
    {
        const bool branch_taken_0x20393c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x203940u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x20393c) {
            ctx->pc = 0x203A54u;
            goto label_203a54;
        }
    }
    ctx->pc = 0x203944u;
    // 0x203944: 0x0
    ctx->pc = 0x203944u;
    // NOP
label_203948:
    // 0x203948: 0x8c620f08
    ctx->pc = 0x203948u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3848)));
    // 0x20394c: 0x0
    ctx->pc = 0x20394cu;
    // NOP
    // 0x203950: 0x0
    ctx->pc = 0x203950u;
    // NOP
    // 0x203954: 0x0
    ctx->pc = 0x203954u;
    // NOP
    // 0x203958: 0x0
    ctx->pc = 0x203958u;
    // NOP
    // 0x20395c: 0x1440fffa
    ctx->pc = 0x20395Cu;
    {
        const bool branch_taken_0x20395c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20395c) {
            ctx->pc = 0x203948u;
            goto label_203948;
        }
    }
    ctx->pc = 0x203964u;
    // 0x203964: 0x109080
    ctx->pc = 0x203964u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), 2));
    // 0x203968: 0x240202d
    ctx->pc = 0x203968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20396c: 0xc0818ec
    ctx->pc = 0x20396Cu;
    SET_GPR_U32(ctx, 31, 0x203974u);
    ctx->pc = 0x203970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2063B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        joyGetStatus_0x2063b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203974u; }
    }
    if (ctx->pc != 0x203974u) { return; }
    ctx->pc = 0x203974u;
    // 0x203974: 0x3c020031
    ctx->pc = 0x203974u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203978: 0x24421c80
    ctx->pc = 0x203978u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7296));
    // 0x20397c: 0x2429821
    ctx->pc = 0x20397cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x203980: 0x8e620000
    ctx->pc = 0x203980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x203984: 0x24140002
    ctx->pc = 0x203984u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
    // 0x203988: 0x10540032
    ctx->pc = 0x203988u;
    {
        const bool branch_taken_0x203988 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 20));
        ctx->pc = 0x20398Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x203988) {
            ctx->pc = 0x203A54u;
            goto label_203a54;
        }
    }
    ctx->pc = 0x203990u;
    // 0x203990: 0x2442bd60
    ctx->pc = 0x203990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950240));
    // 0x203994: 0x101900
    ctx->pc = 0x203994u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
    // 0x203998: 0x621821
    ctx->pc = 0x203998u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20399c: 0x8c620000
    ctx->pc = 0x20399cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2039a0: 0x1440002d
    ctx->pc = 0x2039A0u;
    {
        const bool branch_taken_0x2039a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2039A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2039a0) {
            ctx->pc = 0x203A58u;
            goto label_203a58;
        }
    }
    ctx->pc = 0x2039A8u;
    // 0x2039a8: 0x3c030031
    ctx->pc = 0x2039a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2039ac: 0x24020001
    ctx->pc = 0x2039acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2039b0: 0xac620f08
    ctx->pc = 0x2039b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3848), GPR_U32(ctx, 2));
    // 0x2039b4: 0x3c110031
    ctx->pc = 0x2039b4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
    // 0x2039b8: 0x240203e9
    ctx->pc = 0x2039b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1001));
    // 0x2039bc: 0xae220f0c
    ctx->pc = 0x2039bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3852), GPR_U32(ctx, 2));
    // 0x2039c0: 0xc080e10
    ctx->pc = 0x2039C0u;
    SET_GPR_U32(ctx, 31, 0x2039C8u);
    ctx->pc = 0x2039C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203840u;
    {
        const uint32_t __entryPc = ctx->pc;
        mtap_open_0x203840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2039C8u; }
    }
    if (ctx->pc != 0x2039C8u) { return; }
    ctx->pc = 0x2039C8u;
    // 0x2039c8: 0x240303ea
    ctx->pc = 0x2039c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1002));
    // 0x2039cc: 0x1040001c
    ctx->pc = 0x2039CCu;
    {
        const bool branch_taken_0x2039cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2039D0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 3852), GPR_U32(ctx, 3));
        if (branch_taken_0x2039cc) {
            ctx->pc = 0x203A40u;
            goto label_203a40;
        }
    }
    ctx->pc = 0x2039D4u;
    // 0x2039d4: 0xc0b9492
    ctx->pc = 0x2039D4u;
    SET_GPR_U32(ctx, 31, 0x2039DCu);
    ctx->pc = 0x2039D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMtapGetConnection_0x2e5248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2039DCu; }
    }
    if (ctx->pc != 0x2039DCu) { return; }
    ctx->pc = 0x2039DCu;
    // 0x2039dc: 0x240303eb
    ctx->pc = 0x2039dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1003));
    // 0x2039e0: 0x10400017
    ctx->pc = 0x2039E0u;
    {
        const bool branch_taken_0x2039e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2039E4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 3852), GPR_U32(ctx, 3));
        if (branch_taken_0x2039e0) {
            ctx->pc = 0x203A40u;
            goto label_203a40;
        }
    }
    ctx->pc = 0x2039E8u;
    // 0x2039e8: 0xae740000
    ctx->pc = 0x2039e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x2039ec: 0x3c040031
    ctx->pc = 0x2039ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x2039f0: 0x8c820e4c
    ctx->pc = 0x2039f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 3660)));
    // 0x2039f4: 0x2403f0ff
    ctx->pc = 0x2039f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294963455));
    // 0x2039f8: 0x431024
    ctx->pc = 0x2039f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2039fc: 0xac820e4c
    ctx->pc = 0x2039fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3660), GPR_U32(ctx, 2));
    // 0x203a00: 0x3c04003a
    ctx->pc = 0x203a00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x203a04: 0x248448f0
    ctx->pc = 0x203a04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18672));
    // 0x203a08: 0xc0b4a34
    ctx->pc = 0x203A08u;
    SET_GPR_U32(ctx, 31, 0x203A10u);
    ctx->pc = 0x203A0Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203A10u; }
    }
    if (ctx->pc != 0x203A10u) { return; }
    ctx->pc = 0x203A10u;
    // 0x203a10: 0x240203f5
    ctx->pc = 0x203a10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1013));
    // 0x203a14: 0xae220f0c
    ctx->pc = 0x203a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3852), GPR_U32(ctx, 2));
    // 0x203a18: 0x26100002
    ctx->pc = 0x203a18u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
    // 0x203a1c: 0xc0b945a
    ctx->pc = 0x203A1Cu;
    SET_GPR_U32(ctx, 31, 0x203A24u);
    ctx->pc = 0x203A20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMtapPortOpen_0x2e5168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203A24u; }
    }
    if (ctx->pc != 0x203A24u) { return; }
    ctx->pc = 0x203A24u;
    // 0x203a24: 0xc0b9492
    ctx->pc = 0x203A24u;
    SET_GPR_U32(ctx, 31, 0x203A2Cu);
    ctx->pc = 0x203A28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMtapGetConnection_0x2e5248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203A2Cu; }
    }
    if (ctx->pc != 0x203A2Cu) { return; }
    ctx->pc = 0x203A2Cu;
    // 0x203a2c: 0x10400004
    ctx->pc = 0x203A2Cu;
    {
        const bool branch_taken_0x203a2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x203A30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x203a2c) {
            ctx->pc = 0x203A40u;
            goto label_203a40;
        }
    }
    ctx->pc = 0x203A34u;
    // 0x203a34: 0x24421c88
    ctx->pc = 0x203a34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7304));
    // 0x203a38: 0x2421021
    ctx->pc = 0x203a38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x203a3c: 0xac540000
    ctx->pc = 0x203a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_203a40:
    // 0x203a40: 0x3c020031
    ctx->pc = 0x203a40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203a44: 0x2403044b
    ctx->pc = 0x203a44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1099));
    // 0x203a48: 0xac430f0c
    ctx->pc = 0x203a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3852), GPR_U32(ctx, 3));
    // 0x203a4c: 0x3c020031
    ctx->pc = 0x203a4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203a50: 0xac400f08
    ctx->pc = 0x203a50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3848), GPR_U32(ctx, 0));
label_203a54:
    // 0x203a54: 0xdfbf0050
    ctx->pc = 0x203a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_203a58:
    // 0x203a58: 0xdfb40040
    ctx->pc = 0x203a58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203a5c: 0xdfb30030
    ctx->pc = 0x203a5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203a60: 0xdfb20020
    ctx->pc = 0x203a60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203a64: 0xdfb10010
    ctx->pc = 0x203a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203a68: 0xdfb00000
    ctx->pc = 0x203a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203a6c: 0x3e00008
    ctx->pc = 0x203A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203A70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203948u: goto label_203948;
            case 0x203A40u: goto label_203a40;
            case 0x203A54u: goto label_203a54;
            case 0x203A58u: goto label_203a58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203A74u;
}
