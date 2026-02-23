#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: bgmRequest__13SoundMgrClassFii
// Address: 0x217e80 - 0x217f78
void bgmRequest__13SoundMgrClassFii_0x217e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("bgmRequest__13SoundMgrClassFii");


    ctx->pc = 0x217e80u;

    // 0x217e80: 0x27bdffc0
    ctx->pc = 0x217e80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x217e84: 0x7fbf0030
    ctx->pc = 0x217e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x217e88: 0x7fb20020
    ctx->pc = 0x217e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x217e8c: 0x3c020040
    ctx->pc = 0x217e8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
    // 0x217e90: 0x7fb10010
    ctx->pc = 0x217e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x217e94: 0x34420001
    ctx->pc = 0x217e94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x217e98: 0x14a20005
    ctx->pc = 0x217E98u;
    {
        const bool branch_taken_0x217e98 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x217E9Cu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x217e98) {
            ctx->pc = 0x217EB0u;
            goto label_217eb0;
        }
    }
    ctx->pc = 0x217EA0u;
    // 0x217ea0: 0xc086050
    ctx->pc = 0x217EA0u;
    SET_GPR_U32(ctx, 31, 0x217EA8u);
    ctx->pc = 0x218140u;
    {
        const uint32_t __entryPc = ctx->pc;
        bgmStop__13SoundMgrClassFv_0x218140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217EA8u; }
        else if (ctx->pc != 0x217EA8u) { ctx->pc = 0x217EA8u; }
    }
    if (ctx->pc != 0x217EA8u) { return; }
    ctx->pc = 0x217EA8u;
    // 0x217ea8: 0x1000002e
    ctx->pc = 0x217EA8u;
    {
        const bool branch_taken_0x217ea8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x217EACu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x217ea8) {
            ctx->pc = 0x217F64u;
            goto label_217f64;
        }
    }
    ctx->pc = 0x217EB0u;
label_217eb0:
    // 0x217eb0: 0x30a3ffff
    ctx->pc = 0x217eb0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
    // 0x217eb4: 0x31080
    ctx->pc = 0x217eb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x217eb8: 0x431021
    ctx->pc = 0x217eb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217ebc: 0x21880
    ctx->pc = 0x217ebcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x217ec0: 0x3c020029
    ctx->pc = 0x217ec0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x217ec4: 0x2442b910
    ctx->pc = 0x217ec4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949136));
    // 0x217ec8: 0x8f848d00
    ctx->pc = 0x217ec8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937856)));
    // 0x217ecc: 0x70c02e28
    ctx->pc = 0x217eccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x217ed0: 0xc07a6c0
    ctx->pc = 0x217ED0u;
    SET_GPR_U32(ctx, 31, 0x217ED8u);
    ctx->pc = 0x217ED4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1E9B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXT_SetOutVol__FP9_adx_talki_0x1e9b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217ED8u; }
        else if (ctx->pc != 0x217ED8u) { ctx->pc = 0x217ED8u; }
    }
    if (ctx->pc != 0x217ED8u) { return; }
    ctx->pc = 0x217ED8u;
    // 0x217ed8: 0x86020000
    ctx->pc = 0x217ed8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217edc: 0x4400018
    ctx->pc = 0x217EDCu;
    {
        const bool branch_taken_0x217edc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x217EE0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x217edc) {
            ctx->pc = 0x217F40u;
            goto label_217f40;
        }
    }
    ctx->pc = 0x217EE4u;
    // 0x217ee4: 0x86050002
    ctx->pc = 0x217ee4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x217ee8: 0xc05adc4
    ctx->pc = 0x217EE8u;
    SET_GPR_U32(ctx, 31, 0x217EF0u);
    ctx->pc = 0x217EECu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B710u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_OpenAfs_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217EF0u; }
        else if (ctx->pc != 0x217EF0u) { ctx->pc = 0x217EF0u; }
    }
    if (ctx->pc != 0x217EF0u) { return; }
    ctx->pc = 0x217EF0u;
    // 0x217ef0: 0x70408e28
    ctx->pc = 0x217ef0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x217ef4: 0xc05afe2
    ctx->pc = 0x217EF4u;
    SET_GPR_U32(ctx, 31, 0x217EFCu);
    ctx->pc = 0x217EF8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16BF88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetFsizeSct_0x16bf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217EFCu; }
        else if (ctx->pc != 0x217EFCu) { ctx->pc = 0x217EFCu; }
    }
    if (ctx->pc != 0x217EFCu) { return; }
    ctx->pc = 0x217EFCu;
    // 0x217efc: 0x70409628
    ctx->pc = 0x217efcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x217f00: 0xc05ae0c
    ctx->pc = 0x217F00u;
    SET_GPR_U32(ctx, 31, 0x217F08u);
    ctx->pc = 0x217F04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F08u; }
        else if (ctx->pc != 0x217F08u) { ctx->pc = 0x217F08u; }
    }
    if (ctx->pc != 0x217F08u) { return; }
    ctx->pc = 0x217F08u;
    // 0x217f08: 0x16400007
    ctx->pc = 0x217F08u;
    {
        const bool branch_taken_0x217f08 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x217f08) {
            ctx->pc = 0x217F28u;
            goto label_217f28;
        }
    }
    ctx->pc = 0x217F10u;
    // 0x217f10: 0xc05c73a
    ctx->pc = 0x217F10u;
    SET_GPR_U32(ctx, 31, 0x217F18u);
    ctx->pc = 0x217F14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937856)));
    ctx->pc = 0x171CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Stop_0x171ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F18u; }
        else if (ctx->pc != 0x217F18u) { ctx->pc = 0x217F18u; }
    }
    if (ctx->pc != 0x217F18u) { return; }
    ctx->pc = 0x217F18u;
    // 0x217f18: 0x86050000
    ctx->pc = 0x217f18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217f1c: 0x3c020050
    ctx->pc = 0x217f1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x217f20: 0xc07a67c
    ctx->pc = 0x217F20u;
    SET_GPR_U32(ctx, 31, 0x217F28u);
    ctx->pc = 0x217F24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2880));
    ctx->pc = 0x1E99F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        chgAdxStagePartitionImm__12FileMgrClassFi_0x1e99f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F28u; }
        else if (ctx->pc != 0x217F28u) { ctx->pc = 0x217F28u; }
    }
    if (ctx->pc != 0x217F28u) { return; }
    ctx->pc = 0x217F28u;
label_217f28:
    // 0x217f28: 0x86060002
    ctx->pc = 0x217f28u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x217f2c: 0x8f848d00
    ctx->pc = 0x217f2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937856)));
    // 0x217f30: 0xc05cb02
    ctx->pc = 0x217F30u;
    SET_GPR_U32(ctx, 31, 0x217F38u);
    ctx->pc = 0x217F34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x172C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_StartAfs_0x172c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F38u; }
        else if (ctx->pc != 0x217F38u) { ctx->pc = 0x217F38u; }
    }
    if (ctx->pc != 0x217F38u) { return; }
    ctx->pc = 0x217F38u;
    // 0x217f38: 0x10000009
    ctx->pc = 0x217F38u;
    {
        const bool branch_taken_0x217f38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x217f38) {
            ctx->pc = 0x217F60u;
            goto label_217f60;
        }
    }
    ctx->pc = 0x217F40u;
label_217f40:
    // 0x217f40: 0x24440b40
    ctx->pc = 0x217f40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2880));
    // 0x217f44: 0x3c020029
    ctx->pc = 0x217f44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x217f48: 0x26060004
    ctx->pc = 0x217f48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4));
    // 0x217f4c: 0xc07a5ac
    ctx->pc = 0x217F4Cu;
    SET_GPR_U32(ctx, 31, 0x217F54u);
    ctx->pc = 0x217F50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950464));
    ctx->pc = 0x1E96B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFileName__12FileMgrClassFPCcPCc_0x1e96b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F54u; }
        else if (ctx->pc != 0x217F54u) { ctx->pc = 0x217F54u; }
    }
    if (ctx->pc != 0x217F54u) { return; }
    ctx->pc = 0x217F54u;
    // 0x217f54: 0x8f848d00
    ctx->pc = 0x217f54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937856)));
    // 0x217f58: 0xc05cb3a
    ctx->pc = 0x217F58u;
    SET_GPR_U32(ctx, 31, 0x217F60u);
    ctx->pc = 0x217F5Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x172CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_StartFname_0x172ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F60u; }
        else if (ctx->pc != 0x217F60u) { ctx->pc = 0x217F60u; }
    }
    if (ctx->pc != 0x217F60u) { return; }
    ctx->pc = 0x217F60u;
label_217f60:
    // 0x217f60: 0x7bbf0030
    ctx->pc = 0x217f60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_217f64:
    // 0x217f64: 0x7bb20020
    ctx->pc = 0x217f64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217f68: 0x7bb10010
    ctx->pc = 0x217f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217f6c: 0x7bb00000
    ctx->pc = 0x217f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217f70: 0x3e00008
    ctx->pc = 0x217F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217F74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217EB0u: goto label_217eb0;
            case 0x217F28u: goto label_217f28;
            case 0x217F40u: goto label_217f40;
            case 0x217F60u: goto label_217f60;
            case 0x217F64u: goto label_217f64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217F78u;
}
