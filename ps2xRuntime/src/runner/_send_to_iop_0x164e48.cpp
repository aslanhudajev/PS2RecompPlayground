#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _send_to_iop
// Address: 0x164e48 - 0x164f78
void _send_to_iop_0x164e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_send_to_iop");


    ctx->pc = 0x164e48u;

    // 0x164e48: 0x27bdfe90
    ctx->pc = 0x164e48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x164e4c: 0x2403001c
    ctx->pc = 0x164e4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x164e50: 0xffb40140
    ctx->pc = 0x164e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x164e54: 0x24020070
    ctx->pc = 0x164e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 112));
    // 0x164e58: 0xffb30130
    ctx->pc = 0x164e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x164e5c: 0x80a02d
    ctx->pc = 0x164e5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164e60: 0xa0982d
    ctx->pc = 0x164e60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164e64: 0x72821018
    ctx->pc = 0x164e64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x164e68: 0x2631818
    ctx->pc = 0x164e68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x164e6c: 0xffb50150
    ctx->pc = 0x164e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x164e70: 0xffb20120
    ctx->pc = 0x164e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x164e74: 0x3c15002e
    ctx->pc = 0x164e74u;
    SET_GPR_U32(ctx, 21, ((uint32_t)46 << 16));
    // 0x164e78: 0xffb00100
    ctx->pc = 0x164e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x164e7c: 0x26b2cc10
    ctx->pc = 0x164e7cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 21), 4294954000));
    // 0x164e80: 0xffbf0160
    ctx->pc = 0x164e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x164e84: 0xffb10110
    ctx->pc = 0x164e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x164e88: 0x628021
    ctx->pc = 0x164e88u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164e8c: 0x2502821
    ctx->pc = 0x164e8cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x164e90: 0xa0102d
    ctx->pc = 0x164e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164e94: 0x8ca4000c
    ctx->pc = 0x164e94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x164e98: 0xc055320
    ctx->pc = 0x164E98u;
    SET_GPR_U32(ctx, 31, 0x164EA0u);
    ctx->pc = 0x164E9Cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x154C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifDmaStat_0x154c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164EA0u; }
        else if (ctx->pc != 0x164EA0u) { ctx->pc = 0x164EA0u; }
    }
    if (ctx->pc != 0x164EA0u) { return; }
    ctx->pc = 0x164EA0u;
    // 0x164ea0: 0x4400008
    ctx->pc = 0x164EA0u;
    {
        const bool branch_taken_0x164ea0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x164EA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x164ea0) {
            ctx->pc = 0x164EC4u;
            goto label_164ec4;
        }
    }
    ctx->pc = 0x164EA8u;
    // 0x164ea8: 0x8c43ab1c
    ctx->pc = 0x164ea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294945564)));
    // 0x164eac: 0x10600029
    ctx->pc = 0x164EACu;
    {
        const bool branch_taken_0x164eac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x164EB0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x164eac) {
            ctx->pc = 0x164F54u;
            goto label_164f54;
        }
    }
    ctx->pc = 0x164EB4u;
    // 0x164eb4: 0xc05114a
    ctx->pc = 0x164EB4u;
    SET_GPR_U32(ctx, 31, 0x164EBCu);
    ctx->pc = 0x164EB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938464));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164EBCu; }
        else if (ctx->pc != 0x164EBCu) { ctx->pc = 0x164EBCu; }
    }
    if (ctx->pc != 0x164EBCu) { return; }
    ctx->pc = 0x164EBCu;
    // 0x164ebc: 0x10000026
    ctx->pc = 0x164EBCu;
    {
        const bool branch_taken_0x164ebc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x164EC0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        if (branch_taken_0x164ebc) {
            ctx->pc = 0x164F58u;
            goto label_164f58;
        }
    }
    ctx->pc = 0x164EC4u;
label_164ec4:
    // 0x164ec4: 0x8e230000
    ctx->pc = 0x164ec4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164ec8: 0x2501021
    ctx->pc = 0x164ec8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x164ecc: 0x8c500008
    ctx->pc = 0x164eccu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x164ed0: 0x220202d
    ctx->pc = 0x164ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ed4: 0x24630001
    ctx->pc = 0x164ed4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x164ed8: 0x26250020
    ctx->pc = 0x164ed8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 32));
    // 0x164edc: 0x30620001
    ctx->pc = 0x164edcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x164ee0: 0xae230000
    ctx->pc = 0x164ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x164ee4: 0x21140
    ctx->pc = 0x164ee4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x164ee8: 0xc05544c
    ctx->pc = 0x164EE8u;
    SET_GPR_U32(ctx, 31, 0x164EF0u);
    ctx->pc = 0x164EECu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x155130u;
    {
        const uint32_t __entryPc = ctx->pc;
        SyncDCache_0x155130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164EF0u; }
        else if (ctx->pc != 0x164EF0u) { ctx->pc = 0x164EF0u; }
    }
    if (ctx->pc != 0x164EF0u) { return; }
    ctx->pc = 0x164EF0u;
    // 0x164ef0: 0x24020020
    ctx->pc = 0x164ef0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x164ef4: 0xafb00004
    ctx->pc = 0x164ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x164ef8: 0xafb10000
    ctx->pc = 0x164ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x164efc: 0x3a0202d
    ctx->pc = 0x164efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f00: 0xafa20008
    ctx->pc = 0x164f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x164f04: 0x24050001
    ctx->pc = 0x164f04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x164f08: 0xc055328
    ctx->pc = 0x164F08u;
    SET_GPR_U32(ctx, 31, 0x164F10u);
    ctx->pc = 0x164F0Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x154CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetDma_0x154ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F10u; }
        else if (ctx->pc != 0x164F10u) { ctx->pc = 0x164F10u; }
    }
    if (ctx->pc != 0x164F10u) { return; }
    ctx->pc = 0x164F10u;
    // 0x164f10: 0x40802d
    ctx->pc = 0x164f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f14: 0x16000008
    ctx->pc = 0x164F14u;
    {
        const bool branch_taken_0x164f14 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x164F18u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
        if (branch_taken_0x164f14) {
            ctx->pc = 0x164F38u;
            goto label_164f38;
        }
    }
    ctx->pc = 0x164F1Cu;
    // 0x164f1c: 0x3c020023
    ctx->pc = 0x164f1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x164f20: 0x8c43ab1c
    ctx->pc = 0x164f20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294945564)));
    // 0x164f24: 0x10600003
    ctx->pc = 0x164F24u;
    {
        const bool branch_taken_0x164f24 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x164F28u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x164f24) {
            ctx->pc = 0x164F34u;
            goto label_164f34;
        }
    }
    ctx->pc = 0x164F2Cu;
    // 0x164f2c: 0xc05114a
    ctx->pc = 0x164F2Cu;
    SET_GPR_U32(ctx, 31, 0x164F34u);
    ctx->pc = 0x164F30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938464));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F34u; }
        else if (ctx->pc != 0x164F34u) { ctx->pc = 0x164F34u; }
    }
    if (ctx->pc != 0x164F34u) { return; }
    ctx->pc = 0x164F34u;
label_164f34:
    // 0x164f34: 0x2403001c
    ctx->pc = 0x164f34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_164f38:
    // 0x164f38: 0x24040070
    ctx->pc = 0x164f38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 112));
    // 0x164f3c: 0x2631818
    ctx->pc = 0x164f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x164f40: 0x72842018
    ctx->pc = 0x164f40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x164f44: 0x26a2cc10
    ctx->pc = 0x164f44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 4294954000));
    // 0x164f48: 0x641821
    ctx->pc = 0x164f48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164f4c: 0x431021
    ctx->pc = 0x164f4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164f50: 0xac50000c
    ctx->pc = 0x164f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
label_164f54:
    // 0x164f54: 0xdfbf0160
    ctx->pc = 0x164f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_164f58:
    // 0x164f58: 0xdfb50150
    ctx->pc = 0x164f58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x164f5c: 0xdfb40140
    ctx->pc = 0x164f5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x164f60: 0xdfb30130
    ctx->pc = 0x164f60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x164f64: 0xdfb20120
    ctx->pc = 0x164f64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x164f68: 0xdfb10110
    ctx->pc = 0x164f68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x164f6c: 0xdfb00100
    ctx->pc = 0x164f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x164f70: 0x3e00008
    ctx->pc = 0x164F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164F74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164EC4u: goto label_164ec4;
            case 0x164F34u: goto label_164f34;
            case 0x164F38u: goto label_164f38;
            case 0x164F54u: goto label_164f54;
            case 0x164F58u: goto label_164f58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164F78u;
}
