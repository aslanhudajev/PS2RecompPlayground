#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: loop1__11OverLapTaskFv
// Address: 0x215b70 - 0x215dd0
void loop1__11OverLapTaskFv_0x215b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("loop1__11OverLapTaskFv");


    ctx->pc = 0x215b70u;

    // 0x215b70: 0x27bdffc0
    ctx->pc = 0x215b70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x215b74: 0x7fbf0030
    ctx->pc = 0x215b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x215b78: 0x7fb20020
    ctx->pc = 0x215b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x215b7c: 0x7fb10010
    ctx->pc = 0x215b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x215b80: 0x70809628
    ctx->pc = 0x215b80u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x215b84: 0xc069558
    ctx->pc = 0x215B84u;
    SET_GPR_U32(ctx, 31, 0x215B8Cu);
    ctx->pc = 0x215B88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A5560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoStat_0x1a5560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B8Cu; }
        else if (ctx->pc != 0x215B8Cu) { ctx->pc = 0x215B8Cu; }
    }
    if (ctx->pc != 0x215B8Cu) { return; }
    ctx->pc = 0x215B8Cu;
    // 0x215b8c: 0x70408628
    ctx->pc = 0x215b8cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x215b90: 0x16000004
    ctx->pc = 0x215B90u;
    {
        const bool branch_taken_0x215b90 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x215B94u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x215b90) {
            ctx->pc = 0x215BA4u;
            goto label_215ba4;
        }
    }
    ctx->pc = 0x215B98u;
    // 0x215b98: 0xc0694bc
    ctx->pc = 0x215B98u;
    SET_GPR_U32(ctx, 31, 0x215BA0u);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BA0u; }
        else if (ctx->pc != 0x215BA0u) { ctx->pc = 0x215BA0u; }
    }
    if (ctx->pc != 0x215BA0u) { return; }
    ctx->pc = 0x215BA0u;
    // 0x215ba0: 0x24040003
    ctx->pc = 0x215ba0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_215ba4:
    // 0x215ba4: 0xc069338
    ctx->pc = 0x215BA4u;
    SET_GPR_U32(ctx, 31, 0x215BACu);
    ctx->pc = 0x1A4CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlMatrixMode_0x1a4ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BACu; }
        else if (ctx->pc != 0x215BACu) { ctx->pc = 0x215BACu; }
    }
    if (ctx->pc != 0x215BACu) { return; }
    ctx->pc = 0x215BACu;
    // 0x215bac: 0xc06c20d
    ctx->pc = 0x215BACu;
    SET_GPR_U32(ctx, 31, 0x215BB4u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BB4u; }
        else if (ctx->pc != 0x215BB4u) { ctx->pc = 0x215BB4u; }
    }
    if (ctx->pc != 0x215BB4u) { return; }
    ctx->pc = 0x215BB4u;
    // 0x215bb4: 0x3c023a83
    ctx->pc = 0x215bb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)14979 << 16));
    // 0x215bb8: 0x3442126f
    ctx->pc = 0x215bb8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4719));
    // 0x215bbc: 0x44826000
    ctx->pc = 0x215bbcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x215bc0: 0x3c0242c8
    ctx->pc = 0x215bc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17096 << 16));
    // 0x215bc4: 0x44826800
    ctx->pc = 0x215bc4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x215bc8: 0xc06b21c
    ctx->pc = 0x215BC8u;
    SET_GPR_U32(ctx, 31, 0x215BD0u);
    ctx->pc = 0x1AC870u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetZBound_0x1ac870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BD0u; }
        else if (ctx->pc != 0x215BD0u) { ctx->pc = 0x215BD0u; }
    }
    if (ctx->pc != 0x215BD0u) { return; }
    ctx->pc = 0x215BD0u;
    // 0x215bd0: 0x3c023f80
    ctx->pc = 0x215bd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x215bd4: 0x44826000
    ctx->pc = 0x215bd4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x215bd8: 0x3c023a83
    ctx->pc = 0x215bd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)14979 << 16));
    // 0x215bdc: 0x3442126f
    ctx->pc = 0x215bdcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4719));
    // 0x215be0: 0x44826800
    ctx->pc = 0x215be0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x215be4: 0x3c0242c8
    ctx->pc = 0x215be4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17096 << 16));
    // 0x215be8: 0x44827000
    ctx->pc = 0x215be8u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x215bec: 0xc06af68
    ctx->pc = 0x215BECu;
    SET_GPR_U32(ctx, 31, 0x215BF4u);
    ctx->pc = 0x215BF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16384));
    ctx->pc = 0x1ABDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPerspective_0x1abda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BF4u; }
        else if (ctx->pc != 0x215BF4u) { ctx->pc = 0x215BF4u; }
    }
    if (ctx->pc != 0x215BF4u) { return; }
    ctx->pc = 0x215BF4u;
    // 0x215bf4: 0xc069338
    ctx->pc = 0x215BF4u;
    SET_GPR_U32(ctx, 31, 0x215BFCu);
    ctx->pc = 0x215BF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A4CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlMatrixMode_0x1a4ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BFCu; }
        else if (ctx->pc != 0x215BFCu) { ctx->pc = 0x215BFCu; }
    }
    if (ctx->pc != 0x215BFCu) { return; }
    ctx->pc = 0x215BFCu;
    // 0x215bfc: 0xc06bc68
    ctx->pc = 0x215BFCu;
    SET_GPR_U32(ctx, 31, 0x215C04u);
    ctx->pc = 0x1AF1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlClearZBuff_0x1af1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215C04u; }
        else if (ctx->pc != 0x215C04u) { ctx->pc = 0x215C04u; }
    }
    if (ctx->pc != 0x215C04u) { return; }
    ctx->pc = 0x215C04u;
    // 0x215c04: 0xc06c20d
    ctx->pc = 0x215C04u;
    SET_GPR_U32(ctx, 31, 0x215C0Cu);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215C0Cu; }
        else if (ctx->pc != 0x215C0Cu) { ctx->pc = 0x215C0Cu; }
    }
    if (ctx->pc != 0x215C0Cu) { return; }
    ctx->pc = 0x215C0Cu;
    // 0x215c0c: 0x44806000
    ctx->pc = 0x215c0cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x215c10: 0x3c02bf00
    ctx->pc = 0x215c10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48896 << 16));
    // 0x215c14: 0x44827000
    ctx->pc = 0x215c14u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x215c18: 0xc06c202
    ctx->pc = 0x215C18u;
    SET_GPR_U32(ctx, 31, 0x215C20u);
    ctx->pc = 0x215C1Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215C20u; }
        else if (ctx->pc != 0x215C20u) { ctx->pc = 0x215C20u; }
    }
    if (ctx->pc != 0x215C20u) { return; }
    ctx->pc = 0x215C20u;
    // 0x215c20: 0x8e420008
    ctx->pc = 0x215c20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x215c24: 0x4410003
    ctx->pc = 0x215C24u;
    {
        const bool branch_taken_0x215c24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x215C28u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 9));
        if (branch_taken_0x215c24) {
            ctx->pc = 0x215C34u;
            goto label_215c34;
        }
    }
    ctx->pc = 0x215C2Cu;
    // 0x215c2c: 0x244201ff
    ctx->pc = 0x215c2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 511));
    // 0x215c30: 0x21a43
    ctx->pc = 0x215c30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 9));
label_215c34:
    // 0x215c34: 0x28610081
    ctx->pc = 0x215c34u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 129));
    // 0x215c38: 0x14200002
    ctx->pc = 0x215C38u;
    {
        const bool branch_taken_0x215c38 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x215C3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
        if (branch_taken_0x215c38) {
            ctx->pc = 0x215C44u;
            goto label_215c44;
        }
    }
    ctx->pc = 0x215C40u;
    // 0x215c40: 0x24030080
    ctx->pc = 0x215c40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
label_215c44:
    // 0x215c44: 0x32e00
    ctx->pc = 0x215c44u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 24));
    // 0x215c48: 0x2442a610
    ctx->pc = 0x215c48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x215c4c: 0x8c43002c
    ctx->pc = 0x215c4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x215c50: 0x8e440010
    ctx->pc = 0x215c50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x215c54: 0x31880
    ctx->pc = 0x215c54u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x215c58: 0x3c020029
    ctx->pc = 0x215c58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x215c5c: 0x2463000c
    ctx->pc = 0x215c5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12));
    // 0x215c60: 0xa42825
    ctx->pc = 0x215c60u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x215c64: 0x2442a610
    ctx->pc = 0x215c64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x215c68: 0x31880
    ctx->pc = 0x215c68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x215c6c: 0x431021
    ctx->pc = 0x215c6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x215c70: 0x70002628
    ctx->pc = 0x215c70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x215c74: 0xc0552d8
    ctx->pc = 0x215C74u;
    SET_GPR_U32(ctx, 31, 0x215C7Cu);
    ctx->pc = 0x215C78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 5));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215C7Cu; }
        else if (ctx->pc != 0x215C7Cu) { ctx->pc = 0x215C7Cu; }
    }
    if (ctx->pc != 0x215C7Cu) { return; }
    ctx->pc = 0x215C7Cu;
    // 0x215c7c: 0xc06c490
    ctx->pc = 0x215C7Cu;
    SET_GPR_U32(ctx, 31, 0x215C84u);
    ctx->pc = 0x1B1240u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGetDefaultRendEnv_0x1b1240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215C84u; }
        else if (ctx->pc != 0x215C84u) { ctx->pc = 0x215C84u; }
    }
    if (ctx->pc != 0x215C84u) { return; }
    ctx->pc = 0x215C84u;
    // 0x215c84: 0x94430080
    ctx->pc = 0x215c84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x215c88: 0x24510080
    ctx->pc = 0x215c88u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 128));
    // 0x215c8c: 0x70002628
    ctx->pc = 0x215c8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x215c90: 0x24070001
    ctx->pc = 0x215c90u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x215c94: 0x90420083
    ctx->pc = 0x215c94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 131)));
    // 0x215c98: 0x306501ff
    ctx->pc = 0x215c98u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 511));
    // 0x215c9c: 0xc06c59c
    ctx->pc = 0x215C9Cu;
    SET_GPR_U32(ctx, 31, 0x215CA4u);
    ctx->pc = 0x215CA0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 15));
    ctx->pc = 0x1B1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetZBUF_0x1b1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215CA4u; }
        else if (ctx->pc != 0x215CA4u) { ctx->pc = 0x215CA4u; }
    }
    if (ctx->pc != 0x215CA4u) { return; }
    ctx->pc = 0x215CA4u;
    // 0x215ca4: 0x96230000
    ctx->pc = 0x215ca4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215ca8: 0x92220003
    ctx->pc = 0x215ca8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x215cac: 0x24040200
    ctx->pc = 0x215cacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 512));
    // 0x215cb0: 0x24070001
    ctx->pc = 0x215cb0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x215cb4: 0x306501ff
    ctx->pc = 0x215cb4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 511));
    // 0x215cb8: 0xc06c59c
    ctx->pc = 0x215CB8u;
    SET_GPR_U32(ctx, 31, 0x215CC0u);
    ctx->pc = 0x215CBCu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 15));
    ctx->pc = 0x1B1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetZBUF_0x1b1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215CC0u; }
        else if (ctx->pc != 0x215CC0u) { ctx->pc = 0x215CC0u; }
    }
    if (ctx->pc != 0x215CC0u) { return; }
    ctx->pc = 0x215CC0u;
    // 0x215cc0: 0xc06c5d8
    ctx->pc = 0x215CC0u;
    SET_GPR_U32(ctx, 31, 0x215CC8u);
    ctx->pc = 0x215CC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1B1760u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetDTHE_0x1b1760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215CC8u; }
        else if (ctx->pc != 0x215CC8u) { ctx->pc = 0x215CC8u; }
    }
    if (ctx->pc != 0x215CC8u) { return; }
    ctx->pc = 0x215CC8u;
    // 0x215cc8: 0x3c020029
    ctx->pc = 0x215cc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x215ccc: 0xc06a0c8
    ctx->pc = 0x215CCCu;
    SET_GPR_U32(ctx, 31, 0x215CD4u);
    ctx->pc = 0x215CD0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294944272));
    ctx->pc = 0x1A8320u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutForce_0x1a8320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215CD4u; }
        else if (ctx->pc != 0x215CD4u) { ctx->pc = 0x215CD4u; }
    }
    if (ctx->pc != 0x215CD4u) { return; }
    ctx->pc = 0x215CD4u;
    // 0x215cd4: 0xc06c5d8
    ctx->pc = 0x215CD4u;
    SET_GPR_U32(ctx, 31, 0x215CDCu);
    ctx->pc = 0x215CD8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B1760u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetDTHE_0x1b1760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215CDCu; }
        else if (ctx->pc != 0x215CDCu) { ctx->pc = 0x215CDCu; }
    }
    if (ctx->pc != 0x215CDCu) { return; }
    ctx->pc = 0x215CDCu;
    // 0x215cdc: 0x96230000
    ctx->pc = 0x215cdcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215ce0: 0x92220003
    ctx->pc = 0x215ce0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x215ce4: 0x70002628
    ctx->pc = 0x215ce4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x215ce8: 0x70003e28
    ctx->pc = 0x215ce8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x215cec: 0x306501ff
    ctx->pc = 0x215cecu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 511));
    // 0x215cf0: 0xc06c59c
    ctx->pc = 0x215CF0u;
    SET_GPR_U32(ctx, 31, 0x215CF8u);
    ctx->pc = 0x215CF4u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 15));
    ctx->pc = 0x1B1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetZBUF_0x1b1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215CF8u; }
        else if (ctx->pc != 0x215CF8u) { ctx->pc = 0x215CF8u; }
    }
    if (ctx->pc != 0x215CF8u) { return; }
    ctx->pc = 0x215CF8u;
    // 0x215cf8: 0x96230000
    ctx->pc = 0x215cf8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215cfc: 0x92220003
    ctx->pc = 0x215cfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x215d00: 0x24040200
    ctx->pc = 0x215d00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 512));
    // 0x215d04: 0x70003e28
    ctx->pc = 0x215d04u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x215d08: 0x306501ff
    ctx->pc = 0x215d08u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 511));
    // 0x215d0c: 0xc06c59c
    ctx->pc = 0x215D0Cu;
    SET_GPR_U32(ctx, 31, 0x215D14u);
    ctx->pc = 0x215D10u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 15));
    ctx->pc = 0x1B1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetZBUF_0x1b1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D14u; }
        else if (ctx->pc != 0x215D14u) { ctx->pc = 0x215D14u; }
    }
    if (ctx->pc != 0x215D14u) { return; }
    ctx->pc = 0x215D14u;
    // 0x215d14: 0x16000004
    ctx->pc = 0x215D14u;
    {
        const bool branch_taken_0x215d14 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x215d14) {
            ctx->pc = 0x215D28u;
            goto label_215d28;
        }
    }
    ctx->pc = 0x215D1Cu;
    // 0x215d1c: 0x70002628
    ctx->pc = 0x215d1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x215d20: 0xc0694e8
    ctx->pc = 0x215D20u;
    SET_GPR_U32(ctx, 31, 0x215D28u);
    ctx->pc = 0x215D24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D28u; }
        else if (ctx->pc != 0x215D28u) { ctx->pc = 0x215D28u; }
    }
    if (ctx->pc != 0x215D28u) { return; }
    ctx->pc = 0x215D28u;
label_215d28:
    // 0x215d28: 0x3c020050
    ctx->pc = 0x215d28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x215d2c: 0xc07ce18
    ctx->pc = 0x215D2Cu;
    SET_GPR_U32(ctx, 31, 0x215D34u);
    ctx->pc = 0x215D30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D34u; }
        else if (ctx->pc != 0x215D34u) { ctx->pc = 0x215D34u; }
    }
    if (ctx->pc != 0x215D34u) { return; }
    ctx->pc = 0x215D34u;
    // 0x215d34: 0x28410005
    ctx->pc = 0x215d34u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 5));
    // 0x215d38: 0x1020001f
    ctx->pc = 0x215D38u;
    {
        const bool branch_taken_0x215d38 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x215d38) {
            ctx->pc = 0x215DB8u;
            goto label_215db8;
        }
    }
    ctx->pc = 0x215D40u;
    // 0x215d40: 0x8644000c
    ctx->pc = 0x215d40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x215d44: 0x8e430008
    ctx->pc = 0x215d44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x215d48: 0x641821
    ctx->pc = 0x215d48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x215d4c: 0xae430008
    ctx->pc = 0x215d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x215d50: 0x8644000c
    ctx->pc = 0x215d50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x215d54: 0x4810004
    ctx->pc = 0x215D54u;
    {
        const bool branch_taken_0x215d54 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x215d54) {
            ctx->pc = 0x215D68u;
            goto label_215d68;
        }
    }
    ctx->pc = 0x215D5Cu;
    // 0x215d5c: 0x8e430008
    ctx->pc = 0x215d5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x215d60: 0x18600008
    ctx->pc = 0x215D60u;
    {
        const bool branch_taken_0x215d60 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x215d60) {
            ctx->pc = 0x215D84u;
            goto label_215d84;
        }
    }
    ctx->pc = 0x215D68u;
label_215d68:
    // 0x215d68: 0x18800013
    ctx->pc = 0x215D68u;
    {
        const bool branch_taken_0x215d68 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x215d68) {
            ctx->pc = 0x215DB8u;
            goto label_215db8;
        }
    }
    ctx->pc = 0x215D70u;
    // 0x215d70: 0x8e440008
    ctx->pc = 0x215d70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x215d74: 0x3c030001
    ctx->pc = 0x215d74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x215d78: 0x83182a
    ctx->pc = 0x215d78u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x215d7c: 0x1460000e
    ctx->pc = 0x215D7Cu;
    {
        const bool branch_taken_0x215d7c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x215d7c) {
            ctx->pc = 0x215DB8u;
            goto label_215db8;
        }
    }
    ctx->pc = 0x215D84u;
label_215d84:
    // 0x215d84: 0x8e450014
    ctx->pc = 0x215d84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x215d88: 0x10a00003
    ctx->pc = 0x215D88u;
    {
        const bool branch_taken_0x215d88 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x215D8Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x215d88) {
            ctx->pc = 0x215D98u;
            goto label_215d98;
        }
    }
    ctx->pc = 0x215D90u;
    // 0x215d90: 0xc0868f4
    ctx->pc = 0x215D90u;
    SET_GPR_U32(ctx, 31, 0x215D98u);
    ctx->pc = 0x215D94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    ctx->pc = 0x21A3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        free__14TexBufMgrClassFP10TexSurface_0x21a3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215D98u; }
        else if (ctx->pc != 0x215D98u) { ctx->pc = 0x215D98u; }
    }
    if (ctx->pc != 0x215D98u) { return; }
    ctx->pc = 0x215D98u;
label_215d98:
    // 0x215d98: 0x86430004
    ctx->pc = 0x215d98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x215d9c: 0x24020002
    ctx->pc = 0x215d9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x215da0: 0x14620003
    ctx->pc = 0x215DA0u;
    {
        const bool branch_taken_0x215da0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x215da0) {
            ctx->pc = 0x215DB0u;
            goto label_215db0;
        }
    }
    ctx->pc = 0x215DA8u;
    // 0x215da8: 0xc080704
    ctx->pc = 0x215DA8u;
    SET_GPR_U32(ctx, 31, 0x215DB0u);
    ctx->pc = 0x201C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        EndOverLap__Fv_0x201c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215DB0u; }
        else if (ctx->pc != 0x215DB0u) { ctx->pc = 0x215DB0u; }
    }
    if (ctx->pc != 0x215DB0u) { return; }
    ctx->pc = 0x215DB0u;
label_215db0:
    // 0x215db0: 0xc068fe0
    ctx->pc = 0x215DB0u;
    SET_GPR_U32(ctx, 31, 0x215DB8u);
    ctx->pc = 0x215DB4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1A3F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        deleteExec__11SystemTask2Fv_0x1a3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215DB8u; }
        else if (ctx->pc != 0x215DB8u) { ctx->pc = 0x215DB8u; }
    }
    if (ctx->pc != 0x215DB8u) { return; }
    ctx->pc = 0x215DB8u;
label_215db8:
    // 0x215db8: 0x7bbf0030
    ctx->pc = 0x215db8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215dbc: 0x7bb20020
    ctx->pc = 0x215dbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215dc0: 0x7bb10010
    ctx->pc = 0x215dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215dc4: 0x7bb00000
    ctx->pc = 0x215dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215dc8: 0x3e00008
    ctx->pc = 0x215DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215DCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215BA4u: goto label_215ba4;
            case 0x215C34u: goto label_215c34;
            case 0x215C44u: goto label_215c44;
            case 0x215D28u: goto label_215d28;
            case 0x215D68u: goto label_215d68;
            case 0x215D84u: goto label_215d84;
            case 0x215D98u: goto label_215d98;
            case 0x215DB0u: goto label_215db0;
            case 0x215DB8u: goto label_215db8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215DD0u;
}
