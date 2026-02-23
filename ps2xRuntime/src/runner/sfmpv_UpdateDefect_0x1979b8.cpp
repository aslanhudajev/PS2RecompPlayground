#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_UpdateDefect
// Address: 0x1979b8 - 0x197a7c
void sfmpv_UpdateDefect_0x1979b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_UpdateDefect");


    ctx->pc = 0x1979b8u;

    // 0x1979b8: 0x27bdffa0
    ctx->pc = 0x1979b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1979bc: 0xffb30040
    ctx->pc = 0x1979bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1979c0: 0xffb20030
    ctx->pc = 0x1979c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1979c4: 0xa0982d
    ctx->pc = 0x1979c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979c8: 0xffb10020
    ctx->pc = 0x1979c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1979cc: 0xc0902d
    ctx->pc = 0x1979ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979d0: 0xffbf0050
    ctx->pc = 0x1979d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1979d4: 0x24913740
    ctx->pc = 0x1979d4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 14144));
    // 0x1979d8: 0xffb00010
    ctx->pc = 0x1979d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1979dc: 0x8e30002c
    ctx->pc = 0x1979dcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1979e0: 0x8e22007c
    ctx->pc = 0x1979e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1979e4: 0x1040000f
    ctx->pc = 0x1979E4u;
    {
        const bool branch_taken_0x1979e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1979E8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 14144)));
        if (branch_taken_0x1979e4) {
            ctx->pc = 0x197A24u;
            goto label_197a24;
        }
    }
    ctx->pc = 0x1979ECu;
    // 0x1979ec: 0x60202d
    ctx->pc = 0x1979ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979f0: 0x3a0282d
    ctx->pc = 0x1979f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979f4: 0xc06196a
    ctx->pc = 0x1979F4u;
    SET_GPR_U32(ctx, 31, 0x1979FCu);
    ctx->pc = 0x1979F8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x1865A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_GetLinkFlg_0x1865a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979FCu; }
        else if (ctx->pc != 0x1979FCu) { ctx->pc = 0x1979FCu; }
    }
    if (ctx->pc != 0x1979FCu) { return; }
    ctx->pc = 0x1979FCu;
    // 0x1979fc: 0x8fa40000
    ctx->pc = 0x1979fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197a00: 0x14800006
    ctx->pc = 0x197A00u;
    {
        const bool branch_taken_0x197a00 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x197A04u;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x197a00) {
            ctx->pc = 0x197A1Cu;
            goto label_197a1c;
        }
    }
    ctx->pc = 0x197A08u;
    // 0x197a08: 0x8fa20004
    ctx->pc = 0x197a08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x197a0c: 0x24030002
    ctx->pc = 0x197a0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x197a10: 0x38420001
    ctx->pc = 0x197a10u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x197a14: 0x62800a
    ctx->pc = 0x197a14u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x197a18: 0x38830001
    ctx->pc = 0x197a18u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 4), 1));
label_197a1c:
    // 0x197a1c: 0x24020005
    ctx->pc = 0x197a1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x197a20: 0x43800a
    ctx->pc = 0x197a20u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
label_197a24:
    // 0x197a24: 0x24020001
    ctx->pc = 0x197a24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x197a28: 0x56420006
    ctx->pc = 0x197A28u;
    {
        const bool branch_taken_0x197a28 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x197a28) {
            ctx->pc = 0x197A2Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x197A44u;
            goto label_197a44;
        }
    }
    ctx->pc = 0x197A30u;
    // 0x197a30: 0x8e620018
    ctx->pc = 0x197a30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x197a34: 0x24030002
    ctx->pc = 0x197a34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x197a38: 0x2442ffff
    ctx->pc = 0x197a38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x197a3c: 0x10000006
    ctx->pc = 0x197A3Cu;
    {
        const bool branch_taken_0x197a3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197A40u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        if (branch_taken_0x197a3c) {
            ctx->pc = 0x197A58u;
            goto label_197a58;
        }
    }
    ctx->pc = 0x197A44u;
label_197a44:
    // 0x197a44: 0x16020003
    ctx->pc = 0x197A44u;
    {
        const bool branch_taken_0x197a44 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x197A48u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x197a44) {
            ctx->pc = 0x197A54u;
            goto label_197a54;
        }
    }
    ctx->pc = 0x197A4Cu;
    // 0x197a4c: 0x10000003
    ctx->pc = 0x197A4Cu;
    {
        const bool branch_taken_0x197a4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197A50u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x197a4c) {
            ctx->pc = 0x197A5Cu;
            goto label_197a5c;
        }
    }
    ctx->pc = 0x197A54u;
label_197a54:
    // 0x197a54: 0x3a020003
    ctx->pc = 0x197a54u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), 3));
label_197a58:
    // 0x197a58: 0x62800a
    ctx->pc = 0x197a58u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
label_197a5c:
    // 0x197a5c: 0xae30002c
    ctx->pc = 0x197a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
    // 0x197a60: 0xdfbf0050
    ctx->pc = 0x197a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197a64: 0xdfb30040
    ctx->pc = 0x197a64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197a68: 0xdfb20030
    ctx->pc = 0x197a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197a6c: 0xdfb10020
    ctx->pc = 0x197a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197a70: 0xdfb00010
    ctx->pc = 0x197a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197a74: 0x3e00008
    ctx->pc = 0x197A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197A78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197A1Cu: goto label_197a1c;
            case 0x197A24u: goto label_197a24;
            case 0x197A44u: goto label_197a44;
            case 0x197A54u: goto label_197a54;
            case 0x197A58u: goto label_197a58;
            case 0x197A5Cu: goto label_197a5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197A7Cu;
}
