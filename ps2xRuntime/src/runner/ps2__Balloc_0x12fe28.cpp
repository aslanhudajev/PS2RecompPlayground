#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _Balloc
// Address: 0x12fe28 - 0x12fed0
void ps2__Balloc_0x12fe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12fe28u;

    // 0x12fe28: 0x27bdffd0
    ctx->pc = 0x12fe28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12fe2c: 0xffb10010
    ctx->pc = 0x12fe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12fe30: 0xffb00000
    ctx->pc = 0x12fe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fe34: 0xffbf0020
    ctx->pc = 0x12fe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12fe38: 0x80802d
    ctx->pc = 0x12fe38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe3c: 0x8e03004c
    ctx->pc = 0x12fe3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x12fe40: 0x14600007
    ctx->pc = 0x12FE40u;
    {
        const bool branch_taken_0x12fe40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x12FE44u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12fe40) {
            ctx->pc = 0x12FE60u;
            goto label_12fe60;
        }
    }
    ctx->pc = 0x12FE48u;
    // 0x12fe48: 0x24050004
    ctx->pc = 0x12fe48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x12fe4c: 0xc04c3ca
    ctx->pc = 0x12FE4Cu;
    SET_GPR_U32(ctx, 31, 0x12FE54u);
    ctx->pc = 0x12FE50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x130F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        _calloc_r_0x130f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FE54u; }
    }
    if (ctx->pc != 0x12FE54u) { return; }
    ctx->pc = 0x12FE54u;
    // 0x12fe54: 0x10400013
    ctx->pc = 0x12FE54u;
    {
        const bool branch_taken_0x12fe54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12FE58u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        if (branch_taken_0x12fe54) {
            ctx->pc = 0x12FEA4u;
            goto label_12fea4;
        }
    }
    ctx->pc = 0x12FE5Cu;
    // 0x12fe5c: 0x40182d
    ctx->pc = 0x12fe5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12fe60:
    // 0x12fe60: 0x111080
    ctx->pc = 0x12fe60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x12fe64: 0x432021
    ctx->pc = 0x12fe64u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12fe68: 0x8c830000
    ctx->pc = 0x12fe68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12fe6c: 0x10600004
    ctx->pc = 0x12FE6Cu;
    {
        const bool branch_taken_0x12fe6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12FE70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x12fe6c) {
            ctx->pc = 0x12FE80u;
            goto label_12fe80;
        }
    }
    ctx->pc = 0x12FE74u;
    // 0x12fe74: 0x8c620000
    ctx->pc = 0x12fe74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12fe78: 0x1000000d
    ctx->pc = 0x12FE78u;
    {
        const bool branch_taken_0x12fe78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12FE7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x12fe78) {
            ctx->pc = 0x12FEB0u;
            goto label_12feb0;
        }
    }
    ctx->pc = 0x12FE80u;
label_12fe80:
    // 0x12fe80: 0x200202d
    ctx->pc = 0x12fe80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe84: 0x2228004
    ctx->pc = 0x12fe84u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x12fe88: 0x24050001
    ctx->pc = 0x12fe88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fe8c: 0x103080
    ctx->pc = 0x12fe8cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 16), 2));
    // 0x12fe90: 0xc04c3ca
    ctx->pc = 0x12FE90u;
    SET_GPR_U32(ctx, 31, 0x12FE98u);
    ctx->pc = 0x12FE94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 20));
    ctx->pc = 0x130F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        _calloc_r_0x130f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FE98u; }
    }
    if (ctx->pc != 0x12FE98u) { return; }
    ctx->pc = 0x12FE98u;
    // 0x12fe98: 0x40182d
    ctx->pc = 0x12fe98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe9c: 0x54600003
    ctx->pc = 0x12FE9Cu;
    {
        const bool branch_taken_0x12fe9c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x12fe9c) {
            ctx->pc = 0x12FEA0u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
            ctx->pc = 0x12FEACu;
            goto label_12feac;
        }
    }
    ctx->pc = 0x12FEA4u;
label_12fea4:
    // 0x12fea4: 0x10000005
    ctx->pc = 0x12FEA4u;
    {
        const bool branch_taken_0x12fea4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12FEA8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12fea4) {
            ctx->pc = 0x12FEBCu;
            goto label_12febc;
        }
    }
    ctx->pc = 0x12FEACu;
label_12feac:
    // 0x12feac: 0xac700008
    ctx->pc = 0x12feacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_12feb0:
    // 0x12feb0: 0xac600010
    ctx->pc = 0x12feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x12feb4: 0x60102d
    ctx->pc = 0x12feb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12feb8: 0xac60000c
    ctx->pc = 0x12feb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_12febc:
    // 0x12febc: 0xdfbf0020
    ctx->pc = 0x12febcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fec0: 0xdfb10010
    ctx->pc = 0x12fec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fec4: 0xdfb00000
    ctx->pc = 0x12fec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fec8: 0x3e00008
    ctx->pc = 0x12FEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FECCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FE60u: goto label_12fe60;
            case 0x12FE80u: goto label_12fe80;
            case 0x12FEA4u: goto label_12fea4;
            case 0x12FEACu: goto label_12feac;
            case 0x12FEB0u: goto label_12feb0;
            case 0x12FEBCu: goto label_12febc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FED0u;
}
