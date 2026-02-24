#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _flushBuf
// Address: 0x123e58 - 0x123f6c
void _flushBuf_0x123e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123e58u;

    // 0x123e58: 0x27bdffa0
    ctx->pc = 0x123e58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x123e5c: 0x3c021000
    ctx->pc = 0x123e5cu;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x123e60: 0xffb10010
    ctx->pc = 0x123e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x123e64: 0x34422010
    ctx->pc = 0x123e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)8208);
    // 0x123e68: 0xffbf0050
    ctx->pc = 0x123e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x123e6c: 0x3c058000
    ctx->pc = 0x123e6cu;
    SET_GPR_S32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x123e70: 0xffb40040
    ctx->pc = 0x123e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x123e74: 0x34a54000
    ctx->pc = 0x123e74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)16384);
    // 0x123e78: 0xffb30030
    ctx->pc = 0x123e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x123e7c: 0x80882d
    ctx->pc = 0x123e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e80: 0xffb20020
    ctx->pc = 0x123e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x123e84: 0x302d
    ctx->pc = 0x123e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e88: 0xffb00000
    ctx->pc = 0x123e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123e8c: 0x8c430000
    ctx->pc = 0x123e8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123e90: 0x3c028000
    ctx->pc = 0x123e90u;
    SET_GPR_S32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x123e94: 0x651824
    ctx->pc = 0x123e94u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x123e98: 0x14620018
    ctx->pc = 0x123E98u;
    {
        const bool branch_taken_0x123e98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x123E9Cu;
        SET_GPR_S32(ctx, 19, ((uint32_t)23 << 16));
        if (branch_taken_0x123e98) {
            ctx->pc = 0x123EFCu;
            goto label_123efc;
        }
    }
    ctx->pc = 0x123EA0u;
    // 0x123ea0: 0x3c100017
    ctx->pc = 0x123ea0u;
    SET_GPR_S32(ctx, 16, ((uint32_t)23 << 16));
    // 0x123ea4: 0x3c140017
    ctx->pc = 0x123ea4u;
    SET_GPR_S32(ctx, 20, ((uint32_t)23 << 16));
    // 0x123ea8: 0x3c120017
    ctx->pc = 0x123ea8u;
    SET_GPR_S32(ctx, 18, ((uint32_t)23 << 16));
    // 0x123eac: 0x0
    ctx->pc = 0x123eacu;
    // NOP
label_123eb0:
    // 0x123eb0: 0xc0102d
    ctx->pc = 0x123eb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123eb4: 0x28421389
    ctx->pc = 0x123eb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x123eb8: 0x14400005
    ctx->pc = 0x123EB8u;
    {
        const bool branch_taken_0x123eb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x123EBCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x123eb8) {
            ctx->pc = 0x123ED0u;
            goto label_123ed0;
        }
    }
    ctx->pc = 0x123EC0u;
    // 0x123ec0: 0x3c020017
    ctx->pc = 0x123ec0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x123ec4: 0xc047df4
    ctx->pc = 0x123EC4u;
    SET_GPR_U32(ctx, 31, 0x123ECCu);
    ctx->pc = 0x123EC8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 6076)));
    ctx->pc = 0x11F7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123ECCu; }
    }
    if (ctx->pc != 0x123ECCu) { return; }
    ctx->pc = 0x123ECCu;
    // 0x123ecc: 0x302d
    ctx->pc = 0x123eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123ed0:
    // 0x123ed0: 0x3c031000
    ctx->pc = 0x123ed0u;
    SET_GPR_S32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x123ed4: 0x3c048000
    ctx->pc = 0x123ed4u;
    SET_GPR_S32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x123ed8: 0x34632010
    ctx->pc = 0x123ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)8208);
    // 0x123edc: 0x34844000
    ctx->pc = 0x123edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)16384);
    // 0x123ee0: 0x8c620000
    ctx->pc = 0x123ee0u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x123ee4: 0x3c058000
    ctx->pc = 0x123ee4u;
    SET_GPR_S32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x123ee8: 0x441024
    ctx->pc = 0x123ee8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x123eec: 0x1045fff0
    ctx->pc = 0x123EECu;
    {
        const bool branch_taken_0x123eec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x123EF0u;
        SET_GPR_S32(ctx, 3, ((uint32_t)16384 << 16));
        if (branch_taken_0x123eec) {
            ctx->pc = 0x123EB0u;
            goto label_123eb0;
        }
    }
    ctx->pc = 0x123EF4u;
    // 0x123ef4: 0x10000006
    ctx->pc = 0x123EF4u;
    {
        const bool branch_taken_0x123ef4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x123EF8u;
        SET_GPR_S32(ctx, 4, ((uint32_t)4096 << 16));
        if (branch_taken_0x123ef4) {
            ctx->pc = 0x123F10u;
            goto label_123f10;
        }
    }
    ctx->pc = 0x123EFCu;
label_123efc:
    // 0x123efc: 0x3c100017
    ctx->pc = 0x123efcu;
    SET_GPR_S32(ctx, 16, ((uint32_t)23 << 16));
    // 0x123f00: 0x3c140017
    ctx->pc = 0x123f00u;
    SET_GPR_S32(ctx, 20, ((uint32_t)23 << 16));
    // 0x123f04: 0x3c120017
    ctx->pc = 0x123f04u;
    SET_GPR_S32(ctx, 18, ((uint32_t)23 << 16));
    // 0x123f08: 0x3c034000
    ctx->pc = 0x123f08u;
    SET_GPR_S32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x123f0c: 0x3c041000
    ctx->pc = 0x123f0cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)4096 << 16));
label_123f10:
    // 0x123f10: 0x2231825
    ctx->pc = 0x123f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x123f14: 0x34842000
    ctx->pc = 0x123f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)8192);
    // 0x123f18: 0xac830000
    ctx->pc = 0x123f18u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x123f1c: 0x31702
    ctx->pc = 0x123f1cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 28));
    // 0x123f20: 0x26032108
    ctx->pc = 0x123f20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 8456));
    // 0x123f24: 0x21080
    ctx->pc = 0x123f24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x123f28: 0x431021
    ctx->pc = 0x123f28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123f2c: 0x8c440000
    ctx->pc = 0x123f2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123f30: 0xc048eae
    ctx->pc = 0x123F30u;
    SET_GPR_U32(ctx, 31, 0x123F38u);
    ctx->pc = 0x123F34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6180), GPR_U32(ctx, 4));
    ctx->pc = 0x123AB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x123ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123F38u; }
    }
    if (ctx->pc != 0x123F38u) { return; }
    ctx->pc = 0x123F38u;
    // 0x123f38: 0x2103c
    ctx->pc = 0x123f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x123f3c: 0x2103f
    ctx->pc = 0x123f3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x123f40: 0x24030020
    ctx->pc = 0x123f40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x123f44: 0xae822098
    ctx->pc = 0x123f44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8344), GPR_U32(ctx, 2));
    // 0x123f48: 0xae43209c
    ctx->pc = 0x123f48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8348), GPR_U32(ctx, 3));
    // 0x123f4c: 0xdfbf0050
    ctx->pc = 0x123f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x123f50: 0xdfb40040
    ctx->pc = 0x123f50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123f54: 0xdfb30030
    ctx->pc = 0x123f54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123f58: 0xdfb20020
    ctx->pc = 0x123f58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123f5c: 0xdfb10010
    ctx->pc = 0x123f5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123f60: 0xdfb00000
    ctx->pc = 0x123f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123f64: 0x3e00008
    ctx->pc = 0x123F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123F68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123EB0u: goto label_123eb0;
            case 0x123ED0u: goto label_123ed0;
            case 0x123EFCu: goto label_123efc;
            case 0x123F10u: goto label_123f10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123F6Cu;
}
