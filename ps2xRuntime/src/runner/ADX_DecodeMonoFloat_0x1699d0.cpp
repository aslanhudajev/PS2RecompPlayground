#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADX_DecodeMonoFloat
// Address: 0x1699d0 - 0x169b3c
void ADX_DecodeMonoFloat_0x1699d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADX_DecodeMonoFloat");


    ctx->pc = 0x1699d0u;

    // 0x1699d0: 0x84400
    ctx->pc = 0x1699d0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
    // 0x1699d4: 0x94c00
    ctx->pc = 0x1699d4u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 16));
    // 0x1699d8: 0x84303
    ctx->pc = 0x1699d8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 12));
    // 0x1699dc: 0x94b03
    ctx->pc = 0x1699dcu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x1699e0: 0x44881000
    ctx->pc = 0x1699e0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 8);
    // 0x1699e4: 0x468010a0
    ctx->pc = 0x1699e4u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x1699e8: 0x84e20000
    ctx->pc = 0x1699e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1699ec: 0x44890800
    ctx->pc = 0x1699ecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 9);
    // 0x1699f0: 0x46800860
    ctx->pc = 0x1699f0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1699f4: 0x84e30002
    ctx->pc = 0x1699f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1699f8: 0x3c013780
    ctx->pc = 0x1699f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14208 << 16));
    // 0x1699fc: 0x44810000
    ctx->pc = 0x1699fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x169a00: 0x21400
    ctx->pc = 0x169a00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x169a04: 0x31c00
    ctx->pc = 0x169a04u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x169a08: 0x402d
    ctx->pc = 0x169a08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a0c: 0x46000a02
    ctx->pc = 0x169a0cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x169a10: 0x44822000
    ctx->pc = 0x169a10u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x169a14: 0x46802120
    ctx->pc = 0x169a14u;
    ctx->f[4] = FPU_CVT_S_W(*(int32_t*)&ctx->f[4]);
    // 0x169a18: 0x44832800
    ctx->pc = 0x169a18u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 3);
    // 0x169a1c: 0x46802960
    ctx->pc = 0x169a1cu;
    ctx->f[5] = FPU_CVT_S_W(*(int32_t*)&ctx->f[5]);
    // 0x169a20: 0x18a0003c
    ctx->pc = 0x169A20u;
    {
        const bool branch_taken_0x169a20 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x169A24u;
        ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x169a20) {
            ctx->pc = 0x169B14u;
            goto label_169b14;
        }
    }
    ctx->pc = 0x169A28u;
    // 0x169a28: 0x240fff00
    ctx->pc = 0x169a28u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x169a2c: 0x3c0e002c
    ctx->pc = 0x169a2cu;
    SET_GPR_U32(ctx, 14, ((uint32_t)44 << 16));
    // 0x169a30: 0x3c0d002c
    ctx->pc = 0x169a30u;
    SET_GPR_U32(ctx, 13, ((uint32_t)44 << 16));
    // 0x169a34: 0x94820000
    ctx->pc = 0x169a34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_169a38:
    // 0x169a38: 0x21a00
    ctx->pc = 0x169a38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x169a3c: 0x6f1824
    ctx->pc = 0x169a3cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x169a40: 0x21202
    ctx->pc = 0x169a40u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x169a44: 0x431025
    ctx->pc = 0x169a44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169a48: 0x21400
    ctx->pc = 0x169a48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x169a4c: 0x21403
    ctx->pc = 0x169a4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x169a50: 0x30438000
    ctx->pc = 0x169a50u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 32768));
    // 0x169a54: 0x10600003
    ctx->pc = 0x169A54u;
    {
        const bool branch_taken_0x169a54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x169A58u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8191));
        if (branch_taken_0x169a54) {
            ctx->pc = 0x169A64u;
            goto label_169a64;
        }
    }
    ctx->pc = 0x169A5Cu;
    // 0x169a5c: 0x3e00008
    ctx->pc = 0x169A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169A60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169A38u: goto label_169a38;
            case 0x169A64u: goto label_169a64;
            case 0x169A88u: goto label_169a88;
            case 0x169B14u: goto label_169b14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169A64u;
label_169a64:
    // 0x169a64: 0x250a0001
    ctx->pc = 0x169a64u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 8), 1));
    // 0x169a68: 0x24420001
    ctx->pc = 0x169a68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x169a6c: 0x24840002
    ctx->pc = 0x169a6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x169a70: 0x44823000
    ctx->pc = 0x169a70u;
    *(uint32_t*)&ctx->f[6] = GPR_U32(ctx, 2);
    // 0x169a74: 0x468031a0
    ctx->pc = 0x169a74u;
    ctx->f[6] = FPU_CVT_S_W(*(int32_t*)&ctx->f[6]);
    // 0x169a78: 0x25cc98a0
    ctx->pc = 0x169a78u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 14), 4294940832));
    // 0x169a7c: 0x25ab9ca0
    ctx->pc = 0x169a7cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 13), 4294941856));
    // 0x169a80: 0x2409001e
    ctx->pc = 0x169a80u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 30));
    // 0x169a84: 0x24c80002
    ctx->pc = 0x169a84u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 6), 2));
label_169a88:
    // 0x169a88: 0x90820000
    ctx->pc = 0x169a88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169a8c: 0x46054002
    ctx->pc = 0x169a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x169a90: 0x46043842
    ctx->pc = 0x169a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x169a94: 0x46002146
    ctx->pc = 0x169a94u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x169a98: 0x21080
    ctx->pc = 0x169a98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x169a9c: 0x460540c2
    ctx->pc = 0x169a9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x169aa0: 0x4c1821
    ctx->pc = 0x169aa0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x169aa4: 0x24840001
    ctx->pc = 0x169aa4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x169aa8: 0xc4620000
    ctx->pc = 0x169aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x169aac: 0x46000840
    ctx->pc = 0x169aacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x169ab0: 0x4b1021
    ctx->pc = 0x169ab0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x169ab4: 0x24c60004
    ctx->pc = 0x169ab4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x169ab8: 0x46061002
    ctx->pc = 0x169ab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x169abc: 0x2529fffe
    ctx->pc = 0x169abcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967294));
    // 0x169ac0: 0xc4420000
    ctx->pc = 0x169ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x169ac4: 0x46000900
    ctx->pc = 0x169ac4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x169ac8: 0x46061082
    ctx->pc = 0x169ac8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x169acc: 0x46043802
    ctx->pc = 0x169accu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x169ad0: 0x46002146
    ctx->pc = 0x169ad0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x169ad4: 0x46002064
    ctx->pc = 0x169ad4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[4]);
    // 0x169ad8: 0x44020800
    ctx->pc = 0x169ad8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x169adc: 0x46030000
    ctx->pc = 0x169adcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x169ae0: 0x21403
    ctx->pc = 0x169ae0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x169ae4: 0xa502fffe
    ctx->pc = 0x169ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4294967294), (uint16_t)GPR_U32(ctx, 2));
    // 0x169ae8: 0x46020100
    ctx->pc = 0x169ae8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x169aec: 0x46002024
    ctx->pc = 0x169aecu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[4]);
    // 0x169af0: 0x44020000
    ctx->pc = 0x169af0u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x169af4: 0x21403
    ctx->pc = 0x169af4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x169af8: 0xa5020000
    ctx->pc = 0x169af8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x169afc: 0x521ffe2
    ctx->pc = 0x169AFCu;
    {
        const bool branch_taken_0x169afc = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x169B00u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
        if (branch_taken_0x169afc) {
            ctx->pc = 0x169A88u;
            goto label_169a88;
        }
    }
    ctx->pc = 0x169B04u;
    // 0x169b04: 0x140402d
    ctx->pc = 0x169b04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b08: 0x105102a
    ctx->pc = 0x169b08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 5)));
    // 0x169b0c: 0x5440ffca
    ctx->pc = 0x169B0Cu;
    {
        const bool branch_taken_0x169b0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x169b0c) {
            ctx->pc = 0x169B10u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x169A38u;
            goto label_169a38;
        }
    }
    ctx->pc = 0x169B14u;
label_169b14:
    // 0x169b14: 0x46002024
    ctx->pc = 0x169b14u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[4]);
    // 0x169b18: 0x44040000
    ctx->pc = 0x169b18u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x169b1c: 0xa0102d
    ctx->pc = 0x169b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b20: 0x46002824
    ctx->pc = 0x169b20u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[5]);
    // 0x169b24: 0x44030000
    ctx->pc = 0x169b24u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x169b28: 0x42403
    ctx->pc = 0x169b28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x169b2c: 0xa4e40000
    ctx->pc = 0x169b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x169b30: 0x31c03
    ctx->pc = 0x169b30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x169b34: 0x3e00008
    ctx->pc = 0x169B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169B38u;
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169A38u: goto label_169a38;
            case 0x169A64u: goto label_169a64;
            case 0x169A88u: goto label_169a88;
            case 0x169B14u: goto label_169b14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169B3Cu;
}
