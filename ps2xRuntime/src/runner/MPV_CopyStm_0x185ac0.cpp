#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_CopyStm
// Address: 0x185ac0 - 0x185bac
void MPV_CopyStm_0x185ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_CopyStm");


    ctx->pc = 0x185ac0u;

    // 0x185ac0: 0x27bdff80
    ctx->pc = 0x185ac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x185ac4: 0x182d
    ctx->pc = 0x185ac4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ac8: 0xffb00000
    ctx->pc = 0x185ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x185acc: 0xa0802d
    ctx->pc = 0x185accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ad0: 0xffb30030
    ctx->pc = 0x185ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x185ad4: 0xffb50050
    ctx->pc = 0x185ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x185ad8: 0x2069821
    ctx->pc = 0x185ad8u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x185adc: 0xffb10010
    ctx->pc = 0x185adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x185ae0: 0xe0a82d
    ctx->pc = 0x185ae0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ae4: 0xffbf0070
    ctx->pc = 0x185ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x185ae8: 0x80882d
    ctx->pc = 0x185ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185aec: 0xffb60060
    ctx->pc = 0x185aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x185af0: 0x213102b
    ctx->pc = 0x185af0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x185af4: 0xffb40040
    ctx->pc = 0x185af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x185af8: 0x10400021
    ctx->pc = 0x185AF8u;
    {
        const bool branch_taken_0x185af8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x185AFCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        if (branch_taken_0x185af8) {
            ctx->pc = 0x185B80u;
            goto label_185b80;
        }
    }
    ctx->pc = 0x185B00u;
    // 0x185b00: 0x24120001
    ctx->pc = 0x185b00u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x185b04: 0x24140002
    ctx->pc = 0x185b04u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
    // 0x185b08: 0x24160003
    ctx->pc = 0x185b08u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 3));
    // 0x185b0c: 0x82020000
    ctx->pc = 0x185b0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_185b10:
    // 0x185b10: 0x26100001
    ctx->pc = 0x185b10u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x185b14: 0xa2220000
    ctx->pc = 0x185b14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x185b18: 0x10720009
    ctx->pc = 0x185B18u;
    {
        const bool branch_taken_0x185b18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 18));
        ctx->pc = 0x185B1Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x185b18) {
            ctx->pc = 0x185B40u;
            goto label_185b40;
        }
    }
    ctx->pc = 0x185B20u;
    // 0x185b20: 0x50600014
    ctx->pc = 0x185B20u;
    {
        const bool branch_taken_0x185b20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x185b20) {
            ctx->pc = 0x185B24u;
            if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 18));
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185B28u;
    // 0x185b28: 0x10740008
    ctx->pc = 0x185B28u;
    {
        const bool branch_taken_0x185b28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 20));
        if (branch_taken_0x185b28) {
            ctx->pc = 0x185B4Cu;
            goto label_185b4c;
        }
    }
    ctx->pc = 0x185B30u;
    // 0x185b30: 0x1076000a
    ctx->pc = 0x185B30u;
    {
        const bool branch_taken_0x185b30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 22));
        ctx->pc = 0x185B34u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        if (branch_taken_0x185b30) {
            ctx->pc = 0x185B5Cu;
            goto label_185b5c;
        }
    }
    ctx->pc = 0x185B38u;
    // 0x185b38: 0x1000000f
    ctx->pc = 0x185B38u;
    {
        const bool branch_taken_0x185b38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x185b38) {
            ctx->pc = 0x185B78u;
            goto label_185b78;
        }
    }
    ctx->pc = 0x185B40u;
label_185b40:
    // 0x185b40: 0x280182d
    ctx->pc = 0x185b40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b44: 0x1000000b
    ctx->pc = 0x185B44u;
    {
        const bool branch_taken_0x185b44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185B48u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
        if (branch_taken_0x185b44) {
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185B4Cu;
label_185b4c:
    // 0x185b4c: 0x14520009
    ctx->pc = 0x185B4Cu;
    {
        const bool branch_taken_0x185b4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x185B50u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
        if (branch_taken_0x185b4c) {
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185B54u;
    // 0x185b54: 0x10000007
    ctx->pc = 0x185B54u;
    {
        const bool branch_taken_0x185b54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185B58u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x185b54) {
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185B5Cu;
label_185b5c:
    // 0x185b5c: 0xc061610
    ctx->pc = 0x185B5Cu;
    SET_GPR_U32(ctx, 31, 0x185B64u);
    ctx->pc = 0x185B60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294967292));
    ctx->pc = 0x185840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_CheckDelim_0x185840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B64u; }
        else if (ctx->pc != 0x185B64u) { ctx->pc = 0x185B64u; }
    }
    if (ctx->pc != 0x185B64u) { return; }
    ctx->pc = 0x185B64u;
    // 0x185b64: 0x2a21024
    ctx->pc = 0x185b64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x185b68: 0x14400006
    ctx->pc = 0x185B68u;
    {
        const bool branch_taken_0x185b68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185B6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x185b68) {
            ctx->pc = 0x185B84u;
            goto label_185b84;
        }
    }
    ctx->pc = 0x185B70u;
    // 0x185b70: 0x182d
    ctx->pc = 0x185b70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185b74:
    // 0x185b74: 0x213102b
    ctx->pc = 0x185b74u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_185b78:
    // 0x185b78: 0x5440ffe5
    ctx->pc = 0x185B78u;
    {
        const bool branch_taken_0x185b78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x185b78) {
            ctx->pc = 0x185B7Cu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x185B10u;
            goto label_185b10;
        }
    }
    ctx->pc = 0x185B80u;
label_185b80:
    // 0x185b80: 0x200102d
    ctx->pc = 0x185b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_185b84:
    // 0x185b84: 0xdfbf0070
    ctx->pc = 0x185b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x185b88: 0xdfb60060
    ctx->pc = 0x185b88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185b8c: 0xdfb50050
    ctx->pc = 0x185b8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185b90: 0xdfb40040
    ctx->pc = 0x185b90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185b94: 0xdfb30030
    ctx->pc = 0x185b94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185b98: 0xdfb20020
    ctx->pc = 0x185b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185b9c: 0xdfb10010
    ctx->pc = 0x185b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185ba0: 0xdfb00000
    ctx->pc = 0x185ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185ba4: 0x3e00008
    ctx->pc = 0x185BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185BA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185B10u: goto label_185b10;
            case 0x185B40u: goto label_185b40;
            case 0x185B4Cu: goto label_185b4c;
            case 0x185B5Cu: goto label_185b5c;
            case 0x185B74u: goto label_185b74;
            case 0x185B78u: goto label_185b78;
            case 0x185B80u: goto label_185b80;
            case 0x185B84u: goto label_185b84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x185BACu;
}
