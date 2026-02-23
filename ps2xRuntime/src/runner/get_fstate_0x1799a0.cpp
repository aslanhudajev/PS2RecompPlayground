#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: get_fstate
// Address: 0x1799a0 - 0x179a6c
void get_fstate_0x1799a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("get_fstate");


    ctx->pc = 0x1799a0u;

    // 0x1799a0: 0x27bdff80
    ctx->pc = 0x1799a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1799a4: 0xffb60060
    ctx->pc = 0x1799a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1799a8: 0xffb40040
    ctx->pc = 0x1799a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1799ac: 0xa0b02d
    ctx->pc = 0x1799acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1799b0: 0xffb30030
    ctx->pc = 0x1799b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1799b4: 0xe0a02d
    ctx->pc = 0x1799b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1799b8: 0xffb20020
    ctx->pc = 0x1799b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1799bc: 0xc0982d
    ctx->pc = 0x1799bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1799c0: 0xffb00000
    ctx->pc = 0x1799c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1799c4: 0x80902d
    ctx->pc = 0x1799c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1799c8: 0xffbf0070
    ctx->pc = 0x1799c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1799cc: 0x802d
    ctx->pc = 0x1799ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1799d0: 0xffb50050
    ctx->pc = 0x1799d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1799d4: 0x1a800019
    ctx->pc = 0x1799D4u;
    {
        const bool branch_taken_0x1799d4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1799D8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        if (branch_taken_0x1799d4) {
            ctx->pc = 0x179A3Cu;
            goto label_179a3c;
        }
    }
    ctx->pc = 0x1799DCu;
    // 0x1799dc: 0x3c150024
    ctx->pc = 0x1799dcu;
    SET_GPR_U32(ctx, 21, ((uint32_t)36 << 16));
    // 0x1799e0: 0x26a4a428
    ctx->pc = 0x1799e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294943784));
    // 0x1799e4: 0x0
    ctx->pc = 0x1799e4u;
    // NOP
label_1799e8:
    // 0x1799e8: 0x1010c0
    ctx->pc = 0x1799e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
    // 0x1799ec: 0x8c83000c
    ctx->pc = 0x1799ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1799f0: 0x2628821
    ctx->pc = 0x1799f0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1799f4: 0x8c850008
    ctx->pc = 0x1799f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1799f8: 0x701018
    ctx->pc = 0x1799f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1799fc: 0x2c0202d
    ctx->pc = 0x1799fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a00: 0x528c0
    ctx->pc = 0x179a00u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x179a04: 0x501821
    ctx->pc = 0x179a04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x179a08: 0xa32821
    ctx->pc = 0x179a08u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x179a0c: 0xc05e510
    ctx->pc = 0x179A0Cu;
    SET_GPR_U32(ctx, 31, 0x179A14u);
    ctx->pc = 0x179A10u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->pc = 0x179440u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_stricmp_0x179440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179A14u; }
        else if (ctx->pc != 0x179A14u) { ctx->pc = 0x179A14u; }
    }
    if (ctx->pc != 0x179A14u) { return; }
    ctx->pc = 0x179A14u;
    // 0x179a14: 0x14400006
    ctx->pc = 0x179A14u;
    {
        const bool branch_taken_0x179a14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x179A18u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x179a14) {
            ctx->pc = 0x179A30u;
            goto label_179a30;
        }
    }
    ctx->pc = 0x179A1Cu;
    // 0x179a1c: 0x8e220000
    ctx->pc = 0x179a1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x179a20: 0xae420000
    ctx->pc = 0x179a20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x179a24: 0x8e230004
    ctx->pc = 0x179a24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x179a28: 0x10000006
    ctx->pc = 0x179A28u;
    {
        const bool branch_taken_0x179a28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x179A2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x179a28) {
            ctx->pc = 0x179A44u;
            goto label_179a44;
        }
    }
    ctx->pc = 0x179A30u;
label_179a30:
    // 0x179a30: 0x214102a
    ctx->pc = 0x179a30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 20)));
    // 0x179a34: 0x1440ffec
    ctx->pc = 0x179A34u;
    {
        const bool branch_taken_0x179a34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x179A38u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294943784));
        if (branch_taken_0x179a34) {
            ctx->pc = 0x1799E8u;
            goto label_1799e8;
        }
    }
    ctx->pc = 0x179A3Cu;
label_179a3c:
    // 0x179a3c: 0xae400004
    ctx->pc = 0x179a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x179a40: 0xae400000
    ctx->pc = 0x179a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_179a44:
    // 0x179a44: 0xdfbf0070
    ctx->pc = 0x179a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x179a48: 0xdfb60060
    ctx->pc = 0x179a48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x179a4c: 0xdfb50050
    ctx->pc = 0x179a4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179a50: 0xdfb40040
    ctx->pc = 0x179a50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179a54: 0xdfb30030
    ctx->pc = 0x179a54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179a58: 0xdfb20020
    ctx->pc = 0x179a58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179a5c: 0xdfb10010
    ctx->pc = 0x179a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179a60: 0xdfb00000
    ctx->pc = 0x179a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179a64: 0x3e00008
    ctx->pc = 0x179A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179A68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1799E8u: goto label_1799e8;
            case 0x179A30u: goto label_179a30;
            case 0x179A3Cu: goto label_179a3c;
            case 0x179A44u: goto label_179a44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179A6Cu;
}
