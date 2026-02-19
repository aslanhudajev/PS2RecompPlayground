#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _Balloc
// Address: 0x302020 - 0x3020c8
void ps2__Balloc_0x302020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x302020u;

    // 0x302020: 0x27bdffd0
    ctx->pc = 0x302020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x302024: 0xffb10010
    ctx->pc = 0x302024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x302028: 0xffb00000
    ctx->pc = 0x302028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30202c: 0xffbf0020
    ctx->pc = 0x30202cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x302030: 0x80802d
    ctx->pc = 0x302030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302034: 0x8e03004c
    ctx->pc = 0x302034u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x302038: 0x14600007
    ctx->pc = 0x302038u;
    {
        const bool branch_taken_0x302038 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x30203Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x302038) {
            ctx->pc = 0x302058u;
            goto label_302058;
        }
    }
    ctx->pc = 0x302040u;
    // 0x302040: 0x24050004
    ctx->pc = 0x302040u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x302044: 0xc0c0c28
    ctx->pc = 0x302044u;
    SET_GPR_U32(ctx, 31, 0x30204Cu);
    ctx->pc = 0x302048u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x3030A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _calloc_r_0x3030a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30204Cu; }
    }
    if (ctx->pc != 0x30204Cu) { return; }
    ctx->pc = 0x30204Cu;
    // 0x30204c: 0x10400013
    ctx->pc = 0x30204Cu;
    {
        const bool branch_taken_0x30204c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x302050u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        if (branch_taken_0x30204c) {
            ctx->pc = 0x30209Cu;
            goto label_30209c;
        }
    }
    ctx->pc = 0x302054u;
    // 0x302054: 0x40182d
    ctx->pc = 0x302054u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302058:
    // 0x302058: 0x111080
    ctx->pc = 0x302058u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x30205c: 0x432021
    ctx->pc = 0x30205cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x302060: 0x8c830000
    ctx->pc = 0x302060u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x302064: 0x10600004
    ctx->pc = 0x302064u;
    {
        const bool branch_taken_0x302064 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x302068u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x302064) {
            ctx->pc = 0x302078u;
            goto label_302078;
        }
    }
    ctx->pc = 0x30206Cu;
    // 0x30206c: 0x8c620000
    ctx->pc = 0x30206cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x302070: 0x1000000d
    ctx->pc = 0x302070u;
    {
        const bool branch_taken_0x302070 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x302074u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x302070) {
            ctx->pc = 0x3020A8u;
            goto label_3020a8;
        }
    }
    ctx->pc = 0x302078u;
label_302078:
    // 0x302078: 0x200202d
    ctx->pc = 0x302078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30207c: 0x2228004
    ctx->pc = 0x30207cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x302080: 0x24050001
    ctx->pc = 0x302080u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x302084: 0x103080
    ctx->pc = 0x302084u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 16), 2));
    // 0x302088: 0xc0c0c28
    ctx->pc = 0x302088u;
    SET_GPR_U32(ctx, 31, 0x302090u);
    ctx->pc = 0x30208Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 20));
    ctx->pc = 0x3030A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _calloc_r_0x3030a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302090u; }
    }
    if (ctx->pc != 0x302090u) { return; }
    ctx->pc = 0x302090u;
    // 0x302090: 0x40182d
    ctx->pc = 0x302090u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302094: 0x54600003
    ctx->pc = 0x302094u;
    {
        const bool branch_taken_0x302094 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x302094) {
            ctx->pc = 0x302098u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
            ctx->pc = 0x3020A4u;
            goto label_3020a4;
        }
    }
    ctx->pc = 0x30209Cu;
label_30209c:
    // 0x30209c: 0x10000005
    ctx->pc = 0x30209Cu;
    {
        const bool branch_taken_0x30209c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3020A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x30209c) {
            ctx->pc = 0x3020B4u;
            goto label_3020b4;
        }
    }
    ctx->pc = 0x3020A4u;
label_3020a4:
    // 0x3020a4: 0xac700008
    ctx->pc = 0x3020a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_3020a8:
    // 0x3020a8: 0xac600010
    ctx->pc = 0x3020a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x3020ac: 0x60102d
    ctx->pc = 0x3020acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3020b0: 0xac60000c
    ctx->pc = 0x3020b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_3020b4:
    // 0x3020b4: 0xdfbf0020
    ctx->pc = 0x3020b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3020b8: 0xdfb10010
    ctx->pc = 0x3020b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3020bc: 0xdfb00000
    ctx->pc = 0x3020bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3020c0: 0x3e00008
    ctx->pc = 0x3020C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3020C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x302058u: goto label_302058;
            case 0x302078u: goto label_302078;
            case 0x30209Cu: goto label_30209c;
            case 0x3020A4u: goto label_3020a4;
            case 0x3020A8u: goto label_3020a8;
            case 0x3020B4u: goto label_3020b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3020C8u;
}
