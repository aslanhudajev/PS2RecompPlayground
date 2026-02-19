#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setPrimColor
// Address: 0x2beef8 - 0x2bf07c
void setPrimColor_0x2beef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2beef8u;

    // 0x2beef8: 0x3c020036
    ctx->pc = 0x2beef8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2beefc: 0x8c43dee0
    ctx->pc = 0x2beefcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2bef00: 0x3c013f80
    ctx->pc = 0x2bef00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2bef04: 0x44811000
    ctx->pc = 0x2bef04u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2bef08: 0x30a22000
    ctx->pc = 0x2bef08u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 8192));
    // 0x2bef0c: 0x10400004
    ctx->pc = 0x2BEF0Cu;
    {
        const bool branch_taken_0x2bef0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BEF10u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 20480));
        if (branch_taken_0x2bef0c) {
            ctx->pc = 0x2BEF20u;
            goto label_2bef20;
        }
    }
    ctx->pc = 0x2BEF14u;
    // 0x2bef14: 0x8c62001c
    ctx->pc = 0x2bef14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2bef18: 0x1000000e
    ctx->pc = 0x2BEF18u;
    {
        const bool branch_taken_0x2bef18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BEF1Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 176));
        if (branch_taken_0x2bef18) {
            ctx->pc = 0x2BEF54u;
            goto label_2bef54;
        }
    }
    ctx->pc = 0x2BEF20u;
label_2bef20:
    // 0x2bef20: 0x10400005
    ctx->pc = 0x2BEF20u;
    {
        const bool branch_taken_0x2bef20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BEF24u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
        if (branch_taken_0x2bef20) {
            ctx->pc = 0x2BEF38u;
            goto label_2bef38;
        }
    }
    ctx->pc = 0x2BEF28u;
    // 0x2bef28: 0x244700a8
    ctx->pc = 0x2bef28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 168));
    // 0x2bef2c: 0x8c820074
    ctx->pc = 0x2bef2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2bef30: 0x10000007
    ctx->pc = 0x2BEF30u;
    {
        const bool branch_taken_0x2bef30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BEF34u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x2bef30) {
            ctx->pc = 0x2BEF50u;
            goto label_2bef50;
        }
    }
    ctx->pc = 0x2BEF38u;
label_2bef38:
    // 0x2bef38: 0x44801000
    ctx->pc = 0x2bef38u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x2bef3c: 0x244700b8
    ctx->pc = 0x2bef3cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 184));
    // 0x2bef40: 0x8c820074
    ctx->pc = 0x2bef40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2bef44: 0x3c03ffff
    ctx->pc = 0x2bef44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2bef48: 0x3463fffe
    ctx->pc = 0x2bef48u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65534));
    // 0x2bef4c: 0x431024
    ctx->pc = 0x2bef4cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bef50:
    // 0x2bef50: 0xac820074
    ctx->pc = 0x2bef50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
label_2bef54:
    // 0x2bef54: 0x84c2006a
    ctx->pc = 0x2bef54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 106)));
    // 0x2bef58: 0x44820000
    ctx->pc = 0x2bef58u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2bef5c: 0x46800020
    ctx->pc = 0x2bef5cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bef60: 0xc4e10004
    ctx->pc = 0x2bef60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bef64: 0x46010000
    ctx->pc = 0x2bef64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bef68: 0x46020000
    ctx->pc = 0x2bef68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bef6c: 0x30a20100
    ctx->pc = 0x2bef6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 256));
    // 0x2bef70: 0x10400033
    ctx->pc = 0x2BEF70u;
    {
        const bool branch_taken_0x2bef70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BEF74u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
        if (branch_taken_0x2bef70) {
            ctx->pc = 0x2BF040u;
            goto label_2bf040;
        }
    }
    ctx->pc = 0x2BEF78u;
    // 0x2bef78: 0xc4e10000
    ctx->pc = 0x2bef78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bef7c: 0x3c013f00
    ctx->pc = 0x2bef7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2bef80: 0x34218081
    ctx->pc = 0x2bef80u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2bef84: 0x44810000
    ctx->pc = 0x2bef84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2bef88: 0x90c30066
    ctx->pc = 0x2bef88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 102)));
    // 0x2bef8c: 0x4600005
    ctx->pc = 0x2BEF8Cu;
    {
        const bool branch_taken_0x2bef8c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2BEF90u;
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2bef8c) {
            ctx->pc = 0x2BEFA4u;
            goto label_2befa4;
        }
    }
    ctx->pc = 0x2BEF94u;
    // 0x2bef94: 0x44830000
    ctx->pc = 0x2bef94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2bef98: 0x46800020
    ctx->pc = 0x2bef98u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bef9c: 0x10000008
    ctx->pc = 0x2BEF9Cu;
    {
        const bool branch_taken_0x2bef9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BEFA0u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x2bef9c) {
            ctx->pc = 0x2BEFC0u;
            goto label_2befc0;
        }
    }
    ctx->pc = 0x2BEFA4u;
label_2befa4:
    // 0x2befa4: 0x30620001
    ctx->pc = 0x2befa4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2befa8: 0x31842
    ctx->pc = 0x2befa8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2befac: 0x431025
    ctx->pc = 0x2befacu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2befb0: 0x44820000
    ctx->pc = 0x2befb0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2befb4: 0x46800020
    ctx->pc = 0x2befb4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2befb8: 0x46000000
    ctx->pc = 0x2befb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2befbc: 0x46010002
    ctx->pc = 0x2befbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2befc0:
    // 0x2befc0: 0xe4800010
    ctx->pc = 0x2befc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2befc4: 0x90c30065
    ctx->pc = 0x2befc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 101)));
    // 0x2befc8: 0x4600005
    ctx->pc = 0x2BEFC8u;
    {
        const bool branch_taken_0x2befc8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2BEFCCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2befc8) {
            ctx->pc = 0x2BEFE0u;
            goto label_2befe0;
        }
    }
    ctx->pc = 0x2BEFD0u;
    // 0x2befd0: 0x44830000
    ctx->pc = 0x2befd0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2befd4: 0x46800020
    ctx->pc = 0x2befd4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2befd8: 0x10000007
    ctx->pc = 0x2BEFD8u;
    {
        const bool branch_taken_0x2befd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BEFDCu;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x2befd8) {
            ctx->pc = 0x2BEFF8u;
            goto label_2beff8;
        }
    }
    ctx->pc = 0x2BEFE0u;
label_2befe0:
    // 0x2befe0: 0x31842
    ctx->pc = 0x2befe0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2befe4: 0x431025
    ctx->pc = 0x2befe4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2befe8: 0x44820000
    ctx->pc = 0x2befe8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2befec: 0x46800020
    ctx->pc = 0x2befecu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2beff0: 0x46000000
    ctx->pc = 0x2beff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2beff4: 0x46010002
    ctx->pc = 0x2beff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2beff8:
    // 0x2beff8: 0xe4800014
    ctx->pc = 0x2beff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2beffc: 0x90c30064
    ctx->pc = 0x2beffcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 100)));
    // 0x2bf000: 0x4620005
    ctx->pc = 0x2BF000u;
    {
        const bool branch_taken_0x2bf000 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2bf000) {
            ctx->pc = 0x2BF004u;
            SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x2BF018u;
            goto label_2bf018;
        }
    }
    ctx->pc = 0x2BF008u;
    // 0x2bf008: 0x44830000
    ctx->pc = 0x2bf008u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2bf00c: 0x46800020
    ctx->pc = 0x2bf00cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bf010: 0x10000007
    ctx->pc = 0x2BF010u;
    {
        const bool branch_taken_0x2bf010 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF014u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x2bf010) {
            ctx->pc = 0x2BF030u;
            goto label_2bf030;
        }
    }
    ctx->pc = 0x2BF018u;
label_2bf018:
    // 0x2bf018: 0x31842
    ctx->pc = 0x2bf018u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2bf01c: 0x431025
    ctx->pc = 0x2bf01cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf020: 0x44820000
    ctx->pc = 0x2bf020u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2bf024: 0x46800020
    ctx->pc = 0x2bf024u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bf028: 0x46000000
    ctx->pc = 0x2bf028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bf02c: 0x46010002
    ctx->pc = 0x2bf02cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2bf030:
    // 0x2bf030: 0xe4800018
    ctx->pc = 0x2bf030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2bf034: 0x8c820074
    ctx->pc = 0x2bf034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2bf038: 0x1000000c
    ctx->pc = 0x2BF038u;
    {
        const bool branch_taken_0x2bf038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF03Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
        if (branch_taken_0x2bf038) {
            ctx->pc = 0x2BF06Cu;
            goto label_2bf06c;
        }
    }
    ctx->pc = 0x2BF040u;
label_2bf040:
    // 0x2bf040: 0xc4e10000
    ctx->pc = 0x2bf040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf044: 0x3c014300
    ctx->pc = 0x2bf044u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17152 << 16));
    // 0x2bf048: 0x44810000
    ctx->pc = 0x2bf048u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2bf04c: 0x46000842
    ctx->pc = 0x2bf04cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bf050: 0xe4810010
    ctx->pc = 0x2bf050u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2bf054: 0xe4810018
    ctx->pc = 0x2bf054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2bf058: 0xe4810014
    ctx->pc = 0x2bf058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2bf05c: 0x8c820074
    ctx->pc = 0x2bf05cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2bf060: 0x3c03ffff
    ctx->pc = 0x2bf060u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2bf064: 0x3463fff7
    ctx->pc = 0x2bf064u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65527));
    // 0x2bf068: 0x431024
    ctx->pc = 0x2bf068u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bf06c:
    // 0x2bf06c: 0xac820074
    ctx->pc = 0x2bf06cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x2bf070: 0x24020004
    ctx->pc = 0x2bf070u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bf074: 0x3e00008
    ctx->pc = 0x2BF074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF078u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BEF20u: goto label_2bef20;
            case 0x2BEF38u: goto label_2bef38;
            case 0x2BEF50u: goto label_2bef50;
            case 0x2BEF54u: goto label_2bef54;
            case 0x2BEFA4u: goto label_2befa4;
            case 0x2BEFC0u: goto label_2befc0;
            case 0x2BEFE0u: goto label_2befe0;
            case 0x2BEFF8u: goto label_2beff8;
            case 0x2BF018u: goto label_2bf018;
            case 0x2BF030u: goto label_2bf030;
            case 0x2BF040u: goto label_2bf040;
            case 0x2BF06Cu: goto label_2bf06c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BF07Cu;
}
