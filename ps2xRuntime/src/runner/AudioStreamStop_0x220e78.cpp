#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioStreamStop
// Address: 0x220e78 - 0x220fa0
void AudioStreamStop_0x220e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x220e78u;

    // 0x220e78: 0x27bdffb0
    ctx->pc = 0x220e78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x220e7c: 0xffbf0040
    ctx->pc = 0x220e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x220e80: 0xffb30030
    ctx->pc = 0x220e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x220e84: 0xffb20020
    ctx->pc = 0x220e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x220e88: 0xffb10010
    ctx->pc = 0x220e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x220e8c: 0xffb00000
    ctx->pc = 0x220e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220e90: 0x3c02003a
    ctx->pc = 0x220e90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x220e94: 0x8c5222f8
    ctx->pc = 0x220e94u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
    // 0x220e98: 0x3c020032
    ctx->pc = 0x220e98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220e9c: 0x8c42fd58
    ctx->pc = 0x220e9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x220ea0: 0x14400039
    ctx->pc = 0x220EA0u;
    {
        const bool branch_taken_0x220ea0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x220EA4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x220ea0) {
            ctx->pc = 0x220F88u;
            goto label_220f88;
        }
    }
    ctx->pc = 0x220EA8u;
    // 0x220ea8: 0x3c020032
    ctx->pc = 0x220ea8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220eac: 0x8c42fd5c
    ctx->pc = 0x220eacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966620)));
    // 0x220eb0: 0x10400008
    ctx->pc = 0x220EB0u;
    {
        const bool branch_taken_0x220eb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x220EB4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x220eb0) {
            ctx->pc = 0x220ED4u;
            goto label_220ed4;
        }
    }
    ctx->pc = 0x220EB8u;
    // 0x220eb8: 0xdfbf0040
    ctx->pc = 0x220eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x220ebc: 0xdfb30030
    ctx->pc = 0x220ebcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220ec0: 0xdfb20020
    ctx->pc = 0x220ec0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220ec4: 0xdfb10010
    ctx->pc = 0x220ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220ec8: 0xdfb00000
    ctx->pc = 0x220ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220ecc: 0x8089066
    ctx->pc = 0x220ECCu;
    ctx->pc = 0x220ED0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x224198u;
    set_stream_playing_0x224198(rdram, ctx, runtime); return;
    ctx->pc = 0x220ED4u;
label_220ed4:
    // 0x220ed4: 0xc088fa4
    ctx->pc = 0x220ED4u;
    SET_GPR_U32(ctx, 31, 0x220EDCu);
    ctx->pc = 0x220ED8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x223E90u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_stream_stop_0x223e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220EDCu; }
    }
    if (ctx->pc != 0x220EDCu) { return; }
    ctx->pc = 0x220EDCu;
    // 0x220edc: 0x40802d
    ctx->pc = 0x220edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ee0: 0x12110029
    ctx->pc = 0x220EE0u;
    {
        const bool branch_taken_0x220ee0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 17));
        ctx->pc = 0x220EE4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x220ee0) {
            ctx->pc = 0x220F88u;
            goto label_220f88;
        }
    }
    ctx->pc = 0x220EE8u;
    // 0x220ee8: 0x6010009
    ctx->pc = 0x220EE8u;
    {
        const bool branch_taken_0x220ee8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x220EECu;
        SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
        if (branch_taken_0x220ee8) {
            ctx->pc = 0x220F10u;
            goto label_220f10;
        }
    }
    ctx->pc = 0x220EF0u;
    // 0x220ef0: 0xc089066
    ctx->pc = 0x220EF0u;
    SET_GPR_U32(ctx, 31, 0x220EF8u);
    ctx->pc = 0x220EF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x224198u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_stream_playing_0x224198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220EF8u; }
    }
    if (ctx->pc != 0x220EF8u) { return; }
    ctx->pc = 0x220EF8u;
    // 0x220ef8: 0x12110004
    ctx->pc = 0x220EF8u;
    {
        const bool branch_taken_0x220ef8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 17));
        ctx->pc = 0x220EFCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x220ef8) {
            ctx->pc = 0x220F0Cu;
            goto label_220f0c;
        }
    }
    ctx->pc = 0x220F00u;
    // 0x220f00: 0x24846720
    ctx->pc = 0x220f00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26400));
    // 0x220f04: 0xc0b492e
    ctx->pc = 0x220F04u;
    SET_GPR_U32(ctx, 31, 0x220F0Cu);
    ctx->pc = 0x220F08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F0Cu; }
    }
    if (ctx->pc != 0x220F0Cu) { return; }
    ctx->pc = 0x220F0Cu;
label_220f0c:
    // 0x220f0c: 0x3c13003a
    ctx->pc = 0x220f0cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
label_220f10:
    // 0x220f10: 0x3c11003a
    ctx->pc = 0x220f10u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x220f14: 0x10000018
    ctx->pc = 0x220F14u;
    {
        const bool branch_taken_0x220f14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x220F18u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        if (branch_taken_0x220f14) {
            ctx->pc = 0x220F78u;
            goto label_220f78;
        }
    }
    ctx->pc = 0x220F1Cu;
    // 0x220f1c: 0x0
    ctx->pc = 0x220f1cu;
    // NOP
label_220f20:
    // 0x220f20: 0x8e6222f8
    ctx->pc = 0x220f20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8952)));
    // 0x220f24: 0x521023
    ctx->pc = 0x220f24u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x220f28: 0x21040
    ctx->pc = 0x220f28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x220f2c: 0x2c420385
    ctx->pc = 0x220f2cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 901));
    // 0x220f30: 0x14400007
    ctx->pc = 0x220F30u;
    {
        const bool branch_taken_0x220f30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x220F34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10000));
        if (branch_taken_0x220f30) {
            ctx->pc = 0x220F50u;
            goto label_220f50;
        }
    }
    ctx->pc = 0x220F38u;
    // 0x220f38: 0xc0b492e
    ctx->pc = 0x220F38u;
    SET_GPR_U32(ctx, 31, 0x220F40u);
    ctx->pc = 0x220F3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 26432));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F40u; }
    }
    if (ctx->pc != 0x220F40u) { return; }
    ctx->pc = 0x220F40u;
    // 0x220f40: 0xc089066
    ctx->pc = 0x220F40u;
    SET_GPR_U32(ctx, 31, 0x220F48u);
    ctx->pc = 0x220F44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x224198u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_stream_playing_0x224198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F48u; }
    }
    if (ctx->pc != 0x220F48u) { return; }
    ctx->pc = 0x220F48u;
    // 0x220f48: 0x1000000b
    ctx->pc = 0x220F48u;
    {
        const bool branch_taken_0x220f48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x220F4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294956548), GPR_U32(ctx, 0));
        if (branch_taken_0x220f48) {
            ctx->pc = 0x220F78u;
            goto label_220f78;
        }
    }
    ctx->pc = 0x220F50u;
label_220f50:
    // 0x220f50: 0x2403ffff
    ctx->pc = 0x220f50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220f54: 0x0
    ctx->pc = 0x220f54u;
    // NOP
label_220f58:
    // 0x220f58: 0x2442ffff
    ctx->pc = 0x220f58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x220f5c: 0x0
    ctx->pc = 0x220f5cu;
    // NOP
    // 0x220f60: 0x0
    ctx->pc = 0x220f60u;
    // NOP
    // 0x220f64: 0x0
    ctx->pc = 0x220f64u;
    // NOP
    // 0x220f68: 0x0
    ctx->pc = 0x220f68u;
    // NOP
    // 0x220f6c: 0x1443fffa
    ctx->pc = 0x220F6Cu;
    {
        const bool branch_taken_0x220f6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x220f6c) {
            ctx->pc = 0x220F58u;
            goto label_220f58;
        }
    }
    ctx->pc = 0x220F74u;
    // 0x220f74: 0xae00d604
    ctx->pc = 0x220f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294956548), GPR_U32(ctx, 0));
label_220f78:
    // 0x220f78: 0xc089082
    ctx->pc = 0x220F78u;
    SET_GPR_U32(ctx, 31, 0x220F80u);
    ctx->pc = 0x224208u;
    {
        const uint32_t __entryPc = ctx->pc;
        stream_playing_0x224208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F80u; }
    }
    if (ctx->pc != 0x220F80u) { return; }
    ctx->pc = 0x220F80u;
    // 0x220f80: 0x1440ffe7
    ctx->pc = 0x220F80u;
    {
        const bool branch_taken_0x220f80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x220F84u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x220f80) {
            ctx->pc = 0x220F20u;
            goto label_220f20;
        }
    }
    ctx->pc = 0x220F88u;
label_220f88:
    // 0x220f88: 0xdfb30030
    ctx->pc = 0x220f88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220f8c: 0xdfb20020
    ctx->pc = 0x220f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220f90: 0xdfb10010
    ctx->pc = 0x220f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220f94: 0xdfb00000
    ctx->pc = 0x220f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220f98: 0x3e00008
    ctx->pc = 0x220F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220F9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220ED4u: goto label_220ed4;
            case 0x220F0Cu: goto label_220f0c;
            case 0x220F10u: goto label_220f10;
            case 0x220F20u: goto label_220f20;
            case 0x220F50u: goto label_220f50;
            case 0x220F58u: goto label_220f58;
            case 0x220F78u: goto label_220f78;
            case 0x220F88u: goto label_220f88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220FA0u;
}
