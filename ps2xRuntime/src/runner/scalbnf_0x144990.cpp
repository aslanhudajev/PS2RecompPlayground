#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: scalbnf
// Address: 0x144990 - 0x144af0
void scalbnf_0x144990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("scalbnf");


    ctx->pc = 0x144990u;

    // 0x144990: 0x27bdffe0
    ctx->pc = 0x144990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144994: 0x44056000
    ctx->pc = 0x144994u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[12]);
    // 0x144998: 0xffbf0000
    ctx->pc = 0x144998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14499c: 0xa0302d
    ctx->pc = 0x14499cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449a0: 0x3c077f80
    ctx->pc = 0x1449a0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)32640 << 16));
    // 0x1449a4: 0xc71024
    ctx->pc = 0x1449a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1449a8: 0x21dc3
    ctx->pc = 0x1449a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 23));
    // 0x1449ac: 0x1460001c
    ctx->pc = 0x1449ACu;
    {
        const bool branch_taken_0x1449ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1449B0u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        if (branch_taken_0x1449ac) {
            ctx->pc = 0x144A20u;
            goto label_144a20;
        }
    }
    ctx->pc = 0x1449B4u;
    // 0x1449b4: 0x3c027fff
    ctx->pc = 0x1449b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x1449b8: 0x3442ffff
    ctx->pc = 0x1449b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1449bc: 0xc21024
    ctx->pc = 0x1449bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1449c0: 0x14400005
    ctx->pc = 0x1449C0u;
    {
        const bool branch_taken_0x1449c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1449C4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1449c0) {
            ctx->pc = 0x1449D8u;
            goto label_1449d8;
        }
    }
    ctx->pc = 0x1449C8u;
    // 0x1449c8: 0x44850000
    ctx->pc = 0x1449c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x1449cc: 0x10000046
    ctx->pc = 0x1449CCu;
    {
        const bool branch_taken_0x1449cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1449D0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x1449cc) {
            ctx->pc = 0x144AE8u;
            goto label_144ae8;
        }
    }
    ctx->pc = 0x1449D4u;
    // 0x1449d4: 0x0
    ctx->pc = 0x1449d4u;
    // NOP
label_1449d8:
    // 0x1449d8: 0x3c014c00
    ctx->pc = 0x1449d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)19456 << 16));
    // 0x1449dc: 0x44810000
    ctx->pc = 0x1449dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x1449e0: 0x44850800
    ctx->pc = 0x1449e0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 5);
    // 0x1449e4: 0x46000842
    ctx->pc = 0x1449e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1449e8: 0x44050800
    ctx->pc = 0x1449e8u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
    // 0x1449ec: 0xa0302d
    ctx->pc = 0x1449ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449f0: 0xa71824
    ctx->pc = 0x1449f0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1449f4: 0x3c02ffff
    ctx->pc = 0x1449f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x1449f8: 0x31dc3
    ctx->pc = 0x1449f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x1449fc: 0x34423cb0
    ctx->pc = 0x1449fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 15536));
    // 0x144a00: 0x82102a
    ctx->pc = 0x144a00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x144a04: 0x10400006
    ctx->pc = 0x144A04u;
    {
        const bool branch_taken_0x144a04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x144A08u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967271));
        if (branch_taken_0x144a04) {
            ctx->pc = 0x144A20u;
            goto label_144a20;
        }
    }
    ctx->pc = 0x144A0Cu;
    // 0x144a0c: 0x3c010da2
    ctx->pc = 0x144a0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)3490 << 16));
    // 0x144a10: 0x34214260
    ctx->pc = 0x144a10u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16992));
    // 0x144a14: 0x44810000
    ctx->pc = 0x144a14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x144a18: 0x10000031
    ctx->pc = 0x144A18u;
    {
        const bool branch_taken_0x144a18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144A1Cu;
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x144a18) {
            ctx->pc = 0x144AE0u;
            goto label_144ae0;
        }
    }
    ctx->pc = 0x144A20u;
label_144a20:
    // 0x144a20: 0x240200ff
    ctx->pc = 0x144a20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x144a24: 0x14620004
    ctx->pc = 0x144A24u;
    {
        const bool branch_taken_0x144a24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x144A28u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x144a24) {
            ctx->pc = 0x144A38u;
            goto label_144a38;
        }
    }
    ctx->pc = 0x144A2Cu;
    // 0x144a2c: 0x44851000
    ctx->pc = 0x144a2cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 5);
    // 0x144a30: 0x1000002b
    ctx->pc = 0x144A30u;
    {
        const bool branch_taken_0x144a30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144A34u;
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        if (branch_taken_0x144a30) {
            ctx->pc = 0x144AE0u;
            goto label_144ae0;
        }
    }
    ctx->pc = 0x144A38u;
label_144a38:
    // 0x144a38: 0x286200ff
    ctx->pc = 0x144a38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 255));
    // 0x144a3c: 0x10400015
    ctx->pc = 0x144A3Cu;
    {
        const bool branch_taken_0x144a3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x144a3c) {
            ctx->pc = 0x144A94u;
            goto label_144a94;
        }
    }
    ctx->pc = 0x144A44u;
    // 0x144a44: 0x1860000a
    ctx->pc = 0x144A44u;
    {
        const bool branch_taken_0x144a44 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x144A48u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x144a44) {
            ctx->pc = 0x144A70u;
            goto label_144a70;
        }
    }
    ctx->pc = 0x144A4Cu;
    // 0x144a4c: 0x3c02807f
    ctx->pc = 0x144a4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32895 << 16));
    // 0x144a50: 0x31dc0
    ctx->pc = 0x144a50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 23));
    // 0x144a54: 0x3442ffff
    ctx->pc = 0x144a54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x144a58: 0xc21024
    ctx->pc = 0x144a58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x144a5c: 0x432825
    ctx->pc = 0x144a5cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144a60: 0x44850000
    ctx->pc = 0x144a60u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x144a64: 0x10000020
    ctx->pc = 0x144A64u;
    {
        const bool branch_taken_0x144a64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144A68u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x144a64) {
            ctx->pc = 0x144AE8u;
            goto label_144ae8;
        }
    }
    ctx->pc = 0x144A6Cu;
    // 0x144a6c: 0x0
    ctx->pc = 0x144a6cu;
    // NOP
label_144a70:
    // 0x144a70: 0x2862ffe8
    ctx->pc = 0x144a70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4294967272));
    // 0x144a74: 0x1040000f
    ctx->pc = 0x144A74u;
    {
        const bool branch_taken_0x144a74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x144A78u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 50000));
        if (branch_taken_0x144a74) {
            ctx->pc = 0x144AB4u;
            goto label_144ab4;
        }
    }
    ctx->pc = 0x144A7Cu;
    // 0x144a7c: 0x44102a
    ctx->pc = 0x144a7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x144a80: 0x3c010da2
    ctx->pc = 0x144a80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)3490 << 16));
    // 0x144a84: 0x34214260
    ctx->pc = 0x144a84u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16992));
    // 0x144a88: 0x4481a000
    ctx->pc = 0x144a88u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x144a8c: 0x10400004
    ctx->pc = 0x144A8Cu;
    {
        const bool branch_taken_0x144a8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x144a8c) {
            ctx->pc = 0x144AA0u;
            goto label_144aa0;
        }
    }
    ctx->pc = 0x144A94u;
label_144a94:
    // 0x144a94: 0x3c017149
    ctx->pc = 0x144a94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)29001 << 16));
    // 0x144a98: 0x3421f2ca
    ctx->pc = 0x144a98u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62154));
    // 0x144a9c: 0x4481a000
    ctx->pc = 0x144a9cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_144aa0:
    // 0x144aa0: 0x44856800
    ctx->pc = 0x144aa0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 5);
    // 0x144aa4: 0xc05124e
    ctx->pc = 0x144AA4u;
    SET_GPR_U32(ctx, 31, 0x144AACu);
    ctx->pc = 0x144AA8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x144938u;
    {
        const uint32_t __entryPc = ctx->pc;
        copysignf_0x144938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144AACu; }
        else if (ctx->pc != 0x144AACu) { ctx->pc = 0x144AACu; }
    }
    if (ctx->pc != 0x144AACu) { return; }
    ctx->pc = 0x144AACu;
    // 0x144aac: 0x1000000c
    ctx->pc = 0x144AACu;
    {
        const bool branch_taken_0x144aac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144AB0u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        if (branch_taken_0x144aac) {
            ctx->pc = 0x144AE0u;
            goto label_144ae0;
        }
    }
    ctx->pc = 0x144AB4u;
label_144ab4:
    // 0x144ab4: 0x24630019
    ctx->pc = 0x144ab4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 25));
    // 0x144ab8: 0x3c02807f
    ctx->pc = 0x144ab8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32895 << 16));
    // 0x144abc: 0x3442ffff
    ctx->pc = 0x144abcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x144ac0: 0x31dc0
    ctx->pc = 0x144ac0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 23));
    // 0x144ac4: 0xc21024
    ctx->pc = 0x144ac4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x144ac8: 0x432825
    ctx->pc = 0x144ac8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144acc: 0x3c013300
    ctx->pc = 0x144accu;
    SET_GPR_U32(ctx, 1, ((uint32_t)13056 << 16));
    // 0x144ad0: 0x44810000
    ctx->pc = 0x144ad0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x144ad4: 0x44850800
    ctx->pc = 0x144ad4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 5);
    // 0x144ad8: 0x46000802
    ctx->pc = 0x144ad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x144adc: 0x0
    ctx->pc = 0x144adcu;
    // NOP
label_144ae0:
    // 0x144ae0: 0xdfbf0000
    ctx->pc = 0x144ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144ae4: 0xc7b40010
    ctx->pc = 0x144ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_144ae8:
    // 0x144ae8: 0x3e00008
    ctx->pc = 0x144AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144AECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1449D8u: goto label_1449d8;
            case 0x144A20u: goto label_144a20;
            case 0x144A38u: goto label_144a38;
            case 0x144A70u: goto label_144a70;
            case 0x144A94u: goto label_144a94;
            case 0x144AA0u: goto label_144aa0;
            case 0x144AB4u: goto label_144ab4;
            case 0x144AE0u: goto label_144ae0;
            case 0x144AE8u: goto label_144ae8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144AF0u;
}
