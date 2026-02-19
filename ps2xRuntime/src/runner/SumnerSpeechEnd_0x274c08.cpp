#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SumnerSpeechEnd
// Address: 0x274c08 - 0x274fac
void SumnerSpeechEnd_0x274c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x274c08u;

    // 0x274c08: 0x27bdff80
    ctx->pc = 0x274c08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x274c0c: 0xffbf0070
    ctx->pc = 0x274c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x274c10: 0xffb20060
    ctx->pc = 0x274c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x274c14: 0xffb10050
    ctx->pc = 0x274c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x274c18: 0xffb00040
    ctx->pc = 0x274c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x274c1c: 0x3c100034
    ctx->pc = 0x274c1cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x274c20: 0x8e02fbbc
    ctx->pc = 0x274c20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294966204)));
    // 0x274c24: 0x10400007
    ctx->pc = 0x274C24u;
    {
        const bool branch_taken_0x274c24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274C28u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x274c24) {
            ctx->pc = 0x274C44u;
            goto label_274c44;
        }
    }
    ctx->pc = 0x274C2Cu;
    // 0x274c2c: 0xc08496c
    ctx->pc = 0x274C2Cu;
    SET_GPR_U32(ctx, 31, 0x274C34u);
    ctx->pc = 0x274C30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966416));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C34u; }
    }
    if (ctx->pc != 0x274C34u) { return; }
    ctx->pc = 0x274C34u;
    // 0x274c34: 0x8e04fbbc
    ctx->pc = 0x274c34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294966204)));
    // 0x274c38: 0xc0b3f1a
    ctx->pc = 0x274C38u;
    SET_GPR_U32(ctx, 31, 0x274C40u);
    ctx->pc = 0x274C3Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C40u; }
    }
    if (ctx->pc != 0x274C40u) { return; }
    ctx->pc = 0x274C40u;
    // 0x274c40: 0xae02fbbc
    ctx->pc = 0x274c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966204), GPR_U32(ctx, 2));
label_274c44:
    // 0x274c44: 0xc0a89f8
    ctx->pc = 0x274C44u;
    SET_GPR_U32(ctx, 31, 0x274C4Cu);
    ctx->pc = 0x2A27E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        TriggerCameraEnd_0x2a27e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C4Cu; }
    }
    if (ctx->pc != 0x274C4Cu) { return; }
    ctx->pc = 0x274C4Cu;
    // 0x274c4c: 0x3c020034
    ctx->pc = 0x274c4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274c50: 0xc081782
    ctx->pc = 0x274C50u;
    SET_GPR_U32(ctx, 31, 0x274C58u);
    ctx->pc = 0x274C54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966220), GPR_U32(ctx, 0));
    ctx->pc = 0x205E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnablePlayerControls_0x205e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C58u; }
    }
    if (ctx->pc != 0x274C58u) { return; }
    ctx->pc = 0x274C58u;
    // 0x274c58: 0x3c020034
    ctx->pc = 0x274c58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274c5c: 0x8c43fbc4
    ctx->pc = 0x274c5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966212)));
    // 0x274c60: 0x24020070
    ctx->pc = 0x274c60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 112));
    // 0x274c64: 0x1462002f
    ctx->pc = 0x274C64u;
    {
        const bool branch_taken_0x274c64 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x274C68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x274c64) {
            ctx->pc = 0x274D24u;
            goto label_274d24;
        }
    }
    ctx->pc = 0x274C6Cu;
    // 0x274c6c: 0x3c04003b
    ctx->pc = 0x274c6cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x274c70: 0xc0870d4
    ctx->pc = 0x274C70u;
    SET_GPR_U32(ctx, 31, 0x274C78u);
    ctx->pc = 0x274C74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944768));
    ctx->pc = 0x21C350u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWorldObject_0x21c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C78u; }
    }
    if (ctx->pc != 0x274C78u) { return; }
    ctx->pc = 0x274C78u;
    // 0x274c78: 0x40182d
    ctx->pc = 0x274c78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c7c: 0x10600024
    ctx->pc = 0x274C7Cu;
    {
        const bool branch_taken_0x274c7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x274C80u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x274c7c) {
            ctx->pc = 0x274D10u;
            goto label_274d10;
        }
    }
    ctx->pc = 0x274C84u;
    // 0x274c84: 0x8c640028
    ctx->pc = 0x274c84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x274c88: 0xc0b4302
    ctx->pc = 0x274C88u;
    SET_GPR_U32(ctx, 31, 0x274C90u);
    ctx->pc = 0x274C8Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C90u; }
    }
    if (ctx->pc != 0x274C90u) { return; }
    ctx->pc = 0x274C90u;
    // 0x274c90: 0x202d
    ctx->pc = 0x274c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c94: 0x3c05003b
    ctx->pc = 0x274c94u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x274c98: 0x24a5a810
    ctx->pc = 0x274c98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294944784));
    // 0x274c9c: 0x302d
    ctx->pc = 0x274c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ca0: 0xc09e6d2
    ctx->pc = 0x274CA0u;
    SET_GPR_U32(ctx, 31, 0x274CA8u);
    ctx->pc = 0x274CA4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCustomEffect_0x279b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274CA8u; }
    }
    if (ctx->pc != 0x274CA8u) { return; }
    ctx->pc = 0x274CA8u;
    // 0x274ca8: 0x4400006
    ctx->pc = 0x274CA8u;
    {
        const bool branch_taken_0x274ca8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x274CACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x274ca8) {
            ctx->pc = 0x274CC4u;
            goto label_274cc4;
        }
    }
    ctx->pc = 0x274CB0u;
    // 0x274cb0: 0x27a50030
    ctx->pc = 0x274cb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x274cb4: 0x44806000
    ctx->pc = 0x274cb4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x274cb8: 0x3c060008
    ctx->pc = 0x274cb8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)8 << 16));
    // 0x274cbc: 0xc09f5fa
    ctx->pc = 0x274CBCu;
    SET_GPR_U32(ctx, 31, 0x274CC4u);
    ctx->pc = 0x274CC0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274CC4u; }
    }
    if (ctx->pc != 0x274CC4u) { return; }
    ctx->pc = 0x274CC4u;
label_274cc4:
    // 0x274cc4: 0xc094176
    ctx->pc = 0x274CC4u;
    SET_GPR_U32(ctx, 31, 0x274CCCu);
    ctx->pc = 0x274CC8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2505D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        RuneCamActivate_0x2505d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274CCCu; }
    }
    if (ctx->pc != 0x274CCCu) { return; }
    ctx->pc = 0x274CCCu;
    // 0x274ccc: 0xc096e58
    ctx->pc = 0x274CCCu;
    SET_GPR_U32(ctx, 31, 0x274CD4u);
    ctx->pc = 0x274CD0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2051));
    ctx->pc = 0x25B960u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindExit_0x25b960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274CD4u; }
    }
    if (ctx->pc != 0x274CD4u) { return; }
    ctx->pc = 0x274CD4u;
    // 0x274cd4: 0x8c440070
    ctx->pc = 0x274cd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x274cd8: 0x240500ff
    ctx->pc = 0x274cd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x274cdc: 0xc0b40c0
    ctx->pc = 0x274CDCu;
    SET_GPR_U32(ctx, 31, 0x274CE4u);
    ctx->pc = 0x274CE0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274CE4u; }
    }
    if (ctx->pc != 0x274CE4u) { return; }
    ctx->pc = 0x274CE4u;
    // 0x274ce4: 0x2404ffff
    ctx->pc = 0x274ce4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x274ce8: 0xc09d9fe
    ctx->pc = 0x274CE8u;
    SET_GPR_U32(ctx, 31, 0x274CF0u);
    ctx->pc = 0x274CECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8191));
    ctx->pc = 0x2767F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasRune_0x2767f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274CF0u; }
    }
    if (ctx->pc != 0x274CF0u) { return; }
    ctx->pc = 0x274CF0u;
    // 0x274cf0: 0x10400004
    ctx->pc = 0x274CF0u;
    {
        const bool branch_taken_0x274cf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274CF4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x274cf0) {
            ctx->pc = 0x274D04u;
            goto label_274d04;
        }
    }
    ctx->pc = 0x274CF8u;
    // 0x274cf8: 0x2402001e
    ctx->pc = 0x274cf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x274cfc: 0x100000a5
    ctx->pc = 0x274CFCu;
    {
        const bool branch_taken_0x274cfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274D00u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 2));
        if (branch_taken_0x274cfc) {
            ctx->pc = 0x274F94u;
            goto label_274f94;
        }
    }
    ctx->pc = 0x274D04u;
label_274d04:
    // 0x274d04: 0x24020020
    ctx->pc = 0x274d04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x274d08: 0x100000a2
    ctx->pc = 0x274D08u;
    {
        const bool branch_taken_0x274d08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274D0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 2));
        if (branch_taken_0x274d08) {
            ctx->pc = 0x274F94u;
            goto label_274f94;
        }
    }
    ctx->pc = 0x274D10u;
label_274d10:
    // 0x274d10: 0x3c04003b
    ctx->pc = 0x274d10u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x274d14: 0xc0b492e
    ctx->pc = 0x274D14u;
    SET_GPR_U32(ctx, 31, 0x274D1Cu);
    ctx->pc = 0x274D18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944792));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274D1Cu; }
    }
    if (ctx->pc != 0x274D1Cu) { return; }
    ctx->pc = 0x274D1Cu;
    // 0x274d1c: 0x1000009e
    ctx->pc = 0x274D1Cu;
    {
        const bool branch_taken_0x274d1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274D20u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x274d1c) {
            ctx->pc = 0x274F98u;
            goto label_274f98;
        }
    }
    ctx->pc = 0x274D24u;
label_274d24:
    // 0x274d24: 0x8c51fbc4
    ctx->pc = 0x274d24u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294966212)));
    // 0x274d28: 0x2a220064
    ctx->pc = 0x274d28u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 100));
    // 0x274d2c: 0x14400050
    ctx->pc = 0x274D2Cu;
    {
        const bool branch_taken_0x274d2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x274D30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x274d2c) {
            ctx->pc = 0x274E70u;
            goto label_274e70;
        }
    }
    ctx->pc = 0x274D34u;
    // 0x274d34: 0x2632ff9c
    ctx->pc = 0x274d34u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 4294967196));
    // 0x274d38: 0x2a42000f
    ctx->pc = 0x274d38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 15));
    // 0x274d3c: 0x10400044
    ctx->pc = 0x274D3Cu;
    {
        const bool branch_taken_0x274d3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274D40u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x274d3c) {
            ctx->pc = 0x274E50u;
            goto label_274e50;
        }
    }
    ctx->pc = 0x274D44u;
    // 0x274d44: 0xc0870d4
    ctx->pc = 0x274D44u;
    SET_GPR_U32(ctx, 31, 0x274D4Cu);
    ctx->pc = 0x274D48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944816));
    ctx->pc = 0x21C350u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWorldObject_0x21c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274D4Cu; }
    }
    if (ctx->pc != 0x274D4Cu) { return; }
    ctx->pc = 0x274D4Cu;
    // 0x274d4c: 0x40182d
    ctx->pc = 0x274d4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d50: 0x1060003f
    ctx->pc = 0x274D50u;
    {
        const bool branch_taken_0x274d50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x274D54u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 13));
        if (branch_taken_0x274d50) {
            ctx->pc = 0x274E50u;
            goto label_274e50;
        }
    }
    ctx->pc = 0x274D58u;
    // 0x274d58: 0x1040001b
    ctx->pc = 0x274D58u;
    {
        const bool branch_taken_0x274d58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x274d58) {
            ctx->pc = 0x274DC8u;
            goto label_274dc8;
        }
    }
    ctx->pc = 0x274D60u;
    // 0x274d60: 0x8c640028
    ctx->pc = 0x274d60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x274d64: 0x3a0282d
    ctx->pc = 0x274d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d68: 0xc0b4302
    ctx->pc = 0x274D68u;
    SET_GPR_U32(ctx, 31, 0x274D70u);
    ctx->pc = 0x274D6Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274D70u; }
    }
    if (ctx->pc != 0x274D70u) { return; }
    ctx->pc = 0x274D70u;
    // 0x274d70: 0x3c10003c
    ctx->pc = 0x274d70u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x274d74: 0x26043a40
    ctx->pc = 0x274d74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 14912));
    // 0x274d78: 0x3c05003b
    ctx->pc = 0x274d78u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x274d7c: 0x24a5a840
    ctx->pc = 0x274d7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294944832));
    // 0x274d80: 0xc0b6252
    ctx->pc = 0x274D80u;
    SET_GPR_U32(ctx, 31, 0x274D88u);
    ctx->pc = 0x274D84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 4294967197));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274D88u; }
    }
    if (ctx->pc != 0x274D88u) { return; }
    ctx->pc = 0x274D88u;
    // 0x274d88: 0x202d
    ctx->pc = 0x274d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d8c: 0x26053a40
    ctx->pc = 0x274d8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 14912));
    // 0x274d90: 0x302d
    ctx->pc = 0x274d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d94: 0xc09e6d2
    ctx->pc = 0x274D94u;
    SET_GPR_U32(ctx, 31, 0x274D9Cu);
    ctx->pc = 0x274D98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCustomEffect_0x279b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274D9Cu; }
    }
    if (ctx->pc != 0x274D9Cu) { return; }
    ctx->pc = 0x274D9Cu;
    // 0x274d9c: 0x4400006
    ctx->pc = 0x274D9Cu;
    {
        const bool branch_taken_0x274d9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x274DA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x274d9c) {
            ctx->pc = 0x274DB8u;
            goto label_274db8;
        }
    }
    ctx->pc = 0x274DA4u;
    // 0x274da4: 0x27a50030
    ctx->pc = 0x274da4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x274da8: 0x44806000
    ctx->pc = 0x274da8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x274dac: 0x3c060008
    ctx->pc = 0x274dacu;
    SET_GPR_U32(ctx, 6, ((uint32_t)8 << 16));
    // 0x274db0: 0xc09f5fa
    ctx->pc = 0x274DB0u;
    SET_GPR_U32(ctx, 31, 0x274DB8u);
    ctx->pc = 0x274DB4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274DB8u; }
    }
    if (ctx->pc != 0x274DB8u) { return; }
    ctx->pc = 0x274DB8u;
label_274db8:
    // 0x274db8: 0xc094176
    ctx->pc = 0x274DB8u;
    SET_GPR_U32(ctx, 31, 0x274DC0u);
    ctx->pc = 0x274DBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2505D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        RuneCamActivate_0x2505d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274DC0u; }
    }
    if (ctx->pc != 0x274DC0u) { return; }
    ctx->pc = 0x274DC0u;
    // 0x274dc0: 0xc0984d0
    ctx->pc = 0x274DC0u;
    SET_GPR_U32(ctx, 31, 0x274DC8u);
    ctx->pc = 0x274DC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x261340u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTowerFX_0x261340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274DC8u; }
    }
    if (ctx->pc != 0x274DC8u) { return; }
    ctx->pc = 0x274DC8u;
label_274dc8:
    // 0x274dc8: 0xc096e58
    ctx->pc = 0x274DC8u;
    SET_GPR_U32(ctx, 31, 0x274DD0u);
    ctx->pc = 0x274DCCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1536));
    ctx->pc = 0x25B960u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindExit_0x25b960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274DD0u; }
    }
    if (ctx->pc != 0x274DD0u) { return; }
    ctx->pc = 0x274DD0u;
    // 0x274dd0: 0x8c440070
    ctx->pc = 0x274dd0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x274dd4: 0x240500ff
    ctx->pc = 0x274dd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x274dd8: 0xc0b40c0
    ctx->pc = 0x274DD8u;
    SET_GPR_U32(ctx, 31, 0x274DE0u);
    ctx->pc = 0x274DDCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274DE0u; }
    }
    if (ctx->pc != 0x274DE0u) { return; }
    ctx->pc = 0x274DE0u;
    // 0x274de0: 0x2404ffff
    ctx->pc = 0x274de0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x274de4: 0xc09da6e
    ctx->pc = 0x274DE4u;
    SET_GPR_U32(ctx, 31, 0x274DECu);
    ctx->pc = 0x274DE8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1022));
    ctx->pc = 0x2769B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasShard_0x2769b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274DECu; }
    }
    if (ctx->pc != 0x274DECu) { return; }
    ctx->pc = 0x274DECu;
    // 0x274dec: 0x1040000d
    ctx->pc = 0x274DECu;
    {
        const bool branch_taken_0x274dec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274DF0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x274dec) {
            ctx->pc = 0x274E24u;
            goto label_274e24;
        }
    }
    ctx->pc = 0x274DF4u;
    // 0x274df4: 0xc09d9fe
    ctx->pc = 0x274DF4u;
    SET_GPR_U32(ctx, 31, 0x274DFCu);
    ctx->pc = 0x274DF8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4095));
    ctx->pc = 0x2767F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasRune_0x2767f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274DFCu; }
    }
    if (ctx->pc != 0x274DFCu) { return; }
    ctx->pc = 0x274DFCu;
    // 0x274dfc: 0x10400009
    ctx->pc = 0x274DFCu;
    {
        const bool branch_taken_0x274dfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274E00u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 13));
        if (branch_taken_0x274dfc) {
            ctx->pc = 0x274E24u;
            goto label_274e24;
        }
    }
    ctx->pc = 0x274E04u;
    // 0x274e04: 0x10400004
    ctx->pc = 0x274E04u;
    {
        const bool branch_taken_0x274e04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274E08u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x274e04) {
            ctx->pc = 0x274E18u;
            goto label_274e18;
        }
    }
    ctx->pc = 0x274E0Cu;
    // 0x274e0c: 0x24020014
    ctx->pc = 0x274e0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x274e10: 0x10000060
    ctx->pc = 0x274E10u;
    {
        const bool branch_taken_0x274e10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274E14u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 2));
        if (branch_taken_0x274e10) {
            ctx->pc = 0x274F94u;
            goto label_274f94;
        }
    }
    ctx->pc = 0x274E18u;
label_274e18:
    // 0x274e18: 0x24020015
    ctx->pc = 0x274e18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
    // 0x274e1c: 0x1000005d
    ctx->pc = 0x274E1Cu;
    {
        const bool branch_taken_0x274e1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274E20u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 2));
        if (branch_taken_0x274e1c) {
            ctx->pc = 0x274F94u;
            goto label_274f94;
        }
    }
    ctx->pc = 0x274E24u;
label_274e24:
    // 0x274e24: 0x2404ffff
    ctx->pc = 0x274e24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x274e28: 0xc09d9fe
    ctx->pc = 0x274E28u;
    SET_GPR_U32(ctx, 31, 0x274E30u);
    ctx->pc = 0x274E2Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4095));
    ctx->pc = 0x2767F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasRune_0x2767f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274E30u; }
    }
    if (ctx->pc != 0x274E30u) { return; }
    ctx->pc = 0x274E30u;
    // 0x274e30: 0x10400004
    ctx->pc = 0x274E30u;
    {
        const bool branch_taken_0x274e30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274E34u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x274e30) {
            ctx->pc = 0x274E44u;
            goto label_274e44;
        }
    }
    ctx->pc = 0x274E38u;
    // 0x274e38: 0x24020018
    ctx->pc = 0x274e38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x274e3c: 0x10000055
    ctx->pc = 0x274E3Cu;
    {
        const bool branch_taken_0x274e3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274E40u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 2));
        if (branch_taken_0x274e3c) {
            ctx->pc = 0x274F94u;
            goto label_274f94;
        }
    }
    ctx->pc = 0x274E44u;
label_274e44:
    // 0x274e44: 0x24020016
    ctx->pc = 0x274e44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
    // 0x274e48: 0x10000052
    ctx->pc = 0x274E48u;
    {
        const bool branch_taken_0x274e48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274E4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 2));
        if (branch_taken_0x274e48) {
            ctx->pc = 0x274F94u;
            goto label_274f94;
        }
    }
    ctx->pc = 0x274E50u;
label_274e50:
    // 0x274e50: 0x2a42000d
    ctx->pc = 0x274e50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 13));
    // 0x274e54: 0x10400050
    ctx->pc = 0x274E54u;
    {
        const bool branch_taken_0x274e54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274E58u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x274e54) {
            ctx->pc = 0x274F98u;
            goto label_274f98;
        }
    }
    ctx->pc = 0x274E5Cu;
    // 0x274e5c: 0x3c04003b
    ctx->pc = 0x274e5cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x274e60: 0xc0b492e
    ctx->pc = 0x274E60u;
    SET_GPR_U32(ctx, 31, 0x274E68u);
    ctx->pc = 0x274E64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944840));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274E68u; }
    }
    if (ctx->pc != 0x274E68u) { return; }
    ctx->pc = 0x274E68u;
    // 0x274e68: 0x1000004b
    ctx->pc = 0x274E68u;
    {
        const bool branch_taken_0x274e68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274E6Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x274e68) {
            ctx->pc = 0x274F98u;
            goto label_274f98;
        }
    }
    ctx->pc = 0x274E70u;
label_274e70:
    // 0x274e70: 0x8c46fbc4
    ctx->pc = 0x274e70u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294966212)));
    // 0x274e74: 0x4c00047
    ctx->pc = 0x274E74u;
    {
        const bool branch_taken_0x274e74 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x274E78u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x274e74) {
            ctx->pc = 0x274F94u;
            goto label_274f94;
        }
    }
    ctx->pc = 0x274E7Cu;
    // 0x274e7c: 0x2a420009
    ctx->pc = 0x274e7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 9));
    // 0x274e80: 0x10400045
    ctx->pc = 0x274E80u;
    {
        const bool branch_taken_0x274e80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274E84u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x274e80) {
            ctx->pc = 0x274F98u;
            goto label_274f98;
        }
    }
    ctx->pc = 0x274E88u;
    // 0x274e88: 0x3c04003b
    ctx->pc = 0x274e88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x274e8c: 0xc0870d4
    ctx->pc = 0x274E8Cu;
    SET_GPR_U32(ctx, 31, 0x274E94u);
    ctx->pc = 0x274E90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944864));
    ctx->pc = 0x21C350u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWorldObject_0x21c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274E94u; }
    }
    if (ctx->pc != 0x274E94u) { return; }
    ctx->pc = 0x274E94u;
    // 0x274e94: 0x40182d
    ctx->pc = 0x274e94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e98: 0x10600038
    ctx->pc = 0x274E98u;
    {
        const bool branch_taken_0x274e98 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x274E9Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x274e98) {
            ctx->pc = 0x274F7Cu;
            goto label_274f7c;
        }
    }
    ctx->pc = 0x274EA0u;
    // 0x274ea0: 0x8c640028
    ctx->pc = 0x274ea0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x274ea4: 0xc0b4302
    ctx->pc = 0x274EA4u;
    SET_GPR_U32(ctx, 31, 0x274EACu);
    ctx->pc = 0x274EA8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274EACu; }
    }
    if (ctx->pc != 0x274EACu) { return; }
    ctx->pc = 0x274EACu;
    // 0x274eac: 0x3c10003c
    ctx->pc = 0x274eacu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x274eb0: 0x26043a40
    ctx->pc = 0x274eb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 14912));
    // 0x274eb4: 0x3c05003b
    ctx->pc = 0x274eb4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x274eb8: 0x24a5a870
    ctx->pc = 0x274eb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294944880));
    // 0x274ebc: 0xc0b6252
    ctx->pc = 0x274EBCu;
    SET_GPR_U32(ctx, 31, 0x274EC4u);
    ctx->pc = 0x274EC0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274EC4u; }
    }
    if (ctx->pc != 0x274EC4u) { return; }
    ctx->pc = 0x274EC4u;
    // 0x274ec4: 0x202d
    ctx->pc = 0x274ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ec8: 0x26053a40
    ctx->pc = 0x274ec8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 14912));
    // 0x274ecc: 0x302d
    ctx->pc = 0x274eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ed0: 0xc09e6d2
    ctx->pc = 0x274ED0u;
    SET_GPR_U32(ctx, 31, 0x274ED8u);
    ctx->pc = 0x274ED4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCustomEffect_0x279b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274ED8u; }
    }
    if (ctx->pc != 0x274ED8u) { return; }
    ctx->pc = 0x274ED8u;
    // 0x274ed8: 0x4400006
    ctx->pc = 0x274ED8u;
    {
        const bool branch_taken_0x274ed8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x274EDCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
        if (branch_taken_0x274ed8) {
            ctx->pc = 0x274EF4u;
            goto label_274ef4;
        }
    }
    ctx->pc = 0x274EE0u;
    // 0x274ee0: 0x40202d
    ctx->pc = 0x274ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ee4: 0x44806000
    ctx->pc = 0x274ee4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x274ee8: 0x3c060008
    ctx->pc = 0x274ee8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)8 << 16));
    // 0x274eec: 0xc09f5fa
    ctx->pc = 0x274EECu;
    SET_GPR_U32(ctx, 31, 0x274EF4u);
    ctx->pc = 0x274EF0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274EF4u; }
    }
    if (ctx->pc != 0x274EF4u) { return; }
    ctx->pc = 0x274EF4u;
label_274ef4:
    // 0x274ef4: 0xc0941a0
    ctx->pc = 0x274EF4u;
    SET_GPR_U32(ctx, 31, 0x274EFCu);
    ctx->pc = 0x274EF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x250680u;
    {
        const uint32_t __entryPc = ctx->pc;
        WindowCamActivate_0x250680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274EFCu; }
    }
    if (ctx->pc != 0x274EFCu) { return; }
    ctx->pc = 0x274EFCu;
    // 0x274efc: 0x3c04003b
    ctx->pc = 0x274efcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x274f00: 0xc0870d4
    ctx->pc = 0x274F00u;
    SET_GPR_U32(ctx, 31, 0x274F08u);
    ctx->pc = 0x274F04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944888));
    ctx->pc = 0x21C350u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWorldObject_0x21c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F08u; }
    }
    if (ctx->pc != 0x274F08u) { return; }
    ctx->pc = 0x274F08u;
    // 0x274f08: 0x10400004
    ctx->pc = 0x274F08u;
    {
        const bool branch_taken_0x274f08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274F0Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x274f08) {
            ctx->pc = 0x274F1Cu;
            goto label_274f1c;
        }
    }
    ctx->pc = 0x274F10u;
    // 0x274f10: 0x8c440028
    ctx->pc = 0x274f10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x274f14: 0xc0b41b8
    ctx->pc = 0x274F14u;
    SET_GPR_U32(ctx, 31, 0x274F1Cu);
    ctx->pc = 0x274F18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F1Cu; }
    }
    if (ctx->pc != 0x274F1Cu) { return; }
    ctx->pc = 0x274F1Cu;
label_274f1c:
    // 0x274f1c: 0x2404ffff
    ctx->pc = 0x274f1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x274f20: 0xc09da6e
    ctx->pc = 0x274F20u;
    SET_GPR_U32(ctx, 31, 0x274F28u);
    ctx->pc = 0x274F24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 510));
    ctx->pc = 0x2769B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasShard_0x2769b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F28u; }
    }
    if (ctx->pc != 0x274F28u) { return; }
    ctx->pc = 0x274F28u;
    // 0x274f28: 0x1040000e
    ctx->pc = 0x274F28u;
    {
        const bool branch_taken_0x274f28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274F2Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x274f28) {
            ctx->pc = 0x274F64u;
            goto label_274f64;
        }
    }
    ctx->pc = 0x274F30u;
    // 0x274f30: 0xc096e58
    ctx->pc = 0x274F30u;
    SET_GPR_U32(ctx, 31, 0x274F38u);
    ctx->pc = 0x274F34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1280));
    ctx->pc = 0x25B960u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindExit_0x25b960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F38u; }
    }
    if (ctx->pc != 0x274F38u) { return; }
    ctx->pc = 0x274F38u;
    // 0x274f38: 0x8c440070
    ctx->pc = 0x274f38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x274f3c: 0x240500ff
    ctx->pc = 0x274f3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x274f40: 0xc0b40c0
    ctx->pc = 0x274F40u;
    SET_GPR_U32(ctx, 31, 0x274F48u);
    ctx->pc = 0x274F44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F48u; }
    }
    if (ctx->pc != 0x274F48u) { return; }
    ctx->pc = 0x274F48u;
    // 0x274f48: 0x3c030034
    ctx->pc = 0x274f48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x274f4c: 0x2402000a
    ctx->pc = 0x274f4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x274f50: 0xac62fbe4
    ctx->pc = 0x274f50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 2));
    // 0x274f54: 0xc0984d0
    ctx->pc = 0x274F54u;
    SET_GPR_U32(ctx, 31, 0x274F5Cu);
    ctx->pc = 0x274F58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x261340u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTowerFX_0x261340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F5Cu; }
    }
    if (ctx->pc != 0x274F5Cu) { return; }
    ctx->pc = 0x274F5Cu;
    // 0x274f5c: 0x1000000e
    ctx->pc = 0x274F5Cu;
    {
        const bool branch_taken_0x274f5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274F60u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x274f5c) {
            ctx->pc = 0x274F98u;
            goto label_274f98;
        }
    }
    ctx->pc = 0x274F64u;
label_274f64:
    // 0x274f64: 0x2402000e
    ctx->pc = 0x274f64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x274f68: 0xac62fbe4
    ctx->pc = 0x274f68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966244), GPR_U32(ctx, 2));
    // 0x274f6c: 0xc0984d0
    ctx->pc = 0x274F6Cu;
    SET_GPR_U32(ctx, 31, 0x274F74u);
    ctx->pc = 0x274F70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x261340u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTowerFX_0x261340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F74u; }
    }
    if (ctx->pc != 0x274F74u) { return; }
    ctx->pc = 0x274F74u;
    // 0x274f74: 0x10000008
    ctx->pc = 0x274F74u;
    {
        const bool branch_taken_0x274f74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274F78u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x274f74) {
            ctx->pc = 0x274F98u;
            goto label_274f98;
        }
    }
    ctx->pc = 0x274F7Cu;
label_274f7c:
    // 0x274f7c: 0x2a420009
    ctx->pc = 0x274f7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 9));
    // 0x274f80: 0x10400005
    ctx->pc = 0x274F80u;
    {
        const bool branch_taken_0x274f80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274F84u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x274f80) {
            ctx->pc = 0x274F98u;
            goto label_274f98;
        }
    }
    ctx->pc = 0x274F88u;
    // 0x274f88: 0x3c04003b
    ctx->pc = 0x274f88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x274f8c: 0xc0b492e
    ctx->pc = 0x274F8Cu;
    SET_GPR_U32(ctx, 31, 0x274F94u);
    ctx->pc = 0x274F90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944904));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F94u; }
    }
    if (ctx->pc != 0x274F94u) { return; }
    ctx->pc = 0x274F94u;
label_274f94:
    // 0x274f94: 0xdfbf0070
    ctx->pc = 0x274f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_274f98:
    // 0x274f98: 0xdfb20060
    ctx->pc = 0x274f98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x274f9c: 0xdfb10050
    ctx->pc = 0x274f9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274fa0: 0xdfb00040
    ctx->pc = 0x274fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x274fa4: 0x3e00008
    ctx->pc = 0x274FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274FA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274C44u: goto label_274c44;
            case 0x274CC4u: goto label_274cc4;
            case 0x274D04u: goto label_274d04;
            case 0x274D10u: goto label_274d10;
            case 0x274D24u: goto label_274d24;
            case 0x274DB8u: goto label_274db8;
            case 0x274DC8u: goto label_274dc8;
            case 0x274E18u: goto label_274e18;
            case 0x274E24u: goto label_274e24;
            case 0x274E44u: goto label_274e44;
            case 0x274E50u: goto label_274e50;
            case 0x274E70u: goto label_274e70;
            case 0x274EF4u: goto label_274ef4;
            case 0x274F1Cu: goto label_274f1c;
            case 0x274F64u: goto label_274f64;
            case 0x274F7Cu: goto label_274f7c;
            case 0x274F94u: goto label_274f94;
            case 0x274F98u: goto label_274f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x274FACu;
}
