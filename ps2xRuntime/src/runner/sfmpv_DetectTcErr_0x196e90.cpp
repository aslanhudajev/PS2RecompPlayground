#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_DetectTcErr
// Address: 0x196e90 - 0x196f30
void sfmpv_DetectTcErr_0x196e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_DetectTcErr");


    ctx->pc = 0x196e90u;

    // 0x196e90: 0x27bdffa0
    ctx->pc = 0x196e90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x196e94: 0xffb10040
    ctx->pc = 0x196e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x196e98: 0xffbf0050
    ctx->pc = 0x196e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x196e9c: 0x80882d
    ctx->pc = 0x196e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ea0: 0xffb00030
    ctx->pc = 0x196ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x196ea4: 0x8e220ad4
    ctx->pc = 0x196ea4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2772)));
    // 0x196ea8: 0x14400003
    ctx->pc = 0x196EA8u;
    {
        const bool branch_taken_0x196ea8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x196EACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196ea8) {
            ctx->pc = 0x196EB8u;
            goto label_196eb8;
        }
    }
    ctx->pc = 0x196EB0u;
    // 0x196eb0: 0x1000001a
    ctx->pc = 0x196EB0u;
    {
        const bool branch_taken_0x196eb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196EB4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196eb0) {
            ctx->pc = 0x196F1Cu;
            goto label_196f1c;
        }
    }
    ctx->pc = 0x196EB8u;
label_196eb8:
    // 0x196eb8: 0xc065d1c
    ctx->pc = 0x196EB8u;
    SET_GPR_U32(ctx, 31, 0x196EC0u);
    ctx->pc = 0x196EBCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197470u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_ReadTcode_0x197470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196EC0u; }
        else if (ctx->pc != 0x196EC0u) { ctx->pc = 0x196EC0u; }
    }
    if (ctx->pc != 0x196EC0u) { return; }
    ctx->pc = 0x196EC0u;
    // 0x196ec0: 0x27b00024
    ctx->pc = 0x196ec0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 36));
    // 0x196ec4: 0x3a0202d
    ctx->pc = 0x196ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ec8: 0x27a50020
    ctx->pc = 0x196ec8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x196ecc: 0xc0678c2
    ctx->pc = 0x196ECCu;
    SET_GPR_U32(ctx, 31, 0x196ED4u);
    ctx->pc = 0x196ED0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19E308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_Tc2Time_0x19e308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196ED4u; }
        else if (ctx->pc != 0x196ED4u) { ctx->pc = 0x196ED4u; }
    }
    if (ctx->pc != 0x196ED4u) { return; }
    ctx->pc = 0x196ED4u;
    // 0x196ed4: 0x200302d
    ctx->pc = 0x196ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ed8: 0x26240ad8
    ctx->pc = 0x196ed8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 2776));
    // 0x196edc: 0xc0678c2
    ctx->pc = 0x196EDCu;
    SET_GPR_U32(ctx, 31, 0x196EE4u);
    ctx->pc = 0x196EE0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 40));
    ctx->pc = 0x19E308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_Tc2Time_0x19e308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196EE4u; }
        else if (ctx->pc != 0x196EE4u) { ctx->pc = 0x196EE4u; }
    }
    if (ctx->pc != 0x196EE4u) { return; }
    ctx->pc = 0x196EE4u;
    // 0x196ee4: 0x220202d
    ctx->pc = 0x196ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ee8: 0xc0674c2
    ctx->pc = 0x196EE8u;
    SET_GPR_U32(ctx, 31, 0x196EF0u);
    ctx->pc = 0x196EECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 53));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196EF0u; }
        else if (ctx->pc != 0x196EF0u) { ctx->pc = 0x196EF0u; }
    }
    if (ctx->pc != 0x196EF0u) { return; }
    ctx->pc = 0x196EF0u;
    // 0x196ef0: 0x8fa60020
    ctx->pc = 0x196ef0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196ef4: 0x8fa50028
    ctx->pc = 0x196ef4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x196ef8: 0x8fa30024
    ctx->pc = 0x196ef8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x196efc: 0xa6202a
    ctx->pc = 0x196efcu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x196f00: 0x14800003
    ctx->pc = 0x196F00u;
    {
        const bool branch_taken_0x196f00 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x196F04u;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
        if (branch_taken_0x196f00) {
            ctx->pc = 0x196F10u;
            goto label_196f10;
        }
    }
    ctx->pc = 0x196F08u;
    // 0x196f08: 0x10000004
    ctx->pc = 0x196F08u;
    {
        const bool branch_taken_0x196f08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196F0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x196f08) {
            ctx->pc = 0x196F1Cu;
            goto label_196f1c;
        }
    }
    ctx->pc = 0x196F10u;
label_196f10:
    // 0x196f10: 0xa21021
    ctx->pc = 0x196f10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x196f14: 0xc2102a
    ctx->pc = 0x196f14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x196f18: 0x38420001
    ctx->pc = 0x196f18u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
label_196f1c:
    // 0x196f1c: 0xdfbf0050
    ctx->pc = 0x196f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x196f20: 0xdfb10040
    ctx->pc = 0x196f20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196f24: 0xdfb00030
    ctx->pc = 0x196f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196f28: 0x3e00008
    ctx->pc = 0x196F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196F2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196EB8u: goto label_196eb8;
            case 0x196F10u: goto label_196f10;
            case 0x196F1Cu: goto label_196f1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196F30u;
}
