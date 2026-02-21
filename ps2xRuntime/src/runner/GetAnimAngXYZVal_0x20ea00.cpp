#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetAnimAngXYZVal
// Address: 0x20ea00 - 0x20f948
void GetAnimAngXYZVal_0x20ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20ea00u;

    // 0x20ea00: 0x27bdff20
    ctx->pc = 0x20ea00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x20ea04: 0xffbf00c0
    ctx->pc = 0x20ea04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x20ea08: 0xffbe00b0
    ctx->pc = 0x20ea08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x20ea0c: 0xffb700a0
    ctx->pc = 0x20ea0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x20ea10: 0xffb60090
    ctx->pc = 0x20ea10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x20ea14: 0xffb50080
    ctx->pc = 0x20ea14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x20ea18: 0xffb40070
    ctx->pc = 0x20ea18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x20ea1c: 0xffb30060
    ctx->pc = 0x20ea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x20ea20: 0xffb20050
    ctx->pc = 0x20ea20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x20ea24: 0xffb10040
    ctx->pc = 0x20ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x20ea28: 0xffb00030
    ctx->pc = 0x20ea28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x20ea2c: 0xe7b400d0
    ctx->pc = 0x20ea2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x20ea30: 0xafa40004
    ctx->pc = 0x20ea30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x20ea34: 0xc0802d
    ctx->pc = 0x20ea34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ea38: 0xafa70008
    ctx->pc = 0x20ea38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x20ea3c: 0x100b82d
    ctx->pc = 0x20ea3cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ea40: 0x46006506
    ctx->pc = 0x20ea40u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x20ea44: 0xafa9000c
    ctx->pc = 0x20ea44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x20ea48: 0x84920008
    ctx->pc = 0x20ea48u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20ea4c: 0x8494000a
    ctx->pc = 0x20ea4cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x20ea50: 0xafa50010
    ctx->pc = 0x20ea50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x20ea54: 0x24930010
    ctx->pc = 0x20ea54u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 4), 16));
    // 0x20ea58: 0x249e0020
    ctx->pc = 0x20ea58u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 4), 32));
    // 0x20ea5c: 0x24a20010
    ctx->pc = 0x20ea5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
    // 0x20ea60: 0xafa20014
    ctx->pc = 0x20ea60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x20ea64: 0x24950040
    ctx->pc = 0x20ea64u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 4), 64));
    // 0x20ea68: 0x24830050
    ctx->pc = 0x20ea68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 80));
    // 0x20ea6c: 0xafa30018
    ctx->pc = 0x20ea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x20ea70: 0x24a40020
    ctx->pc = 0x20ea70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 32));
    // 0x20ea74: 0xafa4001c
    ctx->pc = 0x20ea74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x20ea78: 0x8fa60004
    ctx->pc = 0x20ea78u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20ea7c: 0x24d60070
    ctx->pc = 0x20ea7cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 6), 112));
    // 0x20ea80: 0x24c80080
    ctx->pc = 0x20ea80u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 6), 128));
    // 0x20ea84: 0xafa80020
    ctx->pc = 0x20ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    // 0x20ea88: 0x8cc2000c
    ctx->pc = 0x20ea88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x20ea8c: 0xafa20000
    ctx->pc = 0x20ea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x20ea90: 0xe0502d
    ctx->pc = 0x20ea90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ea94: 0x31424000
    ctx->pc = 0x20ea94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 10), 16384));
    // 0x20ea98: 0x1040005e
    ctx->pc = 0x20EA98u;
    {
        const bool branch_taken_0x20ea98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EA9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
        if (branch_taken_0x20ea98) {
            ctx->pc = 0x20EC14u;
            goto label_20ec14;
        }
    }
    ctx->pc = 0x20EAA0u;
    // 0x20eaa0: 0xa1400
    ctx->pc = 0x20eaa0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 16));
    // 0x20eaa4: 0x23403
    ctx->pc = 0x20eaa4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20eaa8: 0x282d
    ctx->pc = 0x20eaa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eaac: 0x202d
    ctx->pc = 0x20eaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eab0: 0x3c020032
    ctx->pc = 0x20eab0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20eab4: 0x2447f478
    ctx->pc = 0x20eab4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20eab8: 0x41880
    ctx->pc = 0x20eab8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20eabc: 0x0
    ctx->pc = 0x20eabcu;
    // NOP
label_20eac0:
    // 0x20eac0: 0x671021
    ctx->pc = 0x20eac0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20eac4: 0x8c420000
    ctx->pc = 0x20eac4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20eac8: 0xc21024
    ctx->pc = 0x20eac8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20eacc: 0x10400008
    ctx->pc = 0x20EACCu;
    {
        const bool branch_taken_0x20eacc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EAD0u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x20eacc) {
            ctx->pc = 0x20EAF0u;
            goto label_20eaf0;
        }
    }
    ctx->pc = 0x20EAD4u;
    // 0x20ead4: 0x681021
    ctx->pc = 0x20ead4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x20ead8: 0x51880
    ctx->pc = 0x20ead8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20eadc: 0x701821
    ctx->pc = 0x20eadcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x20eae0: 0xc4600000
    ctx->pc = 0x20eae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20eae4: 0xe4400000
    ctx->pc = 0x20eae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20eae8: 0x10000005
    ctx->pc = 0x20EAE8u;
    {
        const bool branch_taken_0x20eae8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EAECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x20eae8) {
            ctx->pc = 0x20EB00u;
            goto label_20eb00;
        }
    }
    ctx->pc = 0x20EAF0u;
label_20eaf0:
    // 0x20eaf0: 0x41080
    ctx->pc = 0x20eaf0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20eaf4: 0x8faa0010
    ctx->pc = 0x20eaf4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20eaf8: 0x4a1021
    ctx->pc = 0x20eaf8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x20eafc: 0xac400000
    ctx->pc = 0x20eafcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20eb00:
    // 0x20eb00: 0x24840001
    ctx->pc = 0x20eb00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20eb04: 0x28820003
    ctx->pc = 0x20eb04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x20eb08: 0x1440ffed
    ctx->pc = 0x20EB08u;
    {
        const bool branch_taken_0x20eb08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20EB0Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x20eb08) {
            ctx->pc = 0x20EAC0u;
            goto label_20eac0;
        }
    }
    ctx->pc = 0x20EB10u;
    // 0x20eb10: 0x8fa30008
    ctx->pc = 0x20eb10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20eb14: 0x31400
    ctx->pc = 0x20eb14u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 16));
    // 0x20eb18: 0x23403
    ctx->pc = 0x20eb18u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20eb1c: 0xa0202d
    ctx->pc = 0x20eb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb20: 0x282d
    ctx->pc = 0x20eb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb24: 0x3c020032
    ctx->pc = 0x20eb24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20eb28: 0x2447f478
    ctx->pc = 0x20eb28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20eb2c: 0x24a20003
    ctx->pc = 0x20eb2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 3));
label_20eb30:
    // 0x20eb30: 0x21080
    ctx->pc = 0x20eb30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20eb34: 0x471021
    ctx->pc = 0x20eb34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20eb38: 0x8c420000
    ctx->pc = 0x20eb38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20eb3c: 0xc21024
    ctx->pc = 0x20eb3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20eb40: 0x10400009
    ctx->pc = 0x20EB40u;
    {
        const bool branch_taken_0x20eb40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EB44u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x20eb40) {
            ctx->pc = 0x20EB68u;
            goto label_20eb68;
        }
    }
    ctx->pc = 0x20EB48u;
    // 0x20eb48: 0x8fa80014
    ctx->pc = 0x20eb48u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x20eb4c: 0x481021
    ctx->pc = 0x20eb4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20eb50: 0x41880
    ctx->pc = 0x20eb50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20eb54: 0x701821
    ctx->pc = 0x20eb54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x20eb58: 0xc4600000
    ctx->pc = 0x20eb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20eb5c: 0xe4400000
    ctx->pc = 0x20eb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20eb60: 0x10000004
    ctx->pc = 0x20EB60u;
    {
        const bool branch_taken_0x20eb60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EB64u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x20eb60) {
            ctx->pc = 0x20EB74u;
            goto label_20eb74;
        }
    }
    ctx->pc = 0x20EB68u;
label_20eb68:
    // 0x20eb68: 0x8faa0014
    ctx->pc = 0x20eb68u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x20eb6c: 0x4a1021
    ctx->pc = 0x20eb6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x20eb70: 0xac400000
    ctx->pc = 0x20eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20eb74:
    // 0x20eb74: 0x24a50001
    ctx->pc = 0x20eb74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20eb78: 0x28a20003
    ctx->pc = 0x20eb78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x20eb7c: 0x1440ffec
    ctx->pc = 0x20EB7Cu;
    {
        const bool branch_taken_0x20eb7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20EB80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 3));
        if (branch_taken_0x20eb7c) {
            ctx->pc = 0x20EB30u;
            goto label_20eb30;
        }
    }
    ctx->pc = 0x20EB84u;
    // 0x20eb84: 0x8fa30008
    ctx->pc = 0x20eb84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20eb88: 0x31400
    ctx->pc = 0x20eb88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 16));
    // 0x20eb8c: 0x23c03
    ctx->pc = 0x20eb8cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20eb90: 0x80282d
    ctx->pc = 0x20eb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb94: 0x202d
    ctx->pc = 0x20eb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb98: 0x3c020032
    ctx->pc = 0x20eb98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20eb9c: 0x2446f478
    ctx->pc = 0x20eb9cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20eba0: 0x3c013f80
    ctx->pc = 0x20eba0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x20eba4: 0x44810800
    ctx->pc = 0x20eba4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x20eba8: 0x24820006
    ctx->pc = 0x20eba8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 6));
    // 0x20ebac: 0x0
    ctx->pc = 0x20ebacu;
    // NOP
label_20ebb0:
    // 0x20ebb0: 0x21080
    ctx->pc = 0x20ebb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ebb4: 0x461021
    ctx->pc = 0x20ebb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20ebb8: 0x8c420000
    ctx->pc = 0x20ebb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ebbc: 0xe21024
    ctx->pc = 0x20ebbcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x20ebc0: 0x10400009
    ctx->pc = 0x20EBC0u;
    {
        const bool branch_taken_0x20ebc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EBC4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x20ebc0) {
            ctx->pc = 0x20EBE8u;
            goto label_20ebe8;
        }
    }
    ctx->pc = 0x20EBC8u;
    // 0x20ebc8: 0x8fa8001c
    ctx->pc = 0x20ebc8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x20ebcc: 0x481021
    ctx->pc = 0x20ebccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20ebd0: 0x51880
    ctx->pc = 0x20ebd0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20ebd4: 0x701821
    ctx->pc = 0x20ebd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x20ebd8: 0xc4600000
    ctx->pc = 0x20ebd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ebdc: 0xe4400000
    ctx->pc = 0x20ebdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20ebe0: 0x10000004
    ctx->pc = 0x20EBE0u;
    {
        const bool branch_taken_0x20ebe0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EBE4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x20ebe0) {
            ctx->pc = 0x20EBF4u;
            goto label_20ebf4;
        }
    }
    ctx->pc = 0x20EBE8u;
label_20ebe8:
    // 0x20ebe8: 0x8faa001c
    ctx->pc = 0x20ebe8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x20ebec: 0x4a1021
    ctx->pc = 0x20ebecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x20ebf0: 0xe4410000
    ctx->pc = 0x20ebf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20ebf4:
    // 0x20ebf4: 0x24840001
    ctx->pc = 0x20ebf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20ebf8: 0x28820003
    ctx->pc = 0x20ebf8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x20ebfc: 0x5440ffec
    ctx->pc = 0x20EBFCu;
    {
        const bool branch_taken_0x20ebfc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20ebfc) {
            ctx->pc = 0x20EC00u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 6));
            ctx->pc = 0x20EBB0u;
            goto label_20ebb0;
        }
    }
    ctx->pc = 0x20EC04u;
    // 0x20ec04: 0x8fa20004
    ctx->pc = 0x20ec04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20ec08: 0xa4400008
    ctx->pc = 0x20ec08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
label_20ec0c:
    // 0x20ec0c: 0x10000341
    ctx->pc = 0x20EC0Cu;
    {
        const bool branch_taken_0x20ec0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EC10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20ec0c) {
            ctx->pc = 0x20F914u;
            goto label_20f914;
        }
    }
    ctx->pc = 0x20EC14u;
label_20ec14:
    // 0x20ec14: 0x44800000
    ctx->pc = 0x20ec14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x20ec18: 0x4600a032
    ctx->pc = 0x20ec18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ec1c: 0x0
    ctx->pc = 0x20ec1cu;
    // NOP
    // 0x20ec20: 0x4500007b
    ctx->pc = 0x20EC20u;
    {
        const bool branch_taken_0x20ec20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20EC24u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        if (branch_taken_0x20ec20) {
            ctx->pc = 0x20EE10u;
            goto label_20ee10;
        }
    }
    ctx->pc = 0x20EC28u;
    // 0x20ec28: 0x16400003
    ctx->pc = 0x20EC28u;
    {
        const bool branch_taken_0x20ec28 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x20EC2Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        if (branch_taken_0x20ec28) {
            ctx->pc = 0x20EC38u;
            goto label_20ec38;
        }
    }
    ctx->pc = 0x20EC30u;
    // 0x20ec30: 0x12800338
    ctx->pc = 0x20EC30u;
    {
        const bool branch_taken_0x20ec30 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EC34u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20ec30) {
            ctx->pc = 0x20F914u;
            goto label_20f914;
        }
    }
    ctx->pc = 0x20EC38u;
label_20ec38:
    // 0x20ec38: 0x2462001f
    ctx->pc = 0x20ec38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 31));
    // 0x20ec3c: 0x21143
    ctx->pc = 0x20ec3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20ec40: 0x21080
    ctx->pc = 0x20ec40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ec44: 0x2028021
    ctx->pc = 0x20ec44u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20ec48: 0x8fa40008
    ctx->pc = 0x20ec48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20ec4c: 0x41400
    ctx->pc = 0x20ec4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 16));
    // 0x20ec50: 0x23403
    ctx->pc = 0x20ec50u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20ec54: 0x282d
    ctx->pc = 0x20ec54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ec58: 0x202d
    ctx->pc = 0x20ec58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ec5c: 0x3c020032
    ctx->pc = 0x20ec5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20ec60: 0x2447f478
    ctx->pc = 0x20ec60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20ec64: 0x41880
    ctx->pc = 0x20ec64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_20ec68:
    // 0x20ec68: 0x671021
    ctx->pc = 0x20ec68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20ec6c: 0x8c420000
    ctx->pc = 0x20ec6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ec70: 0xc21024
    ctx->pc = 0x20ec70u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20ec74: 0x10400007
    ctx->pc = 0x20EC74u;
    {
        const bool branch_taken_0x20ec74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EC78u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        if (branch_taken_0x20ec74) {
            ctx->pc = 0x20EC94u;
            goto label_20ec94;
        }
    }
    ctx->pc = 0x20EC7Cu;
    // 0x20ec7c: 0x51880
    ctx->pc = 0x20ec7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20ec80: 0x701821
    ctx->pc = 0x20ec80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x20ec84: 0xc4600000
    ctx->pc = 0x20ec84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ec88: 0xe4400000
    ctx->pc = 0x20ec88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20ec8c: 0x10000004
    ctx->pc = 0x20EC8Cu;
    {
        const bool branch_taken_0x20ec8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EC90u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x20ec8c) {
            ctx->pc = 0x20ECA0u;
            goto label_20eca0;
        }
    }
    ctx->pc = 0x20EC94u;
label_20ec94:
    // 0x20ec94: 0x41080
    ctx->pc = 0x20ec94u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20ec98: 0x531021
    ctx->pc = 0x20ec98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x20ec9c: 0xac400000
    ctx->pc = 0x20ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20eca0:
    // 0x20eca0: 0x24840001
    ctx->pc = 0x20eca0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20eca4: 0x28820003
    ctx->pc = 0x20eca4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x20eca8: 0x1440ffef
    ctx->pc = 0x20ECA8u;
    {
        const bool branch_taken_0x20eca8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20ECACu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x20eca8) {
            ctx->pc = 0x20EC68u;
            goto label_20ec68;
        }
    }
    ctx->pc = 0x20ECB0u;
    // 0x20ecb0: 0xa0182d
    ctx->pc = 0x20ecb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ecb4: 0x8fa60010
    ctx->pc = 0x20ecb4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ecb8: 0x7a620000
    ctx->pc = 0x20ecb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20ecbc: 0x7cc20000
    ctx->pc = 0x20ecbcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x20ecc0: 0x7a620000
    ctx->pc = 0x20ecc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20ecc4: 0x7fc20000
    ctx->pc = 0x20ecc4u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
    // 0x20ecc8: 0x8fa80008
    ctx->pc = 0x20ecc8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20eccc: 0x81400
    ctx->pc = 0x20ecccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 16));
    // 0x20ecd0: 0x23403
    ctx->pc = 0x20ecd0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20ecd4: 0x60202d
    ctx->pc = 0x20ecd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ecd8: 0x282d
    ctx->pc = 0x20ecd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ecdc: 0x3c020032
    ctx->pc = 0x20ecdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20ece0: 0x2447f478
    ctx->pc = 0x20ece0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20ece4: 0x24a20003
    ctx->pc = 0x20ece4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 3));
label_20ece8:
    // 0x20ece8: 0x21080
    ctx->pc = 0x20ece8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ecec: 0x471021
    ctx->pc = 0x20ececu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20ecf0: 0x8c420000
    ctx->pc = 0x20ecf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ecf4: 0xc21024
    ctx->pc = 0x20ecf4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20ecf8: 0x10400008
    ctx->pc = 0x20ECF8u;
    {
        const bool branch_taken_0x20ecf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20ECFCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x20ecf8) {
            ctx->pc = 0x20ED1Cu;
            goto label_20ed1c;
        }
    }
    ctx->pc = 0x20ED00u;
    // 0x20ed00: 0x551021
    ctx->pc = 0x20ed00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x20ed04: 0x41880
    ctx->pc = 0x20ed04u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20ed08: 0x701821
    ctx->pc = 0x20ed08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x20ed0c: 0xc4600000
    ctx->pc = 0x20ed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ed10: 0xe4400000
    ctx->pc = 0x20ed10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20ed14: 0x10000003
    ctx->pc = 0x20ED14u;
    {
        const bool branch_taken_0x20ed14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20ED18u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x20ed14) {
            ctx->pc = 0x20ED24u;
            goto label_20ed24;
        }
    }
    ctx->pc = 0x20ED1Cu;
label_20ed1c:
    // 0x20ed1c: 0x551021
    ctx->pc = 0x20ed1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x20ed20: 0xac400000
    ctx->pc = 0x20ed20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20ed24:
    // 0x20ed24: 0x24a50001
    ctx->pc = 0x20ed24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20ed28: 0x28a20003
    ctx->pc = 0x20ed28u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x20ed2c: 0x1440ffee
    ctx->pc = 0x20ED2Cu;
    {
        const bool branch_taken_0x20ed2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20ED30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 3));
        if (branch_taken_0x20ed2c) {
            ctx->pc = 0x20ECE8u;
            goto label_20ece8;
        }
    }
    ctx->pc = 0x20ED34u;
    // 0x20ed34: 0x80182d
    ctx->pc = 0x20ed34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed38: 0x8faa0014
    ctx->pc = 0x20ed38u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x20ed3c: 0x7aa20000
    ctx->pc = 0x20ed3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x20ed40: 0x7d420000
    ctx->pc = 0x20ed40u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x20ed44: 0x8fa40018
    ctx->pc = 0x20ed44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20ed48: 0x7aa20000
    ctx->pc = 0x20ed48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x20ed4c: 0x7c820000
    ctx->pc = 0x20ed4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x20ed50: 0x8fa60008
    ctx->pc = 0x20ed50u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20ed54: 0x61400
    ctx->pc = 0x20ed54u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 16));
    // 0x20ed58: 0x23403
    ctx->pc = 0x20ed58u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20ed5c: 0x60282d
    ctx->pc = 0x20ed5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed60: 0x202d
    ctx->pc = 0x20ed60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed64: 0x3c020032
    ctx->pc = 0x20ed64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20ed68: 0x2447f478
    ctx->pc = 0x20ed68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20ed6c: 0x3c013f80
    ctx->pc = 0x20ed6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x20ed70: 0x44810800
    ctx->pc = 0x20ed70u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x20ed74: 0x24820006
    ctx->pc = 0x20ed74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 6));
label_20ed78:
    // 0x20ed78: 0x21080
    ctx->pc = 0x20ed78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ed7c: 0x471021
    ctx->pc = 0x20ed7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20ed80: 0x8c420000
    ctx->pc = 0x20ed80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ed84: 0xc21024
    ctx->pc = 0x20ed84u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20ed88: 0x10400008
    ctx->pc = 0x20ED88u;
    {
        const bool branch_taken_0x20ed88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20ED8Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x20ed88) {
            ctx->pc = 0x20EDACu;
            goto label_20edac;
        }
    }
    ctx->pc = 0x20ED90u;
    // 0x20ed90: 0x561021
    ctx->pc = 0x20ed90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x20ed94: 0x51880
    ctx->pc = 0x20ed94u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20ed98: 0x701821
    ctx->pc = 0x20ed98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x20ed9c: 0xc4600000
    ctx->pc = 0x20ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20eda0: 0xe4400000
    ctx->pc = 0x20eda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20eda4: 0x10000003
    ctx->pc = 0x20EDA4u;
    {
        const bool branch_taken_0x20eda4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EDA8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x20eda4) {
            ctx->pc = 0x20EDB4u;
            goto label_20edb4;
        }
    }
    ctx->pc = 0x20EDACu;
label_20edac:
    // 0x20edac: 0x561021
    ctx->pc = 0x20edacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x20edb0: 0xe4410000
    ctx->pc = 0x20edb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20edb4:
    // 0x20edb4: 0x24840001
    ctx->pc = 0x20edb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20edb8: 0x28820003
    ctx->pc = 0x20edb8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x20edbc: 0x1440ffee
    ctx->pc = 0x20EDBCu;
    {
        const bool branch_taken_0x20edbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20EDC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 6));
        if (branch_taken_0x20edbc) {
            ctx->pc = 0x20ED78u;
            goto label_20ed78;
        }
    }
    ctx->pc = 0x20EDC4u;
    // 0x20edc4: 0x8fa8001c
    ctx->pc = 0x20edc4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x20edc8: 0x7ac20000
    ctx->pc = 0x20edc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x20edcc: 0x7d020000
    ctx->pc = 0x20edccu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x20edd0: 0x8faa0020
    ctx->pc = 0x20edd0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20edd4: 0x7ac20000
    ctx->pc = 0x20edd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x20edd8: 0x7d420000
    ctx->pc = 0x20edd8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x20eddc: 0x8fa20004
    ctx->pc = 0x20eddcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20ede0: 0xa4400008
    ctx->pc = 0x20ede0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ede4: 0xa440000a
    ctx->pc = 0x20ede4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ede8: 0x8fa30008
    ctx->pc = 0x20ede8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20edec: 0x30622000
    ctx->pc = 0x20edecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8192));
    // 0x20edf0: 0x10400004
    ctx->pc = 0x20EDF0u;
    {
        const bool branch_taken_0x20edf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EDF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x20edf0) {
            ctx->pc = 0x20EE04u;
            goto label_20ee04;
        }
    }
    ctx->pc = 0x20EDF8u;
    // 0x20edf8: 0x8fa40004
    ctx->pc = 0x20edf8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20edfc: 0x1000ff83
    ctx->pc = 0x20EDFCu;
    {
        const bool branch_taken_0x20edfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EE00u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x20edfc) {
            ctx->pc = 0x20EC0Cu;
            goto label_20ec0c;
        }
    }
    ctx->pc = 0x20EE04u;
label_20ee04:
    // 0x20ee04: 0x8fa60004
    ctx->pc = 0x20ee04u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20ee08: 0x1000ff80
    ctx->pc = 0x20EE08u;
    {
        const bool branch_taken_0x20ee08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EE0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x20ee08) {
            ctx->pc = 0x20EC0Cu;
            goto label_20ec0c;
        }
    }
    ctx->pc = 0x20EE10u;
label_20ee10:
    // 0x20ee10: 0x2502001f
    ctx->pc = 0x20ee10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 31));
    // 0x20ee14: 0x21143
    ctx->pc = 0x20ee14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20ee18: 0x21080
    ctx->pc = 0x20ee18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ee1c: 0x6410069
    ctx->pc = 0x20EE1Cu;
    {
        const bool branch_taken_0x20ee1c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x20EE20u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x20ee1c) {
            ctx->pc = 0x20EFC4u;
            goto label_20efc4;
        }
    }
    ctx->pc = 0x20EE24u;
    // 0x20ee24: 0x8faa0008
    ctx->pc = 0x20ee24u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20ee28: 0xa1400
    ctx->pc = 0x20ee28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 16));
    // 0x20ee2c: 0x23403
    ctx->pc = 0x20ee2cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20ee30: 0x282d
    ctx->pc = 0x20ee30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee34: 0x202d
    ctx->pc = 0x20ee34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee38: 0x3c020032
    ctx->pc = 0x20ee38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20ee3c: 0x2447f478
    ctx->pc = 0x20ee3cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20ee40: 0x41880
    ctx->pc = 0x20ee40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20ee44: 0x0
    ctx->pc = 0x20ee44u;
    // NOP
label_20ee48:
    // 0x20ee48: 0x671021
    ctx->pc = 0x20ee48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20ee4c: 0x8c420000
    ctx->pc = 0x20ee4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ee50: 0xc21024
    ctx->pc = 0x20ee50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20ee54: 0x10400007
    ctx->pc = 0x20EE54u;
    {
        const bool branch_taken_0x20ee54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EE58u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        if (branch_taken_0x20ee54) {
            ctx->pc = 0x20EE74u;
            goto label_20ee74;
        }
    }
    ctx->pc = 0x20EE5Cu;
    // 0x20ee5c: 0x51880
    ctx->pc = 0x20ee5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20ee60: 0x701821
    ctx->pc = 0x20ee60u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x20ee64: 0xc4600000
    ctx->pc = 0x20ee64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ee68: 0xe4400000
    ctx->pc = 0x20ee68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20ee6c: 0x10000004
    ctx->pc = 0x20EE6Cu;
    {
        const bool branch_taken_0x20ee6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EE70u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x20ee6c) {
            ctx->pc = 0x20EE80u;
            goto label_20ee80;
        }
    }
    ctx->pc = 0x20EE74u;
label_20ee74:
    // 0x20ee74: 0x41080
    ctx->pc = 0x20ee74u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20ee78: 0x531021
    ctx->pc = 0x20ee78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x20ee7c: 0xac400000
    ctx->pc = 0x20ee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20ee80:
    // 0x20ee80: 0x24840001
    ctx->pc = 0x20ee80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20ee84: 0x28820003
    ctx->pc = 0x20ee84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x20ee88: 0x1440ffef
    ctx->pc = 0x20EE88u;
    {
        const bool branch_taken_0x20ee88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20EE8Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x20ee88) {
            ctx->pc = 0x20EE48u;
            goto label_20ee48;
        }
    }
    ctx->pc = 0x20EE90u;
    // 0x20ee90: 0xa0182d
    ctx->pc = 0x20ee90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee94: 0x7a620000
    ctx->pc = 0x20ee94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20ee98: 0x7fc20000
    ctx->pc = 0x20ee98u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
    // 0x20ee9c: 0x8fa40008
    ctx->pc = 0x20ee9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20eea0: 0x41400
    ctx->pc = 0x20eea0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 16));
    // 0x20eea4: 0x23403
    ctx->pc = 0x20eea4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20eea8: 0x60202d
    ctx->pc = 0x20eea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eeac: 0x282d
    ctx->pc = 0x20eeacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eeb0: 0x3c020032
    ctx->pc = 0x20eeb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20eeb4: 0x2447f478
    ctx->pc = 0x20eeb4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20eeb8: 0x24a20003
    ctx->pc = 0x20eeb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 3));
    // 0x20eebc: 0x0
    ctx->pc = 0x20eebcu;
    // NOP
label_20eec0:
    // 0x20eec0: 0x21080
    ctx->pc = 0x20eec0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20eec4: 0x471021
    ctx->pc = 0x20eec4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20eec8: 0x8c420000
    ctx->pc = 0x20eec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20eecc: 0xc21024
    ctx->pc = 0x20eeccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20eed0: 0x10400008
    ctx->pc = 0x20EED0u;
    {
        const bool branch_taken_0x20eed0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EED4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x20eed0) {
            ctx->pc = 0x20EEF4u;
            goto label_20eef4;
        }
    }
    ctx->pc = 0x20EED8u;
    // 0x20eed8: 0x551021
    ctx->pc = 0x20eed8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x20eedc: 0x41880
    ctx->pc = 0x20eedcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20eee0: 0x701821
    ctx->pc = 0x20eee0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x20eee4: 0xc4600000
    ctx->pc = 0x20eee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20eee8: 0xe4400000
    ctx->pc = 0x20eee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20eeec: 0x10000003
    ctx->pc = 0x20EEECu;
    {
        const bool branch_taken_0x20eeec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EEF0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x20eeec) {
            ctx->pc = 0x20EEFCu;
            goto label_20eefc;
        }
    }
    ctx->pc = 0x20EEF4u;
label_20eef4:
    // 0x20eef4: 0x551021
    ctx->pc = 0x20eef4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x20eef8: 0xac400000
    ctx->pc = 0x20eef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20eefc:
    // 0x20eefc: 0x24a50001
    ctx->pc = 0x20eefcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20ef00: 0x28a20003
    ctx->pc = 0x20ef00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x20ef04: 0x1440ffee
    ctx->pc = 0x20EF04u;
    {
        const bool branch_taken_0x20ef04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20EF08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 3));
        if (branch_taken_0x20ef04) {
            ctx->pc = 0x20EEC0u;
            goto label_20eec0;
        }
    }
    ctx->pc = 0x20EF0Cu;
    // 0x20ef0c: 0x80182d
    ctx->pc = 0x20ef0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ef10: 0x8fa60018
    ctx->pc = 0x20ef10u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20ef14: 0x7aa20000
    ctx->pc = 0x20ef14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x20ef18: 0x7cc20000
    ctx->pc = 0x20ef18u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x20ef1c: 0x8fa80008
    ctx->pc = 0x20ef1cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20ef20: 0x81400
    ctx->pc = 0x20ef20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 16));
    // 0x20ef24: 0x23403
    ctx->pc = 0x20ef24u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20ef28: 0x60282d
    ctx->pc = 0x20ef28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ef2c: 0x202d
    ctx->pc = 0x20ef2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ef30: 0x3c020032
    ctx->pc = 0x20ef30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20ef34: 0x2447f478
    ctx->pc = 0x20ef34u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20ef38: 0x3c013f80
    ctx->pc = 0x20ef38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x20ef3c: 0x44810800
    ctx->pc = 0x20ef3cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x20ef40: 0x24820006
    ctx->pc = 0x20ef40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 6));
    // 0x20ef44: 0x0
    ctx->pc = 0x20ef44u;
    // NOP
label_20ef48:
    // 0x20ef48: 0x21080
    ctx->pc = 0x20ef48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ef4c: 0x471021
    ctx->pc = 0x20ef4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20ef50: 0x8c420000
    ctx->pc = 0x20ef50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ef54: 0xc21024
    ctx->pc = 0x20ef54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20ef58: 0x10400008
    ctx->pc = 0x20EF58u;
    {
        const bool branch_taken_0x20ef58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EF5Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x20ef58) {
            ctx->pc = 0x20EF7Cu;
            goto label_20ef7c;
        }
    }
    ctx->pc = 0x20EF60u;
    // 0x20ef60: 0x561021
    ctx->pc = 0x20ef60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x20ef64: 0x51880
    ctx->pc = 0x20ef64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20ef68: 0x701821
    ctx->pc = 0x20ef68u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x20ef6c: 0xc4600000
    ctx->pc = 0x20ef6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ef70: 0xe4400000
    ctx->pc = 0x20ef70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20ef74: 0x10000003
    ctx->pc = 0x20EF74u;
    {
        const bool branch_taken_0x20ef74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EF78u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x20ef74) {
            ctx->pc = 0x20EF84u;
            goto label_20ef84;
        }
    }
    ctx->pc = 0x20EF7Cu;
label_20ef7c:
    // 0x20ef7c: 0x561021
    ctx->pc = 0x20ef7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x20ef80: 0xe4410000
    ctx->pc = 0x20ef80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20ef84:
    // 0x20ef84: 0x24840001
    ctx->pc = 0x20ef84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20ef88: 0x28820003
    ctx->pc = 0x20ef88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x20ef8c: 0x1440ffee
    ctx->pc = 0x20EF8Cu;
    {
        const bool branch_taken_0x20ef8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20EF90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 6));
        if (branch_taken_0x20ef8c) {
            ctx->pc = 0x20EF48u;
            goto label_20ef48;
        }
    }
    ctx->pc = 0x20EF94u;
    // 0x20ef94: 0x8faa0020
    ctx->pc = 0x20ef94u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ef98: 0x7ac20000
    ctx->pc = 0x20ef98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x20ef9c: 0x7d420000
    ctx->pc = 0x20ef9cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x20efa0: 0x902d
    ctx->pc = 0x20efa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20efa4: 0x8fa30008
    ctx->pc = 0x20efa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20efa8: 0x30622000
    ctx->pc = 0x20efa8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8192));
    // 0x20efac: 0x10400004
    ctx->pc = 0x20EFACu;
    {
        const bool branch_taken_0x20efac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EFB0u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20efac) {
            ctx->pc = 0x20EFC0u;
            goto label_20efc0;
        }
    }
    ctx->pc = 0x20EFB4u;
    // 0x20efb4: 0x2402ffff
    ctx->pc = 0x20efb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20efb8: 0x10000002
    ctx->pc = 0x20EFB8u;
    {
        const bool branch_taken_0x20efb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EFBCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x20efb8) {
            ctx->pc = 0x20EFC4u;
            goto label_20efc4;
        }
    }
    ctx->pc = 0x20EFC0u;
label_20efc0:
    // 0x20efc0: 0xafa00000
    ctx->pc = 0x20efc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_20efc4:
    // 0x20efc4: 0x8fa40008
    ctx->pc = 0x20efc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20efc8: 0x30822000
    ctx->pc = 0x20efc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 8192));
    // 0x20efcc: 0x10400002
    ctx->pc = 0x20EFCCu;
    {
        const bool branch_taken_0x20efcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EFD0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 2));
        if (branch_taken_0x20efcc) {
            ctx->pc = 0x20EFD8u;
            goto label_20efd8;
        }
    }
    ctx->pc = 0x20EFD4u;
    // 0x20efd4: 0x2028021
    ctx->pc = 0x20efd4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_20efd8:
    // 0x20efd8: 0x44940000
    ctx->pc = 0x20efd8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 20);
    // 0x20efdc: 0x46800020
    ctx->pc = 0x20efdcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20efe0: 0x46140034
    ctx->pc = 0x20efe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20efe4: 0x0
    ctx->pc = 0x20efe4u;
    // NOP
    // 0x20efe8: 0x450000da
    ctx->pc = 0x20EFE8u;
    {
        const bool branch_taken_0x20efe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20EFECu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x20efe8) {
            ctx->pc = 0x20F354u;
            goto label_20f354;
        }
    }
    ctx->pc = 0x20EFF0u;
    // 0x20eff0: 0x68c00
    ctx->pc = 0x20eff0u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 6), 16));
    // 0x20eff4: 0x254102a
    ctx->pc = 0x20eff4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 20)));
label_20eff8:
    // 0x20eff8: 0x1040000b
    ctx->pc = 0x20EFF8u;
    {
        const bool branch_taken_0x20eff8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EFFCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x20eff8) {
            ctx->pc = 0x20F028u;
            goto label_20f028;
        }
    }
    ctx->pc = 0x20F000u;
    // 0x20f000: 0x280902d
    ctx->pc = 0x20f000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f004: 0x7bc20000
    ctx->pc = 0x20f004u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20f008: 0x7e620000
    ctx->pc = 0x20f008u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x20f00c: 0x8fa80018
    ctx->pc = 0x20f00cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f010: 0x79020000
    ctx->pc = 0x20f010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20f014: 0x7ea20000
    ctx->pc = 0x20f014u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x20f018: 0x8faa0020
    ctx->pc = 0x20f018u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f01c: 0x79420000
    ctx->pc = 0x20f01cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x20f020: 0x7ec20000
    ctx->pc = 0x20f020u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    // 0x20f024: 0x8fa40024
    ctx->pc = 0x20f024u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_20f028:
    // 0x20f028: 0x280282d
    ctx->pc = 0x20f028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f02c: 0xc083a46
    ctx->pc = 0x20F02Cu;
    SET_GPR_U32(ctx, 31, 0x20F034u);
    ctx->pc = 0x20F030u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->pc = 0x20E918u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextKey_0x20e918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F034u; }
    }
    if (ctx->pc != 0x20F034u) { return; }
    ctx->pc = 0x20F034u;
    // 0x20f034: 0x44000bf
    ctx->pc = 0x20F034u;
    {
        const bool branch_taken_0x20f034 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20f034) {
            ctx->pc = 0x20F334u;
            goto label_20f334;
        }
    }
    ctx->pc = 0x20F03Cu;
    // 0x20f03c: 0x40a02d
    ctx->pc = 0x20f03cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f040: 0x8fa20000
    ctx->pc = 0x20f040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f044: 0x24420001
    ctx->pc = 0x20f044u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20f048: 0xafa20000
    ctx->pc = 0x20f048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x20f04c: 0x8fa30008
    ctx->pc = 0x20f04cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20f050: 0x30622000
    ctx->pc = 0x20f050u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8192));
    // 0x20f054: 0x1040005b
    ctx->pc = 0x20F054u;
    {
        const bool branch_taken_0x20f054 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F058u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x20f054) {
            ctx->pc = 0x20F1C4u;
            goto label_20f1c4;
        }
    }
    ctx->pc = 0x20F05Cu;
    // 0x20f05c: 0x571818
    ctx->pc = 0x20f05cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20f060: 0x703021
    ctx->pc = 0x20f060u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x20f064: 0x114403
    ctx->pc = 0x20f064u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 17), 16));
    // 0x20f068: 0x282d
    ctx->pc = 0x20f068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f06c: 0x202d
    ctx->pc = 0x20f06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f070: 0x3c020032
    ctx->pc = 0x20f070u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f074: 0x2449f478
    ctx->pc = 0x20f074u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20f078: 0x3c020032
    ctx->pc = 0x20f078u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f07c: 0x8c47f49c
    ctx->pc = 0x20f07cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294964380)));
    // 0x20f080: 0x41880
    ctx->pc = 0x20f080u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20f084: 0x0
    ctx->pc = 0x20f084u;
    // NOP
label_20f088:
    // 0x20f088: 0x691021
    ctx->pc = 0x20f088u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x20f08c: 0x8c420000
    ctx->pc = 0x20f08cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f090: 0x1021024
    ctx->pc = 0x20f090u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x20f094: 0x1040000a
    ctx->pc = 0x20F094u;
    {
        const bool branch_taken_0x20f094 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F098u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        if (branch_taken_0x20f094) {
            ctx->pc = 0x20F0C0u;
            goto label_20f0c0;
        }
    }
    ctx->pc = 0x20F09Cu;
    // 0x20f09c: 0x90420000
    ctx->pc = 0x20f09cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f0a0: 0x7e1821
    ctx->pc = 0x20f0a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x20f0a4: 0x21080
    ctx->pc = 0x20f0a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f0a8: 0x471021
    ctx->pc = 0x20f0a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20f0ac: 0xc4600000
    ctx->pc = 0x20f0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f0b0: 0xc4410000
    ctx->pc = 0x20f0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f0b4: 0x46010000
    ctx->pc = 0x20f0b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20f0b8: 0xe4600000
    ctx->pc = 0x20f0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x20f0bc: 0x24a50001
    ctx->pc = 0x20f0bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_20f0c0:
    // 0x20f0c0: 0x24840001
    ctx->pc = 0x20f0c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20f0c4: 0x28820003
    ctx->pc = 0x20f0c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x20f0c8: 0x1440ffef
    ctx->pc = 0x20F0C8u;
    {
        const bool branch_taken_0x20f0c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F0CCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x20f0c8) {
            ctx->pc = 0x20F088u;
            goto label_20f088;
        }
    }
    ctx->pc = 0x20F0D0u;
    // 0x20f0d0: 0x114403
    ctx->pc = 0x20f0d0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 17), 16));
    // 0x20f0d4: 0xa0202d
    ctx->pc = 0x20f0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f0d8: 0x282d
    ctx->pc = 0x20f0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f0dc: 0x3c020032
    ctx->pc = 0x20f0dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f0e0: 0x2449f478
    ctx->pc = 0x20f0e0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20f0e4: 0x3c020032
    ctx->pc = 0x20f0e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f0e8: 0x8c47f4a0
    ctx->pc = 0x20f0e8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294964384)));
    // 0x20f0ec: 0x24a20003
    ctx->pc = 0x20f0ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 3));
label_20f0f0:
    // 0x20f0f0: 0x21080
    ctx->pc = 0x20f0f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f0f4: 0x491021
    ctx->pc = 0x20f0f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x20f0f8: 0x8c420000
    ctx->pc = 0x20f0f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f0fc: 0x1021024
    ctx->pc = 0x20f0fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x20f100: 0x1040000c
    ctx->pc = 0x20F100u;
    {
        const bool branch_taken_0x20f100 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F104u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        if (branch_taken_0x20f100) {
            ctx->pc = 0x20F134u;
            goto label_20f134;
        }
    }
    ctx->pc = 0x20F108u;
    // 0x20f108: 0x90420000
    ctx->pc = 0x20f108u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f10c: 0x51880
    ctx->pc = 0x20f10cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20f110: 0x8faa0018
    ctx->pc = 0x20f110u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f114: 0x6a1821
    ctx->pc = 0x20f114u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x20f118: 0x21080
    ctx->pc = 0x20f118u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f11c: 0x471021
    ctx->pc = 0x20f11cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20f120: 0xc4600000
    ctx->pc = 0x20f120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f124: 0xc4410000
    ctx->pc = 0x20f124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f128: 0x46010000
    ctx->pc = 0x20f128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20f12c: 0xe4600000
    ctx->pc = 0x20f12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x20f130: 0x24840001
    ctx->pc = 0x20f130u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_20f134:
    // 0x20f134: 0x24a50001
    ctx->pc = 0x20f134u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20f138: 0x28a20003
    ctx->pc = 0x20f138u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x20f13c: 0x1440ffec
    ctx->pc = 0x20F13Cu;
    {
        const bool branch_taken_0x20f13c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F140u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 3));
        if (branch_taken_0x20f13c) {
            ctx->pc = 0x20F0F0u;
            goto label_20f0f0;
        }
    }
    ctx->pc = 0x20F144u;
    // 0x20f144: 0x114403
    ctx->pc = 0x20f144u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 17), 16));
    // 0x20f148: 0x80282d
    ctx->pc = 0x20f148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f14c: 0x202d
    ctx->pc = 0x20f14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f150: 0x3c020032
    ctx->pc = 0x20f150u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f154: 0x2449f478
    ctx->pc = 0x20f154u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20f158: 0x3c020032
    ctx->pc = 0x20f158u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f15c: 0x8c47f4a4
    ctx->pc = 0x20f15cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294964388)));
    // 0x20f160: 0x24820006
    ctx->pc = 0x20f160u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 6));
    // 0x20f164: 0x0
    ctx->pc = 0x20f164u;
    // NOP
label_20f168:
    // 0x20f168: 0x21080
    ctx->pc = 0x20f168u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f16c: 0x491021
    ctx->pc = 0x20f16cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x20f170: 0x8c420000
    ctx->pc = 0x20f170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f174: 0x1021024
    ctx->pc = 0x20f174u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x20f178: 0x1040000c
    ctx->pc = 0x20F178u;
    {
        const bool branch_taken_0x20f178 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F17Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        if (branch_taken_0x20f178) {
            ctx->pc = 0x20F1ACu;
            goto label_20f1ac;
        }
    }
    ctx->pc = 0x20F180u;
    // 0x20f180: 0x90420000
    ctx->pc = 0x20f180u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f184: 0x41880
    ctx->pc = 0x20f184u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20f188: 0x8faa0020
    ctx->pc = 0x20f188u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f18c: 0x6a1821
    ctx->pc = 0x20f18cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x20f190: 0x21080
    ctx->pc = 0x20f190u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f194: 0x471021
    ctx->pc = 0x20f194u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20f198: 0xc4600000
    ctx->pc = 0x20f198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f19c: 0xc4410000
    ctx->pc = 0x20f19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f1a0: 0x46010000
    ctx->pc = 0x20f1a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20f1a4: 0xe4600000
    ctx->pc = 0x20f1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x20f1a8: 0x24a50001
    ctx->pc = 0x20f1a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_20f1ac:
    // 0x20f1ac: 0x24840001
    ctx->pc = 0x20f1acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20f1b0: 0x28820003
    ctx->pc = 0x20f1b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x20f1b4: 0x1440ffec
    ctx->pc = 0x20F1B4u;
    {
        const bool branch_taken_0x20f1b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F1B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 6));
        if (branch_taken_0x20f1b4) {
            ctx->pc = 0x20F168u;
            goto label_20f168;
        }
    }
    ctx->pc = 0x20F1BCu;
    // 0x20f1bc: 0x1000005f
    ctx->pc = 0x20F1BCu;
    {
        const bool branch_taken_0x20f1bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20f1bc) {
            ctx->pc = 0x20F33Cu;
            goto label_20f33c;
        }
    }
    ctx->pc = 0x20F1C4u;
label_20f1c4:
    // 0x20f1c4: 0x571018
    ctx->pc = 0x20f1c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20f1c8: 0x21080
    ctx->pc = 0x20f1c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f1cc: 0x503821
    ctx->pc = 0x20f1ccu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f1d0: 0x113403
    ctx->pc = 0x20f1d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 16));
    // 0x20f1d4: 0x282d
    ctx->pc = 0x20f1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1d8: 0x202d
    ctx->pc = 0x20f1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1dc: 0x3c020032
    ctx->pc = 0x20f1dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f1e0: 0x2448f478
    ctx->pc = 0x20f1e0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20f1e4: 0x41880
    ctx->pc = 0x20f1e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_20f1e8:
    // 0x20f1e8: 0x681021
    ctx->pc = 0x20f1e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x20f1ec: 0x8c420000
    ctx->pc = 0x20f1ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f1f0: 0xc21024
    ctx->pc = 0x20f1f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20f1f4: 0x10400007
    ctx->pc = 0x20F1F4u;
    {
        const bool branch_taken_0x20f1f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F1F8u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        if (branch_taken_0x20f1f4) {
            ctx->pc = 0x20F214u;
            goto label_20f214;
        }
    }
    ctx->pc = 0x20F1FCu;
    // 0x20f1fc: 0x51880
    ctx->pc = 0x20f1fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20f200: 0x671821
    ctx->pc = 0x20f200u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20f204: 0xc4600000
    ctx->pc = 0x20f204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f208: 0xe4400000
    ctx->pc = 0x20f208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20f20c: 0x10000004
    ctx->pc = 0x20F20Cu;
    {
        const bool branch_taken_0x20f20c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F210u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x20f20c) {
            ctx->pc = 0x20F220u;
            goto label_20f220;
        }
    }
    ctx->pc = 0x20F214u;
label_20f214:
    // 0x20f214: 0x41080
    ctx->pc = 0x20f214u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20f218: 0x5e1021
    ctx->pc = 0x20f218u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x20f21c: 0xac400000
    ctx->pc = 0x20f21cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20f220:
    // 0x20f220: 0x24840001
    ctx->pc = 0x20f220u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20f224: 0x28820003
    ctx->pc = 0x20f224u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x20f228: 0x1440ffef
    ctx->pc = 0x20F228u;
    {
        const bool branch_taken_0x20f228 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F22Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x20f228) {
            ctx->pc = 0x20F1E8u;
            goto label_20f1e8;
        }
    }
    ctx->pc = 0x20F230u;
    // 0x20f230: 0x8fa20000
    ctx->pc = 0x20f230u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f234: 0x571018
    ctx->pc = 0x20f234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20f238: 0x21080
    ctx->pc = 0x20f238u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f23c: 0x503821
    ctx->pc = 0x20f23cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f240: 0x113403
    ctx->pc = 0x20f240u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 16));
    // 0x20f244: 0x202d
    ctx->pc = 0x20f244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f248: 0x3c020032
    ctx->pc = 0x20f248u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f24c: 0x2448f478
    ctx->pc = 0x20f24cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20f250: 0x24820003
    ctx->pc = 0x20f250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 3));
    // 0x20f254: 0x0
    ctx->pc = 0x20f254u;
    // NOP
label_20f258:
    // 0x20f258: 0x21080
    ctx->pc = 0x20f258u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f25c: 0x481021
    ctx->pc = 0x20f25cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20f260: 0x8c420000
    ctx->pc = 0x20f260u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f264: 0xc21024
    ctx->pc = 0x20f264u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20f268: 0x10400009
    ctx->pc = 0x20F268u;
    {
        const bool branch_taken_0x20f268 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F26Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x20f268) {
            ctx->pc = 0x20F290u;
            goto label_20f290;
        }
    }
    ctx->pc = 0x20F270u;
    // 0x20f270: 0x8fa30018
    ctx->pc = 0x20f270u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f274: 0x431021
    ctx->pc = 0x20f274u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20f278: 0x51880
    ctx->pc = 0x20f278u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20f27c: 0x671821
    ctx->pc = 0x20f27cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20f280: 0xc4600000
    ctx->pc = 0x20f280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f284: 0xe4400000
    ctx->pc = 0x20f284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20f288: 0x10000004
    ctx->pc = 0x20F288u;
    {
        const bool branch_taken_0x20f288 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F28Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x20f288) {
            ctx->pc = 0x20F29Cu;
            goto label_20f29c;
        }
    }
    ctx->pc = 0x20F290u;
label_20f290:
    // 0x20f290: 0x8faa0018
    ctx->pc = 0x20f290u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f294: 0x4a1021
    ctx->pc = 0x20f294u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x20f298: 0xac400000
    ctx->pc = 0x20f298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20f29c:
    // 0x20f29c: 0x24840001
    ctx->pc = 0x20f29cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20f2a0: 0x28820003
    ctx->pc = 0x20f2a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x20f2a4: 0x1440ffec
    ctx->pc = 0x20F2A4u;
    {
        const bool branch_taken_0x20f2a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F2A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x20f2a4) {
            ctx->pc = 0x20F258u;
            goto label_20f258;
        }
    }
    ctx->pc = 0x20F2ACu;
    // 0x20f2ac: 0x8fa20000
    ctx->pc = 0x20f2acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f2b0: 0x571018
    ctx->pc = 0x20f2b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20f2b4: 0x21080
    ctx->pc = 0x20f2b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f2b8: 0x503821
    ctx->pc = 0x20f2b8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f2bc: 0x113403
    ctx->pc = 0x20f2bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 16));
    // 0x20f2c0: 0x202d
    ctx->pc = 0x20f2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f2c4: 0x3c020032
    ctx->pc = 0x20f2c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f2c8: 0x2448f478
    ctx->pc = 0x20f2c8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20f2cc: 0x3c013f80
    ctx->pc = 0x20f2ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x20f2d0: 0x44810800
    ctx->pc = 0x20f2d0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x20f2d4: 0x24820006
    ctx->pc = 0x20f2d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 6));
label_20f2d8:
    // 0x20f2d8: 0x21080
    ctx->pc = 0x20f2d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f2dc: 0x481021
    ctx->pc = 0x20f2dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20f2e0: 0x8c420000
    ctx->pc = 0x20f2e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f2e4: 0xc21024
    ctx->pc = 0x20f2e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20f2e8: 0x10400009
    ctx->pc = 0x20F2E8u;
    {
        const bool branch_taken_0x20f2e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F2ECu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x20f2e8) {
            ctx->pc = 0x20F310u;
            goto label_20f310;
        }
    }
    ctx->pc = 0x20F2F0u;
    // 0x20f2f0: 0x8fa30020
    ctx->pc = 0x20f2f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f2f4: 0x431021
    ctx->pc = 0x20f2f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20f2f8: 0x51880
    ctx->pc = 0x20f2f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20f2fc: 0x671821
    ctx->pc = 0x20f2fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20f300: 0xc4600000
    ctx->pc = 0x20f300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f304: 0xe4400000
    ctx->pc = 0x20f304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20f308: 0x10000004
    ctx->pc = 0x20F308u;
    {
        const bool branch_taken_0x20f308 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F30Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x20f308) {
            ctx->pc = 0x20F31Cu;
            goto label_20f31c;
        }
    }
    ctx->pc = 0x20F310u;
label_20f310:
    // 0x20f310: 0x8faa0020
    ctx->pc = 0x20f310u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f314: 0x4a1021
    ctx->pc = 0x20f314u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x20f318: 0xe4410000
    ctx->pc = 0x20f318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20f31c:
    // 0x20f31c: 0x24840001
    ctx->pc = 0x20f31cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20f320: 0x28820003
    ctx->pc = 0x20f320u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x20f324: 0x1440ffec
    ctx->pc = 0x20F324u;
    {
        const bool branch_taken_0x20f324 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F328u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 6));
        if (branch_taken_0x20f324) {
            ctx->pc = 0x20F2D8u;
            goto label_20f2d8;
        }
    }
    ctx->pc = 0x20F32Cu;
    // 0x20f32c: 0x10000003
    ctx->pc = 0x20F32Cu;
    {
        const bool branch_taken_0x20f32c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20f32c) {
            ctx->pc = 0x20F33Cu;
            goto label_20f33c;
        }
    }
    ctx->pc = 0x20F334u;
label_20f334:
    // 0x20f334: 0x4494a000
    ctx->pc = 0x20f334u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 20);
    // 0x20f338: 0x4680a520
    ctx->pc = 0x20f338u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
label_20f33c:
    // 0x20f33c: 0x44940000
    ctx->pc = 0x20f33cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 20);
    // 0x20f340: 0x46800020
    ctx->pc = 0x20f340u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20f344: 0x46140034
    ctx->pc = 0x20f344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f348: 0x0
    ctx->pc = 0x20f348u;
    // NOP
    // 0x20f34c: 0x4501ff2a
    ctx->pc = 0x20F34Cu;
    {
        const bool branch_taken_0x20f34c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F350u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 20)));
        if (branch_taken_0x20f34c) {
            ctx->pc = 0x20EFF8u;
            goto label_20eff8;
        }
    }
    ctx->pc = 0x20F354u;
label_20f354:
    // 0x20f354: 0x44920000
    ctx->pc = 0x20f354u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 18);
    // 0x20f358: 0x46800020
    ctx->pc = 0x20f358u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20f35c: 0x4600a034
    ctx->pc = 0x20f35cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f360: 0x0
    ctx->pc = 0x20f360u;
    // NOP
    // 0x20f364: 0x450000d1
    ctx->pc = 0x20F364u;
    {
        const bool branch_taken_0x20f364 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F368u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x20f364) {
            ctx->pc = 0x20F6ACu;
            goto label_20f6ac;
        }
    }
    ctx->pc = 0x20F36Cu;
    // 0x20f36c: 0x28c00
    ctx->pc = 0x20f36cu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 16));
    // 0x20f370: 0x254102a
    ctx->pc = 0x20f370u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 20)));
    // 0x20f374: 0x0
    ctx->pc = 0x20f374u;
    // NOP
label_20f378:
    // 0x20f378: 0x1040000b
    ctx->pc = 0x20F378u;
    {
        const bool branch_taken_0x20f378 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F37Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x20f378) {
            ctx->pc = 0x20F3A8u;
            goto label_20f3a8;
        }
    }
    ctx->pc = 0x20F380u;
    // 0x20f380: 0x240a02d
    ctx->pc = 0x20f380u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f384: 0x7a620000
    ctx->pc = 0x20f384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20f388: 0x7fc20000
    ctx->pc = 0x20f388u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
    // 0x20f38c: 0x8fa30018
    ctx->pc = 0x20f38cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f390: 0x7aa20000
    ctx->pc = 0x20f390u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x20f394: 0x7c620000
    ctx->pc = 0x20f394u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20f398: 0x8fa40020
    ctx->pc = 0x20f398u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f39c: 0x7ac20000
    ctx->pc = 0x20f39cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x20f3a0: 0x7c820000
    ctx->pc = 0x20f3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x20f3a4: 0x8fa40024
    ctx->pc = 0x20f3a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_20f3a8:
    // 0x20f3a8: 0x240282d
    ctx->pc = 0x20f3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f3ac: 0xc083a66
    ctx->pc = 0x20F3ACu;
    SET_GPR_U32(ctx, 31, 0x20F3B4u);
    ctx->pc = 0x20F3B0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20E998u;
    {
        const uint32_t __entryPc = ctx->pc;
        PrevKey_0x20e998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F3B4u; }
    }
    if (ctx->pc != 0x20F3B4u) { return; }
    ctx->pc = 0x20F3B4u;
    // 0x20f3b4: 0x44000b5
    ctx->pc = 0x20F3B4u;
    {
        const bool branch_taken_0x20f3b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20F3B8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x20f3b4) {
            ctx->pc = 0x20F68Cu;
            goto label_20f68c;
        }
    }
    ctx->pc = 0x20F3BCu;
    // 0x20f3bc: 0x40902d
    ctx->pc = 0x20f3bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f3c0: 0x30c22000
    ctx->pc = 0x20f3c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 8192));
    // 0x20f3c4: 0x10400058
    ctx->pc = 0x20F3C4u;
    {
        const bool branch_taken_0x20f3c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F3C8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x20f3c4) {
            ctx->pc = 0x20F528u;
            goto label_20f528;
        }
    }
    ctx->pc = 0x20F3CCu;
    // 0x20f3cc: 0x2e21818
    ctx->pc = 0x20f3ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20f3d0: 0x703021
    ctx->pc = 0x20f3d0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x20f3d4: 0x114403
    ctx->pc = 0x20f3d4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 17), 16));
    // 0x20f3d8: 0x282d
    ctx->pc = 0x20f3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f3dc: 0x202d
    ctx->pc = 0x20f3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f3e0: 0x3c020032
    ctx->pc = 0x20f3e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f3e4: 0x2449f478
    ctx->pc = 0x20f3e4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20f3e8: 0x3c020032
    ctx->pc = 0x20f3e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f3ec: 0x8c47f49c
    ctx->pc = 0x20f3ecu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294964380)));
    // 0x20f3f0: 0x41880
    ctx->pc = 0x20f3f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20f3f4: 0x0
    ctx->pc = 0x20f3f4u;
    // NOP
label_20f3f8:
    // 0x20f3f8: 0x691021
    ctx->pc = 0x20f3f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x20f3fc: 0x8c420000
    ctx->pc = 0x20f3fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f400: 0x1021024
    ctx->pc = 0x20f400u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x20f404: 0x1040000a
    ctx->pc = 0x20F404u;
    {
        const bool branch_taken_0x20f404 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F408u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        if (branch_taken_0x20f404) {
            ctx->pc = 0x20F430u;
            goto label_20f430;
        }
    }
    ctx->pc = 0x20F40Cu;
    // 0x20f40c: 0x90420000
    ctx->pc = 0x20f40cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f410: 0x731821
    ctx->pc = 0x20f410u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x20f414: 0x21080
    ctx->pc = 0x20f414u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f418: 0x471021
    ctx->pc = 0x20f418u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20f41c: 0xc4600000
    ctx->pc = 0x20f41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f420: 0xc4410000
    ctx->pc = 0x20f420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f424: 0x46010000
    ctx->pc = 0x20f424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20f428: 0xe4600000
    ctx->pc = 0x20f428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x20f42c: 0x24a50001
    ctx->pc = 0x20f42cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_20f430:
    // 0x20f430: 0x24840001
    ctx->pc = 0x20f430u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20f434: 0x28820003
    ctx->pc = 0x20f434u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x20f438: 0x1440ffef
    ctx->pc = 0x20F438u;
    {
        const bool branch_taken_0x20f438 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F43Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x20f438) {
            ctx->pc = 0x20F3F8u;
            goto label_20f3f8;
        }
    }
    ctx->pc = 0x20F440u;
    // 0x20f440: 0x114403
    ctx->pc = 0x20f440u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 17), 16));
    // 0x20f444: 0xa0202d
    ctx->pc = 0x20f444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f448: 0x282d
    ctx->pc = 0x20f448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f44c: 0x3c020032
    ctx->pc = 0x20f44cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f450: 0x2449f478
    ctx->pc = 0x20f450u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20f454: 0x3c020032
    ctx->pc = 0x20f454u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f458: 0x8c47f4a0
    ctx->pc = 0x20f458u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294964384)));
    // 0x20f45c: 0x24a20003
    ctx->pc = 0x20f45cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 3));
label_20f460:
    // 0x20f460: 0x21080
    ctx->pc = 0x20f460u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f464: 0x491021
    ctx->pc = 0x20f464u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x20f468: 0x8c420000
    ctx->pc = 0x20f468u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f46c: 0x1021024
    ctx->pc = 0x20f46cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x20f470: 0x1040000b
    ctx->pc = 0x20F470u;
    {
        const bool branch_taken_0x20f470 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F474u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        if (branch_taken_0x20f470) {
            ctx->pc = 0x20F4A0u;
            goto label_20f4a0;
        }
    }
    ctx->pc = 0x20F478u;
    // 0x20f478: 0x90420000
    ctx->pc = 0x20f478u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f47c: 0x51880
    ctx->pc = 0x20f47cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20f480: 0x751821
    ctx->pc = 0x20f480u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x20f484: 0x21080
    ctx->pc = 0x20f484u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f488: 0x471021
    ctx->pc = 0x20f488u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20f48c: 0xc4600000
    ctx->pc = 0x20f48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f490: 0xc4410000
    ctx->pc = 0x20f490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f494: 0x46010000
    ctx->pc = 0x20f494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20f498: 0xe4600000
    ctx->pc = 0x20f498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x20f49c: 0x24840001
    ctx->pc = 0x20f49cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_20f4a0:
    // 0x20f4a0: 0x24a50001
    ctx->pc = 0x20f4a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20f4a4: 0x28a20003
    ctx->pc = 0x20f4a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x20f4a8: 0x1440ffed
    ctx->pc = 0x20F4A8u;
    {
        const bool branch_taken_0x20f4a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F4ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 3));
        if (branch_taken_0x20f4a8) {
            ctx->pc = 0x20F460u;
            goto label_20f460;
        }
    }
    ctx->pc = 0x20F4B0u;
    // 0x20f4b0: 0x114403
    ctx->pc = 0x20f4b0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 17), 16));
    // 0x20f4b4: 0x80282d
    ctx->pc = 0x20f4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f4b8: 0x202d
    ctx->pc = 0x20f4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f4bc: 0x3c020032
    ctx->pc = 0x20f4bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f4c0: 0x2449f478
    ctx->pc = 0x20f4c0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20f4c4: 0x3c020032
    ctx->pc = 0x20f4c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f4c8: 0x8c47f4a4
    ctx->pc = 0x20f4c8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294964388)));
    // 0x20f4cc: 0x24820006
    ctx->pc = 0x20f4ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 6));
label_20f4d0:
    // 0x20f4d0: 0x21080
    ctx->pc = 0x20f4d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f4d4: 0x491021
    ctx->pc = 0x20f4d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x20f4d8: 0x8c420000
    ctx->pc = 0x20f4d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f4dc: 0x1021024
    ctx->pc = 0x20f4dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x20f4e0: 0x1040000b
    ctx->pc = 0x20F4E0u;
    {
        const bool branch_taken_0x20f4e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F4E4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        if (branch_taken_0x20f4e0) {
            ctx->pc = 0x20F510u;
            goto label_20f510;
        }
    }
    ctx->pc = 0x20F4E8u;
    // 0x20f4e8: 0x90420000
    ctx->pc = 0x20f4e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f4ec: 0x41880
    ctx->pc = 0x20f4ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20f4f0: 0x761821
    ctx->pc = 0x20f4f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x20f4f4: 0x21080
    ctx->pc = 0x20f4f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f4f8: 0x471021
    ctx->pc = 0x20f4f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20f4fc: 0xc4600000
    ctx->pc = 0x20f4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f500: 0xc4410000
    ctx->pc = 0x20f500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f504: 0x46010000
    ctx->pc = 0x20f504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20f508: 0xe4600000
    ctx->pc = 0x20f508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x20f50c: 0x24a50001
    ctx->pc = 0x20f50cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_20f510:
    // 0x20f510: 0x24840001
    ctx->pc = 0x20f510u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20f514: 0x28820003
    ctx->pc = 0x20f514u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x20f518: 0x1440ffed
    ctx->pc = 0x20F518u;
    {
        const bool branch_taken_0x20f518 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F51Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 6));
        if (branch_taken_0x20f518) {
            ctx->pc = 0x20F4D0u;
            goto label_20f4d0;
        }
    }
    ctx->pc = 0x20F520u;
    // 0x20f520: 0x1000005c
    ctx->pc = 0x20F520u;
    {
        const bool branch_taken_0x20f520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20f520) {
            ctx->pc = 0x20F694u;
            goto label_20f694;
        }
    }
    ctx->pc = 0x20F528u;
label_20f528:
    // 0x20f528: 0x2e21018
    ctx->pc = 0x20f528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20f52c: 0x21080
    ctx->pc = 0x20f52cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f530: 0x503821
    ctx->pc = 0x20f530u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f534: 0x113403
    ctx->pc = 0x20f534u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 16));
    // 0x20f538: 0x282d
    ctx->pc = 0x20f538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f53c: 0x202d
    ctx->pc = 0x20f53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f540: 0x3c020032
    ctx->pc = 0x20f540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f544: 0x2448f478
    ctx->pc = 0x20f544u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20f548: 0x41880
    ctx->pc = 0x20f548u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20f54c: 0x0
    ctx->pc = 0x20f54cu;
    // NOP
label_20f550:
    // 0x20f550: 0x681021
    ctx->pc = 0x20f550u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x20f554: 0x8c420000
    ctx->pc = 0x20f554u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f558: 0xc21024
    ctx->pc = 0x20f558u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20f55c: 0x10400007
    ctx->pc = 0x20F55Cu;
    {
        const bool branch_taken_0x20f55c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F560u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        if (branch_taken_0x20f55c) {
            ctx->pc = 0x20F57Cu;
            goto label_20f57c;
        }
    }
    ctx->pc = 0x20F564u;
    // 0x20f564: 0x51880
    ctx->pc = 0x20f564u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20f568: 0x671821
    ctx->pc = 0x20f568u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20f56c: 0xc4600000
    ctx->pc = 0x20f56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f570: 0xe4400000
    ctx->pc = 0x20f570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20f574: 0x10000004
    ctx->pc = 0x20F574u;
    {
        const bool branch_taken_0x20f574 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F578u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x20f574) {
            ctx->pc = 0x20F588u;
            goto label_20f588;
        }
    }
    ctx->pc = 0x20F57Cu;
label_20f57c:
    // 0x20f57c: 0x41080
    ctx->pc = 0x20f57cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20f580: 0x531021
    ctx->pc = 0x20f580u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x20f584: 0xac400000
    ctx->pc = 0x20f584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20f588:
    // 0x20f588: 0x24840001
    ctx->pc = 0x20f588u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20f58c: 0x28820003
    ctx->pc = 0x20f58cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x20f590: 0x1440ffef
    ctx->pc = 0x20F590u;
    {
        const bool branch_taken_0x20f590 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F594u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x20f590) {
            ctx->pc = 0x20F550u;
            goto label_20f550;
        }
    }
    ctx->pc = 0x20F598u;
    // 0x20f598: 0x8fa20000
    ctx->pc = 0x20f598u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f59c: 0x2e21018
    ctx->pc = 0x20f59cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20f5a0: 0x21080
    ctx->pc = 0x20f5a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f5a4: 0x503821
    ctx->pc = 0x20f5a4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f5a8: 0x113403
    ctx->pc = 0x20f5a8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 16));
    // 0x20f5ac: 0x202d
    ctx->pc = 0x20f5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f5b0: 0x3c020032
    ctx->pc = 0x20f5b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f5b4: 0x2448f478
    ctx->pc = 0x20f5b4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20f5b8: 0x24820003
    ctx->pc = 0x20f5b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 3));
    // 0x20f5bc: 0x0
    ctx->pc = 0x20f5bcu;
    // NOP
label_20f5c0:
    // 0x20f5c0: 0x21080
    ctx->pc = 0x20f5c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f5c4: 0x481021
    ctx->pc = 0x20f5c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20f5c8: 0x8c420000
    ctx->pc = 0x20f5c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f5cc: 0xc21024
    ctx->pc = 0x20f5ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20f5d0: 0x10400008
    ctx->pc = 0x20F5D0u;
    {
        const bool branch_taken_0x20f5d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F5D4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x20f5d0) {
            ctx->pc = 0x20F5F4u;
            goto label_20f5f4;
        }
    }
    ctx->pc = 0x20F5D8u;
    // 0x20f5d8: 0x551021
    ctx->pc = 0x20f5d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x20f5dc: 0x51880
    ctx->pc = 0x20f5dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20f5e0: 0x671821
    ctx->pc = 0x20f5e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20f5e4: 0xc4600000
    ctx->pc = 0x20f5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f5e8: 0xe4400000
    ctx->pc = 0x20f5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20f5ec: 0x10000003
    ctx->pc = 0x20F5ECu;
    {
        const bool branch_taken_0x20f5ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F5F0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x20f5ec) {
            ctx->pc = 0x20F5FCu;
            goto label_20f5fc;
        }
    }
    ctx->pc = 0x20F5F4u;
label_20f5f4:
    // 0x20f5f4: 0x551021
    ctx->pc = 0x20f5f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x20f5f8: 0xac400000
    ctx->pc = 0x20f5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20f5fc:
    // 0x20f5fc: 0x24840001
    ctx->pc = 0x20f5fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20f600: 0x28820003
    ctx->pc = 0x20f600u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x20f604: 0x1440ffee
    ctx->pc = 0x20F604u;
    {
        const bool branch_taken_0x20f604 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F608u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x20f604) {
            ctx->pc = 0x20F5C0u;
            goto label_20f5c0;
        }
    }
    ctx->pc = 0x20F60Cu;
    // 0x20f60c: 0x8fa20000
    ctx->pc = 0x20f60cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f610: 0x2e21018
    ctx->pc = 0x20f610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20f614: 0x21080
    ctx->pc = 0x20f614u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f618: 0x503821
    ctx->pc = 0x20f618u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f61c: 0x113403
    ctx->pc = 0x20f61cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 16));
    // 0x20f620: 0x202d
    ctx->pc = 0x20f620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f624: 0x3c020032
    ctx->pc = 0x20f624u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20f628: 0x2448f478
    ctx->pc = 0x20f628u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x20f62c: 0x3c013f80
    ctx->pc = 0x20f62cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x20f630: 0x44810800
    ctx->pc = 0x20f630u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x20f634: 0x24820006
    ctx->pc = 0x20f634u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 6));
label_20f638:
    // 0x20f638: 0x21080
    ctx->pc = 0x20f638u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f63c: 0x481021
    ctx->pc = 0x20f63cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20f640: 0x8c420000
    ctx->pc = 0x20f640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f644: 0xc21024
    ctx->pc = 0x20f644u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20f648: 0x10400008
    ctx->pc = 0x20F648u;
    {
        const bool branch_taken_0x20f648 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F64Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x20f648) {
            ctx->pc = 0x20F66Cu;
            goto label_20f66c;
        }
    }
    ctx->pc = 0x20F650u;
    // 0x20f650: 0x561021
    ctx->pc = 0x20f650u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x20f654: 0x51880
    ctx->pc = 0x20f654u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20f658: 0x671821
    ctx->pc = 0x20f658u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20f65c: 0xc4600000
    ctx->pc = 0x20f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f660: 0xe4400000
    ctx->pc = 0x20f660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20f664: 0x10000003
    ctx->pc = 0x20F664u;
    {
        const bool branch_taken_0x20f664 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F668u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x20f664) {
            ctx->pc = 0x20F674u;
            goto label_20f674;
        }
    }
    ctx->pc = 0x20F66Cu;
label_20f66c:
    // 0x20f66c: 0x561021
    ctx->pc = 0x20f66cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x20f670: 0xe4410000
    ctx->pc = 0x20f670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20f674:
    // 0x20f674: 0x24840001
    ctx->pc = 0x20f674u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x20f678: 0x28820003
    ctx->pc = 0x20f678u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x20f67c: 0x1440ffee
    ctx->pc = 0x20F67Cu;
    {
        const bool branch_taken_0x20f67c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F680u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 6));
        if (branch_taken_0x20f67c) {
            ctx->pc = 0x20F638u;
            goto label_20f638;
        }
    }
    ctx->pc = 0x20F684u;
    // 0x20f684: 0x10000003
    ctx->pc = 0x20F684u;
    {
        const bool branch_taken_0x20f684 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20f684) {
            ctx->pc = 0x20F694u;
            goto label_20f694;
        }
    }
    ctx->pc = 0x20F68Cu;
label_20f68c:
    // 0x20f68c: 0x4492a000
    ctx->pc = 0x20f68cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 18);
    // 0x20f690: 0x4680a520
    ctx->pc = 0x20f690u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
label_20f694:
    // 0x20f694: 0x44920000
    ctx->pc = 0x20f694u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 18);
    // 0x20f698: 0x46800020
    ctx->pc = 0x20f698u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20f69c: 0x4600a034
    ctx->pc = 0x20f69cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f6a0: 0x0
    ctx->pc = 0x20f6a0u;
    // NOP
    // 0x20f6a4: 0x4501ff34
    ctx->pc = 0x20F6A4u;
    {
        const bool branch_taken_0x20f6a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F6A8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 20)));
        if (branch_taken_0x20f6a4) {
            ctx->pc = 0x20F378u;
            goto label_20f378;
        }
    }
    ctx->pc = 0x20F6ACu;
label_20f6ac:
    // 0x20f6ac: 0x254102a
    ctx->pc = 0x20f6acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 20)));
    // 0x20f6b0: 0x10400064
    ctx->pc = 0x20F6B0u;
    {
        const bool branch_taken_0x20f6b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F6B4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x20f6b0) {
            ctx->pc = 0x20F844u;
            goto label_20f844;
        }
    }
    ctx->pc = 0x20F6B8u;
    // 0x20f6b8: 0x44940000
    ctx->pc = 0x20f6b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 20);
    // 0x20f6bc: 0x46800020
    ctx->pc = 0x20f6bcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20f6c0: 0x46140001
    ctx->pc = 0x20f6c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x20f6c4: 0x3c013e00
    ctx->pc = 0x20f6c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15872 << 16));
    // 0x20f6c8: 0x44810800
    ctx->pc = 0x20f6c8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x20f6cc: 0x46000834
    ctx->pc = 0x20f6ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f6d0: 0x0
    ctx->pc = 0x20f6d0u;
    // NOP
    // 0x20f6d4: 0x4500005b
    ctx->pc = 0x20F6D4u;
    {
        const bool branch_taken_0x20f6d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F6D8u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        if (branch_taken_0x20f6d4) {
            ctx->pc = 0x20F844u;
            goto label_20f844;
        }
    }
    ctx->pc = 0x20F6DCu;
    // 0x20f6dc: 0x28820100
    ctx->pc = 0x20f6dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 256));
    // 0x20f6e0: 0x1040000a
    ctx->pc = 0x20F6E0u;
    {
        const bool branch_taken_0x20f6e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F6E4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x20f6e0) {
            ctx->pc = 0x20F70Cu;
            goto label_20f70c;
        }
    }
    ctx->pc = 0x20F6E8u;
    // 0x20f6e8: 0x44920000
    ctx->pc = 0x20f6e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 18);
    // 0x20f6ec: 0x46800020
    ctx->pc = 0x20f6ecu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20f6f0: 0x4600a301
    ctx->pc = 0x20f6f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x20f6f4: 0x2463c5a0
    ctx->pc = 0x20f6f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294952352));
    // 0x20f6f8: 0x41080
    ctx->pc = 0x20f6f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20f6fc: 0x431021
    ctx->pc = 0x20f6fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20f700: 0xc4400000
    ctx->pc = 0x20f700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f704: 0x1000000a
    ctx->pc = 0x20F704u;
    {
        const bool branch_taken_0x20f704 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F708u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x20f704) {
            ctx->pc = 0x20F730u;
            goto label_20f730;
        }
    }
    ctx->pc = 0x20F70Cu;
label_20f70c:
    // 0x20f70c: 0x44920000
    ctx->pc = 0x20f70cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 18);
    // 0x20f710: 0x46800020
    ctx->pc = 0x20f710u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20f714: 0x4600a301
    ctx->pc = 0x20f714u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x20f718: 0x2921023
    ctx->pc = 0x20f718u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x20f71c: 0x44820000
    ctx->pc = 0x20f71cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x20f720: 0x46800020
    ctx->pc = 0x20f720u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20f724: 0x0
    ctx->pc = 0x20f724u;
    // NOP
    // 0x20f728: 0x0
    ctx->pc = 0x20f728u;
    // NOP
    // 0x20f72c: 0x46006303
    ctx->pc = 0x20f72cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
label_20f730:
    // 0x20f730: 0x282d
    ctx->pc = 0x20f730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f734: 0x3c01bfc9
    ctx->pc = 0x20f734u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49097 << 16));
    // 0x20f738: 0x34210fdb
    ctx->pc = 0x20f738u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x20f73c: 0x44811800
    ctx->pc = 0x20f73cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x20f740: 0x3c013fc9
    ctx->pc = 0x20f740u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x20f744: 0x34210fdb
    ctx->pc = 0x20f744u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x20f748: 0x44811000
    ctx->pc = 0x20f748u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x20f74c: 0x52080
    ctx->pc = 0x20f74cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
label_20f750:
    // 0x20f750: 0x9e1021
    ctx->pc = 0x20f750u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x20f754: 0x931821
    ctx->pc = 0x20f754u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x20f758: 0xc4400000
    ctx->pc = 0x20f758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f75c: 0xc4610000
    ctx->pc = 0x20f75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f760: 0x46010001
    ctx->pc = 0x20f760u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20f764: 0x46001834
    ctx->pc = 0x20f764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f768: 0x0
    ctx->pc = 0x20f768u;
    // NOP
    // 0x20f76c: 0x4500000a
    ctx->pc = 0x20F76Cu;
    {
        const bool branch_taken_0x20f76c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F770u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x20f76c) {
            ctx->pc = 0x20F798u;
            goto label_20f798;
        }
    }
    ctx->pc = 0x20F774u;
    // 0x20f774: 0x46020034
    ctx->pc = 0x20f774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f778: 0x0
    ctx->pc = 0x20f778u;
    // NOP
    // 0x20f77c: 0x45000006
    ctx->pc = 0x20F77Cu;
    {
        const bool branch_taken_0x20f77c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F780u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x20f77c) {
            ctx->pc = 0x20F798u;
            goto label_20f798;
        }
    }
    ctx->pc = 0x20F784u;
    // 0x20f784: 0x861021
    ctx->pc = 0x20f784u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20f788: 0x460c0002
    ctx->pc = 0x20f788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x20f78c: 0x46010000
    ctx->pc = 0x20f78cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20f790: 0x10000006
    ctx->pc = 0x20F790u;
    {
        const bool branch_taken_0x20f790 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F794u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        if (branch_taken_0x20f790) {
            ctx->pc = 0x20F7ACu;
            goto label_20f7ac;
        }
    }
    ctx->pc = 0x20F798u;
label_20f798:
    // 0x20f798: 0x8fa80010
    ctx->pc = 0x20f798u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f79c: 0x481821
    ctx->pc = 0x20f79cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20f7a0: 0x531021
    ctx->pc = 0x20f7a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x20f7a4: 0xc4400000
    ctx->pc = 0x20f7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f7a8: 0xe4600000
    ctx->pc = 0x20f7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_20f7ac:
    // 0x20f7ac: 0x24a50001
    ctx->pc = 0x20f7acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20f7b0: 0x28a20003
    ctx->pc = 0x20f7b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x20f7b4: 0x1440ffe6
    ctx->pc = 0x20F7B4u;
    {
        const bool branch_taken_0x20f7b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F7B8u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x20f7b4) {
            ctx->pc = 0x20F750u;
            goto label_20f750;
        }
    }
    ctx->pc = 0x20F7BCu;
    // 0x20f7bc: 0x282d
    ctx->pc = 0x20f7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f7c0:
    // 0x20f7c0: 0x51080
    ctx->pc = 0x20f7c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20f7c4: 0x8faa0014
    ctx->pc = 0x20f7c4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x20f7c8: 0x4a2021
    ctx->pc = 0x20f7c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x20f7cc: 0x551821
    ctx->pc = 0x20f7ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x20f7d0: 0x8fa60018
    ctx->pc = 0x20f7d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f7d4: 0x461021
    ctx->pc = 0x20f7d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20f7d8: 0xc4400000
    ctx->pc = 0x20f7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f7dc: 0xc4610000
    ctx->pc = 0x20f7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f7e0: 0x46010001
    ctx->pc = 0x20f7e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20f7e4: 0x460c0002
    ctx->pc = 0x20f7e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x20f7e8: 0x46010000
    ctx->pc = 0x20f7e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20f7ec: 0x24a50001
    ctx->pc = 0x20f7ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20f7f0: 0x28a20003
    ctx->pc = 0x20f7f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x20f7f4: 0x1440fff2
    ctx->pc = 0x20F7F4u;
    {
        const bool branch_taken_0x20f7f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F7F8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x20f7f4) {
            ctx->pc = 0x20F7C0u;
            goto label_20f7c0;
        }
    }
    ctx->pc = 0x20F7FCu;
    // 0x20f7fc: 0x282d
    ctx->pc = 0x20f7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f800:
    // 0x20f800: 0x51080
    ctx->pc = 0x20f800u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20f804: 0x8fa8001c
    ctx->pc = 0x20f804u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x20f808: 0x482021
    ctx->pc = 0x20f808u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20f80c: 0x561821
    ctx->pc = 0x20f80cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x20f810: 0x8faa0020
    ctx->pc = 0x20f810u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f814: 0x4a1021
    ctx->pc = 0x20f814u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x20f818: 0xc4400000
    ctx->pc = 0x20f818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f81c: 0xc4610000
    ctx->pc = 0x20f81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f820: 0x46010001
    ctx->pc = 0x20f820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20f824: 0x460c0002
    ctx->pc = 0x20f824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x20f828: 0x46010000
    ctx->pc = 0x20f828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20f82c: 0x24a50001
    ctx->pc = 0x20f82cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20f830: 0x28a20003
    ctx->pc = 0x20f830u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x20f834: 0x1440fff2
    ctx->pc = 0x20F834u;
    {
        const bool branch_taken_0x20f834 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F838u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x20f834) {
            ctx->pc = 0x20F800u;
            goto label_20f800;
        }
    }
    ctx->pc = 0x20F83Cu;
    // 0x20f83c: 0x1000000c
    ctx->pc = 0x20F83Cu;
    {
        const bool branch_taken_0x20f83c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F840u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20f83c) {
            ctx->pc = 0x20F870u;
            goto label_20f870;
        }
    }
    ctx->pc = 0x20F844u;
label_20f844:
    // 0x20f844: 0x7bc20000
    ctx->pc = 0x20f844u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20f848: 0x7c620000
    ctx->pc = 0x20f848u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20f84c: 0x8fa40018
    ctx->pc = 0x20f84cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f850: 0x8fa60014
    ctx->pc = 0x20f850u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x20f854: 0x78820000
    ctx->pc = 0x20f854u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f858: 0x7cc20000
    ctx->pc = 0x20f858u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x20f85c: 0x8fa80020
    ctx->pc = 0x20f85cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f860: 0x8faa001c
    ctx->pc = 0x20f860u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x20f864: 0x79020000
    ctx->pc = 0x20f864u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20f868: 0x7d420000
    ctx->pc = 0x20f868u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x20f86c: 0x282d
    ctx->pc = 0x20f86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f870:
    // 0x20f870: 0x3c014049
    ctx->pc = 0x20f870u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x20f874: 0x34210fdb
    ctx->pc = 0x20f874u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x20f878: 0x44811800
    ctx->pc = 0x20f878u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x20f87c: 0x3c0140c9
    ctx->pc = 0x20f87cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x20f880: 0x34210fdb
    ctx->pc = 0x20f880u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x20f884: 0x44810800
    ctx->pc = 0x20f884u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x20f888: 0x3c01c049
    ctx->pc = 0x20f888u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x20f88c: 0x34210fdb
    ctx->pc = 0x20f88cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x20f890: 0x44811000
    ctx->pc = 0x20f890u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x20f894: 0x0
    ctx->pc = 0x20f894u;
    // NOP
label_20f898:
    // 0x20f898: 0x51080
    ctx->pc = 0x20f898u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20f89c: 0x8fa40010
    ctx->pc = 0x20f89cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f8a0: 0x441821
    ctx->pc = 0x20f8a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20f8a4: 0xc4600000
    ctx->pc = 0x20f8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f8a8: 0x46001834
    ctx->pc = 0x20f8a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f8ac: 0x0
    ctx->pc = 0x20f8acu;
    // NOP
    // 0x20f8b0: 0x45000003
    ctx->pc = 0x20F8B0u;
    {
        const bool branch_taken_0x20f8b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F8B4u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x20f8b0) {
            ctx->pc = 0x20F8C0u;
            goto label_20f8c0;
        }
    }
    ctx->pc = 0x20F8B8u;
    // 0x20f8b8: 0x1000000c
    ctx->pc = 0x20F8B8u;
    {
        const bool branch_taken_0x20f8b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F8BCu;
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x20f8b8) {
            ctx->pc = 0x20F8ECu;
            goto label_20f8ec;
        }
    }
    ctx->pc = 0x20F8C0u;
label_20f8c0:
    // 0x20f8c0: 0x461021
    ctx->pc = 0x20f8c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20f8c4: 0xc4400000
    ctx->pc = 0x20f8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f8c8: 0x46020036
    ctx->pc = 0x20f8c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f8cc: 0x0
    ctx->pc = 0x20f8ccu;
    // NOP
    // 0x20f8d0: 0x45000003
    ctx->pc = 0x20F8D0u;
    {
        const bool branch_taken_0x20f8d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F8D4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x20f8d0) {
            ctx->pc = 0x20F8E0u;
            goto label_20f8e0;
        }
    }
    ctx->pc = 0x20F8D8u;
    // 0x20f8d8: 0x10000004
    ctx->pc = 0x20F8D8u;
    {
        const bool branch_taken_0x20f8d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F8DCu;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x20f8d8) {
            ctx->pc = 0x20F8ECu;
            goto label_20f8ec;
        }
    }
    ctx->pc = 0x20F8E0u;
label_20f8e0:
    // 0x20f8e0: 0x8fa80010
    ctx->pc = 0x20f8e0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f8e4: 0x481021
    ctx->pc = 0x20f8e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20f8e8: 0xc4400000
    ctx->pc = 0x20f8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f8ec:
    // 0x20f8ec: 0x24a50001
    ctx->pc = 0x20f8ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20f8f0: 0x28a20003
    ctx->pc = 0x20f8f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x20f8f4: 0x1440ffe8
    ctx->pc = 0x20F8F4u;
    {
        const bool branch_taken_0x20f8f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20F8F8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        if (branch_taken_0x20f8f4) {
            ctx->pc = 0x20F898u;
            goto label_20f898;
        }
    }
    ctx->pc = 0x20F8FCu;
    // 0x20f8fc: 0x8faa0004
    ctx->pc = 0x20f8fcu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20f900: 0xa5520008
    ctx->pc = 0x20f900u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 8), (uint16_t)GPR_U32(ctx, 18));
    // 0x20f904: 0xa554000a
    ctx->pc = 0x20f904u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 10), (uint16_t)GPR_U32(ctx, 20));
    // 0x20f908: 0x8fa20000
    ctx->pc = 0x20f908u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f90c: 0x1000fcbf
    ctx->pc = 0x20F90Cu;
    {
        const bool branch_taken_0x20f90c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F910u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x20f90c) {
            ctx->pc = 0x20EC0Cu;
            goto label_20ec0c;
        }
    }
    ctx->pc = 0x20F914u;
label_20f914:
    // 0x20f914: 0xdfbf00c0
    ctx->pc = 0x20f914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20f918: 0xdfbe00b0
    ctx->pc = 0x20f918u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20f91c: 0xdfb700a0
    ctx->pc = 0x20f91cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20f920: 0xdfb60090
    ctx->pc = 0x20f920u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20f924: 0xdfb50080
    ctx->pc = 0x20f924u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20f928: 0xdfb40070
    ctx->pc = 0x20f928u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20f92c: 0xdfb30060
    ctx->pc = 0x20f92cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20f930: 0xdfb20050
    ctx->pc = 0x20f930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20f934: 0xdfb10040
    ctx->pc = 0x20f934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20f938: 0xdfb00030
    ctx->pc = 0x20f938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f93c: 0xc7b400d0
    ctx->pc = 0x20f93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20f940: 0x3e00008
    ctx->pc = 0x20F940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F944u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20EAC0u: goto label_20eac0;
            case 0x20EAF0u: goto label_20eaf0;
            case 0x20EB00u: goto label_20eb00;
            case 0x20EB30u: goto label_20eb30;
            case 0x20EB68u: goto label_20eb68;
            case 0x20EB74u: goto label_20eb74;
            case 0x20EBB0u: goto label_20ebb0;
            case 0x20EBE8u: goto label_20ebe8;
            case 0x20EBF4u: goto label_20ebf4;
            case 0x20EC0Cu: goto label_20ec0c;
            case 0x20EC14u: goto label_20ec14;
            case 0x20EC38u: goto label_20ec38;
            case 0x20EC68u: goto label_20ec68;
            case 0x20EC94u: goto label_20ec94;
            case 0x20ECA0u: goto label_20eca0;
            case 0x20ECE8u: goto label_20ece8;
            case 0x20ED1Cu: goto label_20ed1c;
            case 0x20ED24u: goto label_20ed24;
            case 0x20ED78u: goto label_20ed78;
            case 0x20EDACu: goto label_20edac;
            case 0x20EDB4u: goto label_20edb4;
            case 0x20EE04u: goto label_20ee04;
            case 0x20EE10u: goto label_20ee10;
            case 0x20EE48u: goto label_20ee48;
            case 0x20EE74u: goto label_20ee74;
            case 0x20EE80u: goto label_20ee80;
            case 0x20EEC0u: goto label_20eec0;
            case 0x20EEF4u: goto label_20eef4;
            case 0x20EEFCu: goto label_20eefc;
            case 0x20EF48u: goto label_20ef48;
            case 0x20EF7Cu: goto label_20ef7c;
            case 0x20EF84u: goto label_20ef84;
            case 0x20EFC0u: goto label_20efc0;
            case 0x20EFC4u: goto label_20efc4;
            case 0x20EFD8u: goto label_20efd8;
            case 0x20EFF8u: goto label_20eff8;
            case 0x20F028u: goto label_20f028;
            case 0x20F088u: goto label_20f088;
            case 0x20F0C0u: goto label_20f0c0;
            case 0x20F0F0u: goto label_20f0f0;
            case 0x20F134u: goto label_20f134;
            case 0x20F168u: goto label_20f168;
            case 0x20F1ACu: goto label_20f1ac;
            case 0x20F1C4u: goto label_20f1c4;
            case 0x20F1E8u: goto label_20f1e8;
            case 0x20F214u: goto label_20f214;
            case 0x20F220u: goto label_20f220;
            case 0x20F258u: goto label_20f258;
            case 0x20F290u: goto label_20f290;
            case 0x20F29Cu: goto label_20f29c;
            case 0x20F2D8u: goto label_20f2d8;
            case 0x20F310u: goto label_20f310;
            case 0x20F31Cu: goto label_20f31c;
            case 0x20F334u: goto label_20f334;
            case 0x20F33Cu: goto label_20f33c;
            case 0x20F354u: goto label_20f354;
            case 0x20F378u: goto label_20f378;
            case 0x20F3A8u: goto label_20f3a8;
            case 0x20F3F8u: goto label_20f3f8;
            case 0x20F430u: goto label_20f430;
            case 0x20F460u: goto label_20f460;
            case 0x20F4A0u: goto label_20f4a0;
            case 0x20F4D0u: goto label_20f4d0;
            case 0x20F510u: goto label_20f510;
            case 0x20F528u: goto label_20f528;
            case 0x20F550u: goto label_20f550;
            case 0x20F57Cu: goto label_20f57c;
            case 0x20F588u: goto label_20f588;
            case 0x20F5C0u: goto label_20f5c0;
            case 0x20F5F4u: goto label_20f5f4;
            case 0x20F5FCu: goto label_20f5fc;
            case 0x20F638u: goto label_20f638;
            case 0x20F66Cu: goto label_20f66c;
            case 0x20F674u: goto label_20f674;
            case 0x20F68Cu: goto label_20f68c;
            case 0x20F694u: goto label_20f694;
            case 0x20F6ACu: goto label_20f6ac;
            case 0x20F70Cu: goto label_20f70c;
            case 0x20F730u: goto label_20f730;
            case 0x20F750u: goto label_20f750;
            case 0x20F798u: goto label_20f798;
            case 0x20F7ACu: goto label_20f7ac;
            case 0x20F7C0u: goto label_20f7c0;
            case 0x20F800u: goto label_20f800;
            case 0x20F844u: goto label_20f844;
            case 0x20F870u: goto label_20f870;
            case 0x20F898u: goto label_20f898;
            case 0x20F8C0u: goto label_20f8c0;
            case 0x20F8E0u: goto label_20f8e0;
            case 0x20F8ECu: goto label_20f8ec;
            case 0x20F914u: goto label_20f914;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F948u;
}
