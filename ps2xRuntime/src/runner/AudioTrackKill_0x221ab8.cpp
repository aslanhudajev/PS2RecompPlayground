#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTrackKill
// Address: 0x221ab8 - 0x221b84
void AudioTrackKill_0x221ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x221ab8u;

    // 0x221ab8: 0x27bdffc0
    ctx->pc = 0x221ab8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x221abc: 0xffbf0030
    ctx->pc = 0x221abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x221ac0: 0xffb10020
    ctx->pc = 0x221ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x221ac4: 0xffb00010
    ctx->pc = 0x221ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x221ac8: 0x3c020032
    ctx->pc = 0x221ac8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221acc: 0x8c51fe30
    ctx->pc = 0x221accu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294966832)));
    // 0x221ad0: 0x3c020032
    ctx->pc = 0x221ad0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221ad4: 0x8c42fe2c
    ctx->pc = 0x221ad4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966828)));
    // 0x221ad8: 0x14400024
    ctx->pc = 0x221AD8u;
    {
        const bool branch_taken_0x221ad8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221ADCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x221ad8) {
            ctx->pc = 0x221B6Cu;
            goto label_221b6c;
        }
    }
    ctx->pc = 0x221AE0u;
    // 0x221ae0: 0x32021fff
    ctx->pc = 0x221ae0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 8191));
    // 0x221ae4: 0x10400021
    ctx->pc = 0x221AE4u;
    {
        const bool branch_taken_0x221ae4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x221AE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21934));
        if (branch_taken_0x221ae4) {
            ctx->pc = 0x221B6Cu;
            goto label_221b6c;
        }
    }
    ctx->pc = 0x221AECu;
    // 0x221aec: 0xafa20000
    ctx->pc = 0x221aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x221af0: 0x101400
    ctx->pc = 0x221af0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 16));
    // 0x221af4: 0xafa20004
    ctx->pc = 0x221af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x221af8: 0x3c030032
    ctx->pc = 0x221af8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x221afc: 0x24020001
    ctx->pc = 0x221afcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x221b00: 0xac62fe30
    ctx->pc = 0x221b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966832), GPR_U32(ctx, 2));
    // 0x221b04: 0x3c020032
    ctx->pc = 0x221b04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221b08: 0x8c42fd58
    ctx->pc = 0x221b08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x221b0c: 0x14400005
    ctx->pc = 0x221B0Cu;
    {
        const bool branch_taken_0x221b0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221B10u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x221b0c) {
            ctx->pc = 0x221B24u;
            goto label_221b24;
        }
    }
    ctx->pc = 0x221B14u;
    // 0x221b14: 0x3a0202d
    ctx->pc = 0x221b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b18: 0xc088f38
    ctx->pc = 0x221B18u;
    SET_GPR_U32(ctx, 31, 0x221B20u);
    ctx->pc = 0x221B1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x223CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_mput_0x223ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221B20u; }
    }
    if (ctx->pc != 0x221B20u) { return; }
    ctx->pc = 0x221B20u;
    // 0x221b20: 0x182d
    ctx->pc = 0x221b20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221b24:
    // 0x221b24: 0x24040014
    ctx->pc = 0x221b24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    // 0x221b28: 0x3c020032
    ctx->pc = 0x221b28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221b2c: 0x2446fe3c
    ctx->pc = 0x221b2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294966844));
    // 0x221b30: 0x701007
    ctx->pc = 0x221b30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x221b34: 0x0
    ctx->pc = 0x221b34u;
    // NOP
label_221b38:
    // 0x221b38: 0x30420001
    ctx->pc = 0x221b38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x221b3c: 0x10400003
    ctx->pc = 0x221B3Cu;
    {
        const bool branch_taken_0x221b3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x221B40u;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x221b3c) {
            ctx->pc = 0x221B4Cu;
            goto label_221b4c;
        }
    }
    ctx->pc = 0x221B44u;
    // 0x221b44: 0xa61021
    ctx->pc = 0x221b44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x221b48: 0xac400000
    ctx->pc = 0x221b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_221b4c:
    // 0x221b4c: 0x24630001
    ctx->pc = 0x221b4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x221b50: 0x2c62000c
    ctx->pc = 0x221b50u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 12));
    // 0x221b54: 0x1440fff8
    ctx->pc = 0x221B54u;
    {
        const bool branch_taken_0x221b54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221B58u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
        if (branch_taken_0x221b54) {
            ctx->pc = 0x221B38u;
            goto label_221b38;
        }
    }
    ctx->pc = 0x221B5Cu;
    // 0x221b5c: 0x16200004
    ctx->pc = 0x221B5Cu;
    {
        const bool branch_taken_0x221b5c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x221B60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x221b5c) {
            ctx->pc = 0x221B70u;
            goto label_221b70;
        }
    }
    ctx->pc = 0x221B64u;
    // 0x221b64: 0x3c020032
    ctx->pc = 0x221b64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221b68: 0xac40fe30
    ctx->pc = 0x221b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966832), GPR_U32(ctx, 0));
label_221b6c:
    // 0x221b6c: 0x102d
    ctx->pc = 0x221b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221b70:
    // 0x221b70: 0xdfbf0030
    ctx->pc = 0x221b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221b74: 0xdfb10020
    ctx->pc = 0x221b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221b78: 0xdfb00010
    ctx->pc = 0x221b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221b7c: 0x3e00008
    ctx->pc = 0x221B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221B80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221B24u: goto label_221b24;
            case 0x221B38u: goto label_221b38;
            case 0x221B4Cu: goto label_221b4c;
            case 0x221B6Cu: goto label_221b6c;
            case 0x221B70u: goto label_221b70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x221B84u;
}
