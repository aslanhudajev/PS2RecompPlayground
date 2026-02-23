#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsje_output_header
// Address: 0x16fa58 - 0x16fe54
void adxsje_output_header_0x16fa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsje_output_header");


    ctx->pc = 0x16fa58u;

    // 0x16fa58: 0x27bdff50
    ctx->pc = 0x16fa58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x16fa5c: 0xffb40050
    ctx->pc = 0x16fa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x16fa60: 0x80a02d
    ctx->pc = 0x16fa60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fa64: 0xffb30040
    ctx->pc = 0x16fa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x16fa68: 0x8f848208
    ctx->pc = 0x16fa68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935048)));
    // 0x16fa6c: 0xa0982d
    ctx->pc = 0x16fa6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fa70: 0xffbe0090
    ctx->pc = 0x16fa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x16fa74: 0xffb10020
    ctx->pc = 0x16fa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x16fa78: 0xffbf00a0
    ctx->pc = 0x16fa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x16fa7c: 0xffb70080
    ctx->pc = 0x16fa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x16fa80: 0xffb60070
    ctx->pc = 0x16fa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x16fa84: 0xffb50060
    ctx->pc = 0x16fa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x16fa88: 0xffb20030
    ctx->pc = 0x16fa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x16fa8c: 0xc051554
    ctx->pc = 0x16FA8Cu;
    SET_GPR_U32(ctx, 31, 0x16FA94u);
    ctx->pc = 0x16FA90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA94u; }
        else if (ctx->pc != 0x16FA94u) { ctx->pc = 0x16FA94u; }
    }
    if (ctx->pc != 0x16FA94u) { return; }
    ctx->pc = 0x16FA94u;
    // 0x16fa94: 0x40f02d
    ctx->pc = 0x16fa94u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fa98: 0x3a0202d
    ctx->pc = 0x16fa98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fa9c: 0x24028000
    ctx->pc = 0x16fa9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x16faa0: 0x24050002
    ctx->pc = 0x16faa0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16faa4: 0xa7a20000
    ctx->pc = 0x16faa4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16faa8: 0x24060001
    ctx->pc = 0x16faa8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16faac: 0xc05ba70
    ctx->pc = 0x16FAACu;
    SET_GPR_U32(ctx, 31, 0x16FAB4u);
    ctx->pc = 0x16FAB0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAB4u; }
        else if (ctx->pc != 0x16FAB4u) { ctx->pc = 0x16FAB4u; }
    }
    if (ctx->pc != 0x16FAB4u) { return; }
    ctx->pc = 0x16FAB4u;
    // 0x16fab4: 0x40882d
    ctx->pc = 0x16fab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fab8: 0x24020001
    ctx->pc = 0x16fab8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fabc: 0x162200d9
    ctx->pc = 0x16FABCu;
    {
        const bool branch_taken_0x16fabc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x16FAC0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fabc) {
            ctx->pc = 0x16FE24u;
            goto label_16fe24;
        }
    }
    ctx->pc = 0x16FAC4u;
    // 0x16fac4: 0x96820048
    ctx->pc = 0x16fac4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x16fac8: 0x3a0202d
    ctx->pc = 0x16fac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16facc: 0x24050002
    ctx->pc = 0x16faccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16fad0: 0x24060001
    ctx->pc = 0x16fad0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fad4: 0xa7a20000
    ctx->pc = 0x16fad4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16fad8: 0xc05ba70
    ctx->pc = 0x16FAD8u;
    SET_GPR_U32(ctx, 31, 0x16FAE0u);
    ctx->pc = 0x16FADCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAE0u; }
        else if (ctx->pc != 0x16FAE0u) { ctx->pc = 0x16FAE0u; }
    }
    if (ctx->pc != 0x16FAE0u) { return; }
    ctx->pc = 0x16FAE0u;
    // 0x16fae0: 0x40802d
    ctx->pc = 0x16fae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fae4: 0x161100cf
    ctx->pc = 0x16FAE4u;
    {
        const bool branch_taken_0x16fae4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        ctx->pc = 0x16FAE8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fae4) {
            ctx->pc = 0x16FE24u;
            goto label_16fe24;
        }
    }
    ctx->pc = 0x16FAECu;
    // 0x16faec: 0x8282004c
    ctx->pc = 0x16faecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x16faf0: 0x27b70002
    ctx->pc = 0x16faf0u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 2));
    // 0x16faf4: 0x2e0202d
    ctx->pc = 0x16faf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16faf8: 0x24050001
    ctx->pc = 0x16faf8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fafc: 0xa3a20002
    ctx->pc = 0x16fafcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x16fb00: 0x24060001
    ctx->pc = 0x16fb00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fb04: 0xc05ba70
    ctx->pc = 0x16FB04u;
    SET_GPR_U32(ctx, 31, 0x16FB0Cu);
    ctx->pc = 0x16FB08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB0Cu; }
        else if (ctx->pc != 0x16FB0Cu) { ctx->pc = 0x16FB0Cu; }
    }
    if (ctx->pc != 0x16FB0Cu) { return; }
    ctx->pc = 0x16FB0Cu;
    // 0x16fb0c: 0x145000c5
    ctx->pc = 0x16FB0Cu;
    {
        const bool branch_taken_0x16fb0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x16FB10u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fb0c) {
            ctx->pc = 0x16FE24u;
            goto label_16fe24;
        }
    }
    ctx->pc = 0x16FB14u;
    // 0x16fb14: 0x92820050
    ctx->pc = 0x16fb14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x16fb18: 0x2e0202d
    ctx->pc = 0x16fb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb1c: 0x24050001
    ctx->pc = 0x16fb1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fb20: 0x24060001
    ctx->pc = 0x16fb20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fb24: 0xa3a20002
    ctx->pc = 0x16fb24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x16fb28: 0xc05ba70
    ctx->pc = 0x16FB28u;
    SET_GPR_U32(ctx, 31, 0x16FB30u);
    ctx->pc = 0x16FB2Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB30u; }
        else if (ctx->pc != 0x16FB30u) { ctx->pc = 0x16FB30u; }
    }
    if (ctx->pc != 0x16FB30u) { return; }
    ctx->pc = 0x16FB30u;
    // 0x16fb30: 0x24120001
    ctx->pc = 0x16fb30u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fb34: 0x40802d
    ctx->pc = 0x16fb34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb38: 0x161200ba
    ctx->pc = 0x16FB38u;
    {
        const bool branch_taken_0x16fb38 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 18));
        ctx->pc = 0x16FB3Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fb38) {
            ctx->pc = 0x16FE24u;
            goto label_16fe24;
        }
    }
    ctx->pc = 0x16FB40u;
    // 0x16fb40: 0x92820054
    ctx->pc = 0x16fb40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x16fb44: 0x2e0202d
    ctx->pc = 0x16fb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb48: 0x24050001
    ctx->pc = 0x16fb48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fb4c: 0x24060001
    ctx->pc = 0x16fb4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fb50: 0xa3a20002
    ctx->pc = 0x16fb50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x16fb54: 0xc05ba70
    ctx->pc = 0x16FB54u;
    SET_GPR_U32(ctx, 31, 0x16FB5Cu);
    ctx->pc = 0x16FB58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB5Cu; }
        else if (ctx->pc != 0x16FB5Cu) { ctx->pc = 0x16FB5Cu; }
    }
    if (ctx->pc != 0x16FB5Cu) { return; }
    ctx->pc = 0x16FB5Cu;
    // 0x16fb5c: 0x40882d
    ctx->pc = 0x16fb5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb60: 0x163000b0
    ctx->pc = 0x16FB60u;
    {
        const bool branch_taken_0x16fb60 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x16FB64u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fb60) {
            ctx->pc = 0x16FE24u;
            goto label_16fe24;
        }
    }
    ctx->pc = 0x16FB68u;
    // 0x16fb68: 0x92820058
    ctx->pc = 0x16fb68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x16fb6c: 0x2e0202d
    ctx->pc = 0x16fb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb70: 0x24050001
    ctx->pc = 0x16fb70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fb74: 0x24060001
    ctx->pc = 0x16fb74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fb78: 0xa3a20002
    ctx->pc = 0x16fb78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x16fb7c: 0xc05ba70
    ctx->pc = 0x16FB7Cu;
    SET_GPR_U32(ctx, 31, 0x16FB84u);
    ctx->pc = 0x16FB80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB84u; }
        else if (ctx->pc != 0x16FB84u) { ctx->pc = 0x16FB84u; }
    }
    if (ctx->pc != 0x16FB84u) { return; }
    ctx->pc = 0x16FB84u;
    // 0x16fb84: 0x40902d
    ctx->pc = 0x16fb84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb88: 0x165100a6
    ctx->pc = 0x16FB88u;
    {
        const bool branch_taken_0x16fb88 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 17));
        ctx->pc = 0x16FB8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fb88) {
            ctx->pc = 0x16FE24u;
            goto label_16fe24;
        }
    }
    ctx->pc = 0x16FB90u;
    // 0x16fb90: 0x8e82005c
    ctx->pc = 0x16fb90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x16fb94: 0x27b60004
    ctx->pc = 0x16fb94u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 4));
    // 0x16fb98: 0x2c0202d
    ctx->pc = 0x16fb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb9c: 0x24050004
    ctx->pc = 0x16fb9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16fba0: 0xafa20004
    ctx->pc = 0x16fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16fba4: 0x24060001
    ctx->pc = 0x16fba4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fba8: 0xc05ba70
    ctx->pc = 0x16FBA8u;
    SET_GPR_U32(ctx, 31, 0x16FBB0u);
    ctx->pc = 0x16FBACu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBB0u; }
        else if (ctx->pc != 0x16FBB0u) { ctx->pc = 0x16FBB0u; }
    }
    if (ctx->pc != 0x16FBB0u) { return; }
    ctx->pc = 0x16FBB0u;
    // 0x16fbb0: 0x40802d
    ctx->pc = 0x16fbb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fbb4: 0x1612009b
    ctx->pc = 0x16FBB4u;
    {
        const bool branch_taken_0x16fbb4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 18));
        ctx->pc = 0x16FBB8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fbb4) {
            ctx->pc = 0x16FE24u;
            goto label_16fe24;
        }
    }
    ctx->pc = 0x16FBBCu;
    // 0x16fbbc: 0x8e820060
    ctx->pc = 0x16fbbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x16fbc0: 0x2c0202d
    ctx->pc = 0x16fbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fbc4: 0x24050004
    ctx->pc = 0x16fbc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16fbc8: 0x24060001
    ctx->pc = 0x16fbc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fbcc: 0xafa20004
    ctx->pc = 0x16fbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16fbd0: 0xc05ba70
    ctx->pc = 0x16FBD0u;
    SET_GPR_U32(ctx, 31, 0x16FBD8u);
    ctx->pc = 0x16FBD4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBD8u; }
        else if (ctx->pc != 0x16FBD8u) { ctx->pc = 0x16FBD8u; }
    }
    if (ctx->pc != 0x16FBD8u) { return; }
    ctx->pc = 0x16FBD8u;
    // 0x16fbd8: 0x40882d
    ctx->pc = 0x16fbd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fbdc: 0x16300091
    ctx->pc = 0x16FBDCu;
    {
        const bool branch_taken_0x16fbdc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x16FBE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fbdc) {
            ctx->pc = 0x16FE24u;
            goto label_16fe24;
        }
    }
    ctx->pc = 0x16FBE4u;
    // 0x16fbe4: 0x96820064
    ctx->pc = 0x16fbe4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x16fbe8: 0x3a0202d
    ctx->pc = 0x16fbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fbec: 0x24050002
    ctx->pc = 0x16fbecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16fbf0: 0x24060001
    ctx->pc = 0x16fbf0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fbf4: 0xa7a20000
    ctx->pc = 0x16fbf4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16fbf8: 0xc05ba70
    ctx->pc = 0x16FBF8u;
    SET_GPR_U32(ctx, 31, 0x16FC00u);
    ctx->pc = 0x16FBFCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FC00u; }
        else if (ctx->pc != 0x16FC00u) { ctx->pc = 0x16FC00u; }
    }
    if (ctx->pc != 0x16FC00u) { return; }
    ctx->pc = 0x16FC00u;
    // 0x16fc00: 0x40902d
    ctx->pc = 0x16fc00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc04: 0x16510087
    ctx->pc = 0x16FC04u;
    {
        const bool branch_taken_0x16fc04 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 17));
        ctx->pc = 0x16FC08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fc04) {
            ctx->pc = 0x16FE24u;
            goto label_16fe24;
        }
    }
    ctx->pc = 0x16FC0Cu;
    // 0x16fc0c: 0x24020003
    ctx->pc = 0x16fc0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16fc10: 0x2e0202d
    ctx->pc = 0x16fc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc14: 0xa3a20002
    ctx->pc = 0x16fc14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x16fc18: 0x24050001
    ctx->pc = 0x16fc18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fc1c: 0x24060001
    ctx->pc = 0x16fc1cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fc20: 0xc05ba70
    ctx->pc = 0x16FC20u;
    SET_GPR_U32(ctx, 31, 0x16FC28u);
    ctx->pc = 0x16FC24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FC28u; }
        else if (ctx->pc != 0x16FC28u) { ctx->pc = 0x16FC28u; }
    }
    if (ctx->pc != 0x16FC28u) { return; }
    ctx->pc = 0x16FC28u;
    // 0x16fc28: 0x40802d
    ctx->pc = 0x16fc28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc2c: 0x1612007d
    ctx->pc = 0x16FC2Cu;
    {
        const bool branch_taken_0x16fc2c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 18));
        ctx->pc = 0x16FC30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fc2c) {
            ctx->pc = 0x16FE24u;
            goto label_16fe24;
        }
    }
    ctx->pc = 0x16FC34u;
    // 0x16fc34: 0xa3a00002
    ctx->pc = 0x16fc34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x16fc38: 0x2e0202d
    ctx->pc = 0x16fc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc3c: 0x24050001
    ctx->pc = 0x16fc3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fc40: 0x24060001
    ctx->pc = 0x16fc40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fc44: 0xc05ba70
    ctx->pc = 0x16FC44u;
    SET_GPR_U32(ctx, 31, 0x16FC4Cu);
    ctx->pc = 0x16FC48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FC4Cu; }
        else if (ctx->pc != 0x16FC4Cu) { ctx->pc = 0x16FC4Cu; }
    }
    if (ctx->pc != 0x16FC4Cu) { return; }
    ctx->pc = 0x16FC4Cu;
    // 0x16fc4c: 0x40882d
    ctx->pc = 0x16fc4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc50: 0x16300074
    ctx->pc = 0x16FC50u;
    {
        const bool branch_taken_0x16fc50 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x16FC54u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fc50) {
            ctx->pc = 0x16FE24u;
            goto label_16fe24;
        }
    }
    ctx->pc = 0x16FC58u;
    // 0x16fc58: 0x8e82006c
    ctx->pc = 0x16fc58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x16fc5c: 0x18400056
    ctx->pc = 0x16FC5Cu;
    {
        const bool branch_taken_0x16fc5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16FC60u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x16fc5c) {
            ctx->pc = 0x16FDB8u;
            goto label_16fdb8;
        }
    }
    ctx->pc = 0x16FC64u;
    // 0x16fc64: 0x96820068
    ctx->pc = 0x16fc64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x16fc68: 0x3a0202d
    ctx->pc = 0x16fc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc6c: 0x24050002
    ctx->pc = 0x16fc6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16fc70: 0x24060001
    ctx->pc = 0x16fc70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fc74: 0xa7a20000
    ctx->pc = 0x16fc74u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16fc78: 0xc05ba70
    ctx->pc = 0x16FC78u;
    SET_GPR_U32(ctx, 31, 0x16FC80u);
    ctx->pc = 0x16FC7Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FC80u; }
        else if (ctx->pc != 0x16FC80u) { ctx->pc = 0x16FC80u; }
    }
    if (ctx->pc != 0x16FC80u) { return; }
    ctx->pc = 0x16FC80u;
    // 0x16fc80: 0x40802d
    ctx->pc = 0x16fc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc84: 0x16110067
    ctx->pc = 0x16FC84u;
    {
        const bool branch_taken_0x16fc84 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        ctx->pc = 0x16FC88u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fc84) {
            ctx->pc = 0x16FE24u;
            goto label_16fe24;
        }
    }
    ctx->pc = 0x16FC8Cu;
    // 0x16fc8c: 0x9682006c
    ctx->pc = 0x16fc8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x16fc90: 0x3a0202d
    ctx->pc = 0x16fc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc94: 0x24050002
    ctx->pc = 0x16fc94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16fc98: 0x24060001
    ctx->pc = 0x16fc98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fc9c: 0xa7a20000
    ctx->pc = 0x16fc9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16fca0: 0xc05ba70
    ctx->pc = 0x16FCA0u;
    SET_GPR_U32(ctx, 31, 0x16FCA8u);
    ctx->pc = 0x16FCA4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FCA8u; }
        else if (ctx->pc != 0x16FCA8u) { ctx->pc = 0x16FCA8u; }
    }
    if (ctx->pc != 0x16FCA8u) { return; }
    ctx->pc = 0x16FCA8u;
    // 0x16fca8: 0x1450005e
    ctx->pc = 0x16FCA8u;
    {
        const bool branch_taken_0x16fca8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x16FCACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fca8) {
            ctx->pc = 0x16FE24u;
            goto label_16fe24;
        }
    }
    ctx->pc = 0x16FCB0u;
    // 0x16fcb0: 0x8e82006c
    ctx->pc = 0x16fcb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x16fcb4: 0x24120014
    ctx->pc = 0x16fcb4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 20));
    // 0x16fcb8: 0x1840003f
    ctx->pc = 0x16FCB8u;
    {
        const bool branch_taken_0x16fcb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16FCBCu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fcb8) {
            ctx->pc = 0x16FDB8u;
            goto label_16fdb8;
        }
    }
    ctx->pc = 0x16FCC0u;
label_16fcc0:
    // 0x16fcc0: 0xa7b50000
    ctx->pc = 0x16fcc0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x16fcc4: 0x3a0202d
    ctx->pc = 0x16fcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fcc8: 0x24050002
    ctx->pc = 0x16fcc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16fccc: 0x24060001
    ctx->pc = 0x16fcccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fcd0: 0xc05ba70
    ctx->pc = 0x16FCD0u;
    SET_GPR_U32(ctx, 31, 0x16FCD8u);
    ctx->pc = 0x16FCD4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FCD8u; }
        else if (ctx->pc != 0x16FCD8u) { ctx->pc = 0x16FCD8u; }
    }
    if (ctx->pc != 0x16FCD8u) { return; }
    ctx->pc = 0x16FCD8u;
    // 0x16fcd8: 0x40802d
    ctx->pc = 0x16fcd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fcdc: 0x24020001
    ctx->pc = 0x16fcdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fce0: 0x1602004f
    ctx->pc = 0x16FCE0u;
    {
        const bool branch_taken_0x16fce0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x16FCE4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fce0) {
            ctx->pc = 0x16FE20u;
            goto label_16fe20;
        }
    }
    ctx->pc = 0x16FCE8u;
    // 0x16fce8: 0xa7b00000
    ctx->pc = 0x16fce8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x16fcec: 0x24050002
    ctx->pc = 0x16fcecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16fcf0: 0x24060001
    ctx->pc = 0x16fcf0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fcf4: 0x260382d
    ctx->pc = 0x16fcf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fcf8: 0xc05ba70
    ctx->pc = 0x16FCF8u;
    SET_GPR_U32(ctx, 31, 0x16FD00u);
    ctx->pc = 0x16FCFCu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FD00u; }
        else if (ctx->pc != 0x16FD00u) { ctx->pc = 0x16FD00u; }
    }
    if (ctx->pc != 0x16FD00u) { return; }
    ctx->pc = 0x16FD00u;
    // 0x16fd00: 0x40882d
    ctx->pc = 0x16fd00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd04: 0x16300046
    ctx->pc = 0x16FD04u;
    {
        const bool branch_taken_0x16fd04 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x16FD08u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 4));
        if (branch_taken_0x16fd04) {
            ctx->pc = 0x16FE20u;
            goto label_16fe20;
        }
    }
    ctx->pc = 0x16FD0Cu;
    // 0x16fd0c: 0x8e820070
    ctx->pc = 0x16fd0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x16fd10: 0x24050004
    ctx->pc = 0x16fd10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16fd14: 0x24060001
    ctx->pc = 0x16fd14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fd18: 0xafa20004
    ctx->pc = 0x16fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16fd1c: 0xc05ba70
    ctx->pc = 0x16FD1Cu;
    SET_GPR_U32(ctx, 31, 0x16FD24u);
    ctx->pc = 0x16FD20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FD24u; }
        else if (ctx->pc != 0x16FD24u) { ctx->pc = 0x16FD24u; }
    }
    if (ctx->pc != 0x16FD24u) { return; }
    ctx->pc = 0x16FD24u;
    // 0x16fd24: 0x40802d
    ctx->pc = 0x16fd24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd28: 0x1611003d
    ctx->pc = 0x16FD28u;
    {
        const bool branch_taken_0x16fd28 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        ctx->pc = 0x16FD2Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x16fd28) {
            ctx->pc = 0x16FE20u;
            goto label_16fe20;
        }
    }
    ctx->pc = 0x16FD30u;
    // 0x16fd30: 0x8e820074
    ctx->pc = 0x16fd30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x16fd34: 0x2c0202d
    ctx->pc = 0x16fd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd38: 0x24050004
    ctx->pc = 0x16fd38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16fd3c: 0x24060001
    ctx->pc = 0x16fd3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fd40: 0xafa20004
    ctx->pc = 0x16fd40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16fd44: 0xc05ba70
    ctx->pc = 0x16FD44u;
    SET_GPR_U32(ctx, 31, 0x16FD4Cu);
    ctx->pc = 0x16FD48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FD4Cu; }
        else if (ctx->pc != 0x16FD4Cu) { ctx->pc = 0x16FD4Cu; }
    }
    if (ctx->pc != 0x16FD4Cu) { return; }
    ctx->pc = 0x16FD4Cu;
    // 0x16fd4c: 0x40882d
    ctx->pc = 0x16fd4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd50: 0x16300033
    ctx->pc = 0x16FD50u;
    {
        const bool branch_taken_0x16fd50 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x16FD54u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x16fd50) {
            ctx->pc = 0x16FE20u;
            goto label_16fe20;
        }
    }
    ctx->pc = 0x16FD58u;
    // 0x16fd58: 0x8e820078
    ctx->pc = 0x16fd58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x16fd5c: 0x2c0202d
    ctx->pc = 0x16fd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd60: 0x24050004
    ctx->pc = 0x16fd60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16fd64: 0x24060001
    ctx->pc = 0x16fd64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fd68: 0xafa20004
    ctx->pc = 0x16fd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16fd6c: 0xc05ba70
    ctx->pc = 0x16FD6Cu;
    SET_GPR_U32(ctx, 31, 0x16FD74u);
    ctx->pc = 0x16FD70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FD74u; }
        else if (ctx->pc != 0x16FD74u) { ctx->pc = 0x16FD74u; }
    }
    if (ctx->pc != 0x16FD74u) { return; }
    ctx->pc = 0x16FD74u;
    // 0x16fd74: 0x40802d
    ctx->pc = 0x16fd74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd78: 0x16110029
    ctx->pc = 0x16FD78u;
    {
        const bool branch_taken_0x16fd78 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        ctx->pc = 0x16FD7Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x16fd78) {
            ctx->pc = 0x16FE20u;
            goto label_16fe20;
        }
    }
    ctx->pc = 0x16FD80u;
    // 0x16fd80: 0x8e82007c
    ctx->pc = 0x16fd80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x16fd84: 0x26520004
    ctx->pc = 0x16fd84u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x16fd88: 0x2c0202d
    ctx->pc = 0x16fd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd8c: 0x24050004
    ctx->pc = 0x16fd8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16fd90: 0xafa20004
    ctx->pc = 0x16fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16fd94: 0x24060001
    ctx->pc = 0x16fd94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fd98: 0xc05ba70
    ctx->pc = 0x16FD98u;
    SET_GPR_U32(ctx, 31, 0x16FDA0u);
    ctx->pc = 0x16FD9Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FDA0u; }
        else if (ctx->pc != 0x16FDA0u) { ctx->pc = 0x16FDA0u; }
    }
    if (ctx->pc != 0x16FDA0u) { return; }
    ctx->pc = 0x16FDA0u;
    // 0x16fda0: 0x1450001f
    ctx->pc = 0x16FDA0u;
    {
        const bool branch_taken_0x16fda0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x16FDA4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x16fda0) {
            ctx->pc = 0x16FE20u;
            goto label_16fe20;
        }
    }
    ctx->pc = 0x16FDA8u;
    // 0x16fda8: 0x8e82006c
    ctx->pc = 0x16fda8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x16fdac: 0x2a2102a
    ctx->pc = 0x16fdacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 2)));
    // 0x16fdb0: 0x1440ffc3
    ctx->pc = 0x16FDB0u;
    {
        const bool branch_taken_0x16fdb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16FDB4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x16fdb0) {
            ctx->pc = 0x16FCC0u;
            goto label_16fcc0;
        }
    }
    ctx->pc = 0x16FDB8u;
label_16fdb8:
    // 0x16fdb8: 0x8e830048
    ctx->pc = 0x16fdb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x16fdbc: 0x7e8023
    ctx->pc = 0x16fdbcu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x16fdc0: 0x250102a
    ctx->pc = 0x16fdc0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 16)));
    // 0x16fdc4: 0x1040000d
    ctx->pc = 0x16FDC4u;
    {
        const bool branch_taken_0x16fdc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16FDC8u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x16fdc4) {
            ctx->pc = 0x16FDFCu;
            goto label_16fdfc;
        }
    }
    ctx->pc = 0x16FDCCu;
    // 0x16fdcc: 0x24110001
    ctx->pc = 0x16fdccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fdd0: 0x2e0202d
    ctx->pc = 0x16fdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fdd4: 0x0
    ctx->pc = 0x16fdd4u;
    // NOP
label_16fdd8:
    // 0x16fdd8: 0x24050001
    ctx->pc = 0x16fdd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fddc: 0x24060001
    ctx->pc = 0x16fddcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fde0: 0xc05ba70
    ctx->pc = 0x16FDE0u;
    SET_GPR_U32(ctx, 31, 0x16FDE8u);
    ctx->pc = 0x16FDE4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FDE8u; }
        else if (ctx->pc != 0x16FDE8u) { ctx->pc = 0x16FDE8u; }
    }
    if (ctx->pc != 0x16FDE8u) { return; }
    ctx->pc = 0x16FDE8u;
    // 0x16fde8: 0x1451000d
    ctx->pc = 0x16FDE8u;
    {
        const bool branch_taken_0x16fde8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x16FDECu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x16fde8) {
            ctx->pc = 0x16FE20u;
            goto label_16fe20;
        }
    }
    ctx->pc = 0x16FDF0u;
    // 0x16fdf0: 0x250102a
    ctx->pc = 0x16fdf0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 16)));
    // 0x16fdf4: 0x1440fff8
    ctx->pc = 0x16FDF4u;
    {
        const bool branch_taken_0x16fdf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16FDF8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fdf4) {
            ctx->pc = 0x16FDD8u;
            goto label_16fdd8;
        }
    }
    ctx->pc = 0x16FDFCu;
label_16fdfc:
    // 0x16fdfc: 0x8f848208
    ctx->pc = 0x16fdfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935048)));
    // 0x16fe00: 0x260382d
    ctx->pc = 0x16fe00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe04: 0x24050001
    ctx->pc = 0x16fe04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fe08: 0xc05ba70
    ctx->pc = 0x16FE08u;
    SET_GPR_U32(ctx, 31, 0x16FE10u);
    ctx->pc = 0x16FE0Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FE10u; }
        else if (ctx->pc != 0x16FE10u) { ctx->pc = 0x16FE10u; }
    }
    if (ctx->pc != 0x16FE10u) { return; }
    ctx->pc = 0x16FE10u;
    // 0x16fe10: 0x145e0004
    ctx->pc = 0x16FE10u;
    {
        const bool branch_taken_0x16fe10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 30));
        ctx->pc = 0x16FE14u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fe10) {
            ctx->pc = 0x16FE24u;
            goto label_16fe24;
        }
    }
    ctx->pc = 0x16FE18u;
    // 0x16fe18: 0x10000002
    ctx->pc = 0x16FE18u;
    {
        const bool branch_taken_0x16fe18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16FE1Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
        if (branch_taken_0x16fe18) {
            ctx->pc = 0x16FE24u;
            goto label_16fe24;
        }
    }
    ctx->pc = 0x16FE20u;
label_16fe20:
    // 0x16fe20: 0x102d
    ctx->pc = 0x16fe20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fe24:
    // 0x16fe24: 0xdfbf00a0
    ctx->pc = 0x16fe24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16fe28: 0xdfbe0090
    ctx->pc = 0x16fe28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fe2c: 0xdfb70080
    ctx->pc = 0x16fe2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16fe30: 0xdfb60070
    ctx->pc = 0x16fe30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16fe34: 0xdfb50060
    ctx->pc = 0x16fe34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16fe38: 0xdfb40050
    ctx->pc = 0x16fe38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16fe3c: 0xdfb30040
    ctx->pc = 0x16fe3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16fe40: 0xdfb20030
    ctx->pc = 0x16fe40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16fe44: 0xdfb10020
    ctx->pc = 0x16fe44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16fe48: 0xdfb00010
    ctx->pc = 0x16fe48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fe4c: 0x3e00008
    ctx->pc = 0x16FE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FE50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16FCC0u: goto label_16fcc0;
            case 0x16FDB8u: goto label_16fdb8;
            case 0x16FDD8u: goto label_16fdd8;
            case 0x16FDFCu: goto label_16fdfc;
            case 0x16FE20u: goto label_16fe20;
            case 0x16FE24u: goto label_16fe24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16FE54u;
}
