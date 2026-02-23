#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: pflt_put_sig
// Address: 0x16edf0 - 0x16eec4
void pflt_put_sig_0x16edf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("pflt_put_sig");


    ctx->pc = 0x16edf0u;

    // 0x16edf0: 0x63400
    ctx->pc = 0x16edf0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 16));
    // 0x16edf4: 0x80502d
    ctx->pc = 0x16edf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16edf8: 0xa0382d
    ctx->pc = 0x16edf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16edfc: 0x14e0000e
    ctx->pc = 0x16EDFCu;
    {
        const bool branch_taken_0x16edfc = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x16EE00u;
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 6), 16));
        if (branch_taken_0x16edfc) {
            ctx->pc = 0x16EE38u;
            goto label_16ee38;
        }
    }
    ctx->pc = 0x16EE04u;
    // 0x16ee04: 0x8d460014
    ctx->pc = 0x16ee04u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x16ee08: 0xe6102a
    ctx->pc = 0x16ee08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x16ee0c: 0x10400009
    ctx->pc = 0x16EE0Cu;
    {
        const bool branch_taken_0x16ee0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EE10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ee0c) {
            ctx->pc = 0x16EE34u;
            goto label_16ee34;
        }
    }
    ctx->pc = 0x16EE14u;
    // 0x16ee14: 0x25450018
    ctx->pc = 0x16ee14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 10), 24));
label_16ee18:
    // 0x16ee18: 0x41040
    ctx->pc = 0x16ee18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x16ee1c: 0xa21021
    ctx->pc = 0x16ee1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16ee20: 0x24840001
    ctx->pc = 0x16ee20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x16ee24: 0xa4400000
    ctx->pc = 0x16ee24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x16ee28: 0x86182a
    ctx->pc = 0x16ee28u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 6)));
    // 0x16ee2c: 0x1460fffa
    ctx->pc = 0x16EE2Cu;
    {
        const bool branch_taken_0x16ee2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x16ee2c) {
            ctx->pc = 0x16EE18u;
            goto label_16ee18;
        }
    }
    ctx->pc = 0x16EE34u;
label_16ee34:
    // 0x16ee34: 0xad400078
    ctx->pc = 0x16ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 120), GPR_U32(ctx, 0));
label_16ee38:
    // 0x16ee38: 0x11400020
    ctx->pc = 0x16EE38u;
    {
        const bool branch_taken_0x16ee38 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EE3Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294934528));
        if (branch_taken_0x16ee38) {
            ctx->pc = 0x16EEBCu;
            goto label_16eebc;
        }
    }
    ctx->pc = 0x16EE40u;
    // 0x16ee40: 0x85460008
    ctx->pc = 0x16ee40u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x16ee44: 0x3c05ffff
    ctx->pc = 0x16ee44u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x16ee48: 0x85420004
    ctx->pc = 0x16ee48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x16ee4c: 0x34a57fff
    ctx->pc = 0x16ee4cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 32767));
    // 0x16ee50: 0x85430006
    ctx->pc = 0x16ee50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x16ee54: 0x8548000a
    ctx->pc = 0x16ee54u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 10)));
    // 0x16ee58: 0x461018
    ctx->pc = 0x16ee58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x16ee5c: 0x24097fff
    ctx->pc = 0x16ee5cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 32767));
    // 0x16ee60: 0x73040
    ctx->pc = 0x16ee60u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 1));
    // 0x16ee64: 0x681818
    ctx->pc = 0x16ee64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x16ee68: 0x8d470078
    ctx->pc = 0x16ee68u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 10), 120)));
    // 0x16ee6c: 0x1463021
    ctx->pc = 0x16ee6cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x16ee70: 0x21303
    ctx->pc = 0x16ee70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x16ee74: 0x1621023
    ctx->pc = 0x16ee74u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x16ee78: 0x31b03
    ctx->pc = 0x16ee78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x16ee7c: 0x431023
    ctx->pc = 0x16ee7cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ee80: 0xa2282a
    ctx->pc = 0x16ee80u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x16ee84: 0x45200b
    ctx->pc = 0x16ee84u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    // 0x16ee88: 0x124182a
    ctx->pc = 0x16ee88u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 4)));
    // 0x16ee8c: 0x123200b
    ctx->pc = 0x16ee8cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 9));
    // 0x16ee90: 0x41400
    ctx->pc = 0x16ee90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 16));
    // 0x16ee94: 0x21403
    ctx->pc = 0x16ee94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16ee98: 0x4420001
    ctx->pc = 0x16EE98u;
    {
        const bool branch_taken_0x16ee98 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16ee98) {
            ctx->pc = 0x16EE9Cu;
            SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->pc = 0x16EEA0u;
            goto label_16eea0;
        }
    }
    ctx->pc = 0x16EEA0u;
label_16eea0:
    // 0x16eea0: 0xe2382a
    ctx->pc = 0x16eea0u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
    // 0x16eea4: 0x10e00002
    ctx->pc = 0x16EEA4u;
    {
        const bool branch_taken_0x16eea4 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EEA8u;
        WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x16eea4) {
            ctx->pc = 0x16EEB0u;
            goto label_16eeb0;
        }
    }
    ctx->pc = 0x16EEACu;
    // 0x16eeac: 0xad420078
    ctx->pc = 0x16eeacu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 120), GPR_U32(ctx, 2));
label_16eeb0:
    // 0x16eeb0: 0x95420008
    ctx->pc = 0x16eeb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x16eeb4: 0xa54b0008
    ctx->pc = 0x16eeb4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 8), (uint16_t)GPR_U32(ctx, 11));
    // 0x16eeb8: 0xa542000a
    ctx->pc = 0x16eeb8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 10), (uint16_t)GPR_U32(ctx, 2));
label_16eebc:
    // 0x16eebc: 0x3e00008
    ctx->pc = 0x16EEBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EE18u: goto label_16ee18;
            case 0x16EE34u: goto label_16ee34;
            case 0x16EE38u: goto label_16ee38;
            case 0x16EEA0u: goto label_16eea0;
            case 0x16EEB0u: goto label_16eeb0;
            case 0x16EEBCu: goto label_16eebc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EEC4u;
}
