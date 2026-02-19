#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NewWorld
// Address: 0x21cb90 - 0x21ccac
void NewWorld_0x21cb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21cb90u;

    // 0x21cb90: 0x27bdffc0
    ctx->pc = 0x21cb90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21cb94: 0xffbf0030
    ctx->pc = 0x21cb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21cb98: 0xffb20020
    ctx->pc = 0x21cb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21cb9c: 0xffb10010
    ctx->pc = 0x21cb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21cba0: 0xffb00000
    ctx->pc = 0x21cba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21cba4: 0x3c12003c
    ctx->pc = 0x21cba4u;
    SET_GPR_U32(ctx, 18, ((uint32_t)60 << 16));
    // 0x21cba8: 0xae40d594
    ctx->pc = 0x21cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294956436), GPR_U32(ctx, 0));
    // 0x21cbac: 0x3c020032
    ctx->pc = 0x21cbacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21cbb0: 0x8c45faa0
    ctx->pc = 0x21cbb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294965920)));
    // 0x21cbb4: 0x10a00015
    ctx->pc = 0x21CBB4u;
    {
        const bool branch_taken_0x21cbb4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CBB8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x21cbb4) {
            ctx->pc = 0x21CC0Cu;
            goto label_21cc0c;
        }
    }
    ctx->pc = 0x21CBBCu;
    // 0x21cbbc: 0xc086fac
    ctx->pc = 0x21CBBCu;
    SET_GPR_U32(ctx, 31, 0x21CBC4u);
    ctx->pc = 0x21CBC0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965752));
    ctx->pc = 0x21BEB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitWorldInfo_0x21beb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBC4u; }
    }
    if (ctx->pc != 0x21CBC4u) { return; }
    ctx->pc = 0x21CBC4u;
    // 0x21cbc4: 0x3c100032
    ctx->pc = 0x21cbc4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x21cbc8: 0xc08724e
    ctx->pc = 0x21CBC8u;
    SET_GPR_U32(ctx, 31, 0x21CBD0u);
    ctx->pc = 0x21CBCCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965916), GPR_U32(ctx, 2));
    ctx->pc = 0x21C938u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldSaveInitState_0x21c938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBD0u; }
    }
    if (ctx->pc != 0x21CBD0u) { return; }
    ctx->pc = 0x21CBD0u;
    // 0x21cbd0: 0x3c030032
    ctx->pc = 0x21cbd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21cbd4: 0x3c110032
    ctx->pc = 0x21cbd4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x21cbd8: 0x8e22fb50
    ctx->pc = 0x21cbd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294966096)));
    // 0x21cbdc: 0xac62fb58
    ctx->pc = 0x21cbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966104), GPR_U32(ctx, 2));
    // 0x21cbe0: 0x8e04fa9c
    ctx->pc = 0x21cbe0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294965916)));
    // 0x21cbe4: 0x80282d
    ctx->pc = 0x21cbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cbe8: 0xc086f50
    ctx->pc = 0x21CBE8u;
    SET_GPR_U32(ctx, 31, 0x21CBF0u);
    ctx->pc = 0x21CBECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21BD40u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewWorldObject_0x21bd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBF0u; }
    }
    if (ctx->pc != 0x21CBF0u) { return; }
    ctx->pc = 0x21CBF0u;
    // 0x21cbf0: 0x8e24fb50
    ctx->pc = 0x21cbf0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294966096)));
    // 0x21cbf4: 0x24051000
    ctx->pc = 0x21cbf4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x21cbf8: 0xc0b41b8
    ctx->pc = 0x21CBF8u;
    SET_GPR_U32(ctx, 31, 0x21CC00u);
    ctx->pc = 0x21CBFCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC00u; }
    }
    if (ctx->pc != 0x21CC00u) { return; }
    ctx->pc = 0x21CC00u;
    // 0x21cc00: 0x24020001
    ctx->pc = 0x21cc00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cc04: 0x10000003
    ctx->pc = 0x21CC04u;
    {
        const bool branch_taken_0x21cc04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CC08u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294956436), GPR_U32(ctx, 2));
        if (branch_taken_0x21cc04) {
            ctx->pc = 0x21CC14u;
            goto label_21cc14;
        }
    }
    ctx->pc = 0x21CC0Cu;
label_21cc0c:
    // 0x21cc0c: 0x3c020032
    ctx->pc = 0x21cc0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21cc10: 0xac40fa9c
    ctx->pc = 0x21cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965916), GPR_U32(ctx, 0));
label_21cc14:
    // 0x21cc14: 0x3c020032
    ctx->pc = 0x21cc14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21cc18: 0x8c45faa4
    ctx->pc = 0x21cc18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294965924)));
    // 0x21cc1c: 0x10a00017
    ctx->pc = 0x21CC1Cu;
    {
        const bool branch_taken_0x21cc1c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CC20u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x21cc1c) {
            ctx->pc = 0x21CC7Cu;
            goto label_21cc7c;
        }
    }
    ctx->pc = 0x21CC24u;
    // 0x21cc24: 0xc086fac
    ctx->pc = 0x21CC24u;
    SET_GPR_U32(ctx, 31, 0x21CC2Cu);
    ctx->pc = 0x21CC28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965928));
    ctx->pc = 0x21BEB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitWorldInfo_0x21beb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC2Cu; }
    }
    if (ctx->pc != 0x21CC2Cu) { return; }
    ctx->pc = 0x21CC2Cu;
    // 0x21cc2c: 0x3c030032
    ctx->pc = 0x21cc2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21cc30: 0xac62fb4c
    ctx->pc = 0x21cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966092), GPR_U32(ctx, 2));
    // 0x21cc34: 0x3c040032
    ctx->pc = 0x21cc34u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x21cc38: 0x3c100032
    ctx->pc = 0x21cc38u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x21cc3c: 0x8e03fb54
    ctx->pc = 0x21cc3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294966100)));
    // 0x21cc40: 0xac83fb58
    ctx->pc = 0x21cc40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966104), GPR_U32(ctx, 3));
    // 0x21cc44: 0x40202d
    ctx->pc = 0x21cc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc48: 0x40282d
    ctx->pc = 0x21cc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc4c: 0xc086f50
    ctx->pc = 0x21CC4Cu;
    SET_GPR_U32(ctx, 31, 0x21CC54u);
    ctx->pc = 0x21CC50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21BD40u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewWorldObject_0x21bd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC54u; }
    }
    if (ctx->pc != 0x21CC54u) { return; }
    ctx->pc = 0x21CC54u;
    // 0x21cc54: 0x3c020032
    ctx->pc = 0x21cc54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21cc58: 0x8e04fb54
    ctx->pc = 0x21cc58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294966100)));
    // 0x21cc5c: 0x2405fffe
    ctx->pc = 0x21cc5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x21cc60: 0x8c46fa80
    ctx->pc = 0x21cc60u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294965888)));
    // 0x21cc64: 0xc0b4126
    ctx->pc = 0x21CC64u;
    SET_GPR_U32(ctx, 31, 0x21CC6Cu);
    ctx->pc = 0x21CC68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC6Cu; }
    }
    if (ctx->pc != 0x21CC6Cu) { return; }
    ctx->pc = 0x21CC6Cu;
    // 0x21cc6c: 0x3c03003c
    ctx->pc = 0x21cc6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21cc70: 0x24020002
    ctx->pc = 0x21cc70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x21cc74: 0x10000004
    ctx->pc = 0x21CC74u;
    {
        const bool branch_taken_0x21cc74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CC78u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956436), GPR_U32(ctx, 2));
        if (branch_taken_0x21cc74) {
            ctx->pc = 0x21CC88u;
            goto label_21cc88;
        }
    }
    ctx->pc = 0x21CC7Cu;
label_21cc7c:
    // 0x21cc7c: 0x3c020032
    ctx->pc = 0x21cc7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21cc80: 0xac40fb4c
    ctx->pc = 0x21cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966092), GPR_U32(ctx, 0));
    // 0x21cc84: 0x3c03003c
    ctx->pc = 0x21cc84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21cc88:
    // 0x21cc88: 0x8c62d594
    ctx->pc = 0x21cc88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294956436)));
    // 0x21cc8c: 0x2442ffff
    ctx->pc = 0x21cc8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21cc90: 0xac62d594
    ctx->pc = 0x21cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956436), GPR_U32(ctx, 2));
    // 0x21cc94: 0xdfbf0030
    ctx->pc = 0x21cc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cc98: 0xdfb20020
    ctx->pc = 0x21cc98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cc9c: 0xdfb10010
    ctx->pc = 0x21cc9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cca0: 0xdfb00000
    ctx->pc = 0x21cca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cca4: 0x8087212
    ctx->pc = 0x21CCA4u;
    ctx->pc = 0x21CCA8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x21C848u;
    ToggleWorldDisplay_0x21c848(rdram, ctx, runtime); return;
    ctx->pc = 0x21CCACu;
}
