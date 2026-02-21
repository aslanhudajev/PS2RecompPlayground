#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sendSortObjTex
// Address: 0x2c7eb0 - 0x2c7f98
void sendSortObjTex_0x2c7eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c7eb0u;

    // 0x2c7eb0: 0x27bdff80
    ctx->pc = 0x2c7eb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c7eb4: 0xffbf0070
    ctx->pc = 0x2c7eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c7eb8: 0xffb60060
    ctx->pc = 0x2c7eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2c7ebc: 0xffb50050
    ctx->pc = 0x2c7ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2c7ec0: 0xffb40040
    ctx->pc = 0x2c7ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c7ec4: 0xffb30030
    ctx->pc = 0x2c7ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c7ec8: 0xffb20020
    ctx->pc = 0x2c7ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c7ecc: 0xffb10010
    ctx->pc = 0x2c7eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c7ed0: 0xffb00000
    ctx->pc = 0x2c7ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c7ed4: 0x80902d
    ctx->pc = 0x2c7ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7ed8: 0xc0982d
    ctx->pc = 0x2c7ed8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7edc: 0x240802d
    ctx->pc = 0x2c7edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7ee0: 0x24020050
    ctx->pc = 0x2c7ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x2c7ee4: 0x2021818
    ctx->pc = 0x2c7ee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c7ee8: 0x658821
    ctx->pc = 0x2c7ee8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c7eec: 0x2416000c
    ctx->pc = 0x2c7eecu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c7ef0: 0x2415000e
    ctx->pc = 0x2c7ef0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c7ef4: 0x1000000b
    ctx->pc = 0x2C7EF4u;
    {
        const bool branch_taken_0x2c7ef4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7EF8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2c7ef4) {
            ctx->pc = 0x2C7F24u;
            goto label_2c7f24;
        }
    }
    ctx->pc = 0x2C7EFCu;
    // 0x2c7efc: 0x0
    ctx->pc = 0x2c7efcu;
    // NOP
label_2c7f00:
    // 0x2c7f00: 0x80820052
    ctx->pc = 0x2c7f00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x2c7f04: 0x54540006
    ctx->pc = 0x2C7F04u;
    {
        const bool branch_taken_0x2c7f04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        if (branch_taken_0x2c7f04) {
            ctx->pc = 0x2C7F08u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2C7F20u;
            goto label_2c7f20;
        }
    }
    ctx->pc = 0x2C7F0Cu;
    // 0x2c7f0c: 0xc0af69e
    ctx->pc = 0x2C7F0Cu;
    SET_GPR_U32(ctx, 31, 0x2C7F14u);
    ctx->pc = 0x2BDA78u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSendObjTextures_0x2bda78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7F14u; }
    }
    if (ctx->pc != 0x2C7F14u) { return; }
    ctx->pc = 0x2C7F14u;
    // 0x2c7f14: 0x10400016
    ctx->pc = 0x2C7F14u;
    {
        const bool branch_taken_0x2c7f14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7F18u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c7f14) {
            ctx->pc = 0x2C7F70u;
            goto label_2c7f70;
        }
    }
    ctx->pc = 0x2C7F1Cu;
    // 0x2c7f1c: 0x26100001
    ctx->pc = 0x2c7f1cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2c7f20:
    // 0x2c7f20: 0x26310050
    ctx->pc = 0x2c7f20u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 80));
label_2c7f24:
    // 0x2c7f24: 0x213102a
    ctx->pc = 0x2c7f24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 19)));
    // 0x2c7f28: 0x10400011
    ctx->pc = 0x2C7F28u;
    {
        const bool branch_taken_0x2c7f28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7F2Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c7f28) {
            ctx->pc = 0x2C7F70u;
            goto label_2c7f70;
        }
    }
    ctx->pc = 0x2C7F30u;
    // 0x2c7f30: 0x8e220044
    ctx->pc = 0x2c7f30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2c7f34: 0x80420052
    ctx->pc = 0x2c7f34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x2c7f38: 0x54560005
    ctx->pc = 0x2C7F38u;
    {
        const bool branch_taken_0x2c7f38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 22));
        if (branch_taken_0x2c7f38) {
            ctx->pc = 0x2C7F3Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->pc = 0x2C7F50u;
            goto label_2c7f50;
        }
    }
    ctx->pc = 0x2C7F40u;
    // 0x2c7f40: 0x26030001
    ctx->pc = 0x2c7f40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c7f44: 0x2121026
    ctx->pc = 0x2c7f44u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2c7f48: 0x10000008
    ctx->pc = 0x2C7F48u;
    {
        const bool branch_taken_0x2c7f48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7F4Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        if (branch_taken_0x2c7f48) {
            ctx->pc = 0x2C7F6Cu;
            goto label_2c7f6c;
        }
    }
    ctx->pc = 0x2C7F50u;
label_2c7f50:
    // 0x2c7f50: 0x80820052
    ctx->pc = 0x2c7f50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x2c7f54: 0x5455ffea
    ctx->pc = 0x2C7F54u;
    {
        const bool branch_taken_0x2c7f54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 21));
        if (branch_taken_0x2c7f54) {
            ctx->pc = 0x2C7F58u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->pc = 0x2C7F00u;
            goto label_2c7f00;
        }
    }
    ctx->pc = 0x2C7F5Cu;
    // 0x2c7f5c: 0xc0b375e
    ctx->pc = 0x2C7F5Cu;
    SET_GPR_U32(ctx, 31, 0x2C7F64u);
    ctx->pc = 0x2CDD78u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysLoadTex_0x2cdd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7F64u; }
    }
    if (ctx->pc != 0x2C7F64u) { return; }
    ctx->pc = 0x2C7F64u;
    // 0x2c7f64: 0x5440ffee
    ctx->pc = 0x2C7F64u;
    {
        const bool branch_taken_0x2c7f64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c7f64) {
            ctx->pc = 0x2C7F68u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2C7F20u;
            goto label_2c7f20;
        }
    }
    ctx->pc = 0x2C7F6Cu;
label_2c7f6c:
    // 0x2c7f6c: 0x200102d
    ctx->pc = 0x2c7f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7f70:
    // 0x2c7f70: 0xdfbf0070
    ctx->pc = 0x2c7f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c7f74: 0xdfb60060
    ctx->pc = 0x2c7f74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c7f78: 0xdfb50050
    ctx->pc = 0x2c7f78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c7f7c: 0xdfb40040
    ctx->pc = 0x2c7f7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c7f80: 0xdfb30030
    ctx->pc = 0x2c7f80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7f84: 0xdfb20020
    ctx->pc = 0x2c7f84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7f88: 0xdfb10010
    ctx->pc = 0x2c7f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7f8c: 0xdfb00000
    ctx->pc = 0x2c7f8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7f90: 0x3e00008
    ctx->pc = 0x2C7F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7F94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C7F00u: goto label_2c7f00;
            case 0x2C7F20u: goto label_2c7f20;
            case 0x2C7F24u: goto label_2c7f24;
            case 0x2C7F50u: goto label_2c7f50;
            case 0x2C7F6Cu: goto label_2c7f6c;
            case 0x2C7F70u: goto label_2c7f70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C7F98u;
}
