#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _nextBit
// Address: 0x123f70 - 0x1240d8
void _nextBit_0x123f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123f70u;

    // 0x123f70: 0x27bdffa0
    ctx->pc = 0x123f70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x123f74: 0x3c021000
    ctx->pc = 0x123f74u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x123f78: 0xffb10010
    ctx->pc = 0x123f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x123f7c: 0x34422010
    ctx->pc = 0x123f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)8208);
    // 0x123f80: 0xffbf0050
    ctx->pc = 0x123f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x123f84: 0x3c058000
    ctx->pc = 0x123f84u;
    SET_GPR_S32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x123f88: 0xffb40040
    ctx->pc = 0x123f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x123f8c: 0x34a54000
    ctx->pc = 0x123f8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)16384);
    // 0x123f90: 0xffb30030
    ctx->pc = 0x123f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x123f94: 0x80882d
    ctx->pc = 0x123f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123f98: 0xffb20020
    ctx->pc = 0x123f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x123f9c: 0x302d
    ctx->pc = 0x123f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123fa0: 0xffb00000
    ctx->pc = 0x123fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123fa4: 0x8c430000
    ctx->pc = 0x123fa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123fa8: 0x3c028000
    ctx->pc = 0x123fa8u;
    SET_GPR_S32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x123fac: 0x651824
    ctx->pc = 0x123facu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x123fb0: 0x14620018
    ctx->pc = 0x123FB0u;
    {
        const bool branch_taken_0x123fb0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x123FB4u;
        SET_GPR_S32(ctx, 19, ((uint32_t)23 << 16));
        if (branch_taken_0x123fb0) {
            ctx->pc = 0x124014u;
            goto label_124014;
        }
    }
    ctx->pc = 0x123FB8u;
    // 0x123fb8: 0x3c100017
    ctx->pc = 0x123fb8u;
    SET_GPR_S32(ctx, 16, ((uint32_t)23 << 16));
    // 0x123fbc: 0x3c140017
    ctx->pc = 0x123fbcu;
    SET_GPR_S32(ctx, 20, ((uint32_t)23 << 16));
    // 0x123fc0: 0x3c120017
    ctx->pc = 0x123fc0u;
    SET_GPR_S32(ctx, 18, ((uint32_t)23 << 16));
    // 0x123fc4: 0x0
    ctx->pc = 0x123fc4u;
    // NOP
label_123fc8:
    // 0x123fc8: 0xc0102d
    ctx->pc = 0x123fc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123fcc: 0x28421389
    ctx->pc = 0x123fccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x123fd0: 0x14400005
    ctx->pc = 0x123FD0u;
    {
        const bool branch_taken_0x123fd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x123FD4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x123fd0) {
            ctx->pc = 0x123FE8u;
            goto label_123fe8;
        }
    }
    ctx->pc = 0x123FD8u;
    // 0x123fd8: 0x3c020017
    ctx->pc = 0x123fd8u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x123fdc: 0xc047df4
    ctx->pc = 0x123FDCu;
    SET_GPR_U32(ctx, 31, 0x123FE4u);
    ctx->pc = 0x123FE0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 6076)));
    ctx->pc = 0x11F7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123FE4u; }
    }
    if (ctx->pc != 0x123FE4u) { return; }
    ctx->pc = 0x123FE4u;
    // 0x123fe4: 0x302d
    ctx->pc = 0x123fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123fe8:
    // 0x123fe8: 0x3c031000
    ctx->pc = 0x123fe8u;
    SET_GPR_S32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x123fec: 0x3c048000
    ctx->pc = 0x123fecu;
    SET_GPR_S32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x123ff0: 0x34632010
    ctx->pc = 0x123ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)8208);
    // 0x123ff4: 0x34844000
    ctx->pc = 0x123ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)16384);
    // 0x123ff8: 0x8c620000
    ctx->pc = 0x123ff8u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x123ffc: 0x3c058000
    ctx->pc = 0x123ffcu;
    SET_GPR_S32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x124000: 0x441024
    ctx->pc = 0x124000u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x124004: 0x1045fff0
    ctx->pc = 0x124004u;
    {
        const bool branch_taken_0x124004 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x124008u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 6180)));
        if (branch_taken_0x124004) {
            ctx->pc = 0x123FC8u;
            goto label_123fc8;
        }
    }
    ctx->pc = 0x12400Cu;
    // 0x12400c: 0x10000005
    ctx->pc = 0x12400Cu;
    {
        const bool branch_taken_0x12400c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x12400c) {
            ctx->pc = 0x124024u;
            goto label_124024;
        }
    }
    ctx->pc = 0x124014u;
label_124014:
    // 0x124014: 0x3c100017
    ctx->pc = 0x124014u;
    SET_GPR_S32(ctx, 16, ((uint32_t)23 << 16));
    // 0x124018: 0x3c140017
    ctx->pc = 0x124018u;
    SET_GPR_S32(ctx, 20, ((uint32_t)23 << 16));
    // 0x12401c: 0x3c120017
    ctx->pc = 0x12401cu;
    SET_GPR_S32(ctx, 18, ((uint32_t)23 << 16));
    // 0x124020: 0x8e621824
    ctx->pc = 0x124020u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 6180)));
label_124024:
    // 0x124024: 0x14400005
    ctx->pc = 0x124024u;
    {
        const bool branch_taken_0x124024 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x124028u;
        SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x124024) {
            ctx->pc = 0x12403Cu;
            goto label_12403c;
        }
    }
    ctx->pc = 0x12402Cu;
    // 0x12402c: 0x8e02209c
    ctx->pc = 0x12402cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8348)));
    // 0x124030: 0x51102a
    ctx->pc = 0x124030u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
    // 0x124034: 0x1040000b
    ctx->pc = 0x124034u;
    {
        const bool branch_taken_0x124034 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x124038u;
        SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x124034) {
            ctx->pc = 0x124064u;
            goto label_124064;
        }
    }
    ctx->pc = 0x12403Cu;
label_12403c:
    // 0x12403c: 0x3c054000
    ctx->pc = 0x12403cu;
    SET_GPR_S32(ctx, 5, ((uint32_t)16384 << 16));
    // 0x124040: 0x34422000
    ctx->pc = 0x124040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)8192);
    // 0x124044: 0x26842108
    ctx->pc = 0x124044u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 8456));
    // 0x124048: 0xac450000
    ctx->pc = 0x124048u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x12404c: 0x8c830010
    ctx->pc = 0x12404cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x124050: 0xc048eae
    ctx->pc = 0x124050u;
    SET_GPR_U32(ctx, 31, 0x124058u);
    ctx->pc = 0x124054u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6180), GPR_U32(ctx, 3));
    ctx->pc = 0x123AB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x123ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124058u; }
    }
    if (ctx->pc != 0x124058u) { return; }
    ctx->pc = 0x124058u;
    // 0x124058: 0x2103c
    ctx->pc = 0x124058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12405c: 0x2103f
    ctx->pc = 0x12405cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x124060: 0xae422098
    ctx->pc = 0x124060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8344), GPR_U32(ctx, 2));
label_124064:
    // 0x124064: 0x24050020
    ctx->pc = 0x124064u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x124068: 0x3c044000
    ctx->pc = 0x124068u;
    SET_GPR_S32(ctx, 4, ((uint32_t)16384 << 16));
    // 0x12406c: 0xae05209c
    ctx->pc = 0x12406cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8348), GPR_U32(ctx, 5));
    // 0x124070: 0x3c021000
    ctx->pc = 0x124070u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x124074: 0x2242025
    ctx->pc = 0x124074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x124078: 0x8e502098
    ctx->pc = 0x124078u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 8344)));
    // 0x12407c: 0x34422000
    ctx->pc = 0x12407cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)8192);
    // 0x124080: 0x41f02
    ctx->pc = 0x124080u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 28));
    // 0x124084: 0xac440000
    ctx->pc = 0x124084u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x124088: 0x31880
    ctx->pc = 0x124088u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x12408c: 0x26822108
    ctx->pc = 0x12408cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 8456));
    // 0x124090: 0xb12823
    ctx->pc = 0x124090u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x124094: 0x621821
    ctx->pc = 0x124094u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x124098: 0xb08006
    ctx->pc = 0x124098u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
    // 0x12409c: 0x8c620000
    ctx->pc = 0x12409cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1240a0: 0xc048eae
    ctx->pc = 0x1240A0u;
    SET_GPR_U32(ctx, 31, 0x1240A8u);
    ctx->pc = 0x1240A4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6180), GPR_U32(ctx, 2));
    ctx->pc = 0x123AB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x123ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1240A8u; }
    }
    if (ctx->pc != 0x1240A8u) { return; }
    ctx->pc = 0x1240A8u;
    // 0x1240a8: 0x2103c
    ctx->pc = 0x1240a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1240ac: 0x2103f
    ctx->pc = 0x1240acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1240b0: 0xdfbf0050
    ctx->pc = 0x1240b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1240b4: 0xae422098
    ctx->pc = 0x1240b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8344), GPR_U32(ctx, 2));
    // 0x1240b8: 0x200102d
    ctx->pc = 0x1240b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1240bc: 0xdfb40040
    ctx->pc = 0x1240bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1240c0: 0xdfb30030
    ctx->pc = 0x1240c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1240c4: 0xdfb20020
    ctx->pc = 0x1240c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1240c8: 0xdfb10010
    ctx->pc = 0x1240c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1240cc: 0xdfb00000
    ctx->pc = 0x1240ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1240d0: 0x3e00008
    ctx->pc = 0x1240D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1240D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123FC8u: goto label_123fc8;
            case 0x123FE8u: goto label_123fe8;
            case 0x124014u: goto label_124014;
            case 0x124024u: goto label_124024;
            case 0x12403Cu: goto label_12403c;
            case 0x124064u: goto label_124064;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1240D8u;
}
