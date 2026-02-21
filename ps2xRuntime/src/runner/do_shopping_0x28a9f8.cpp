#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_shopping
// Address: 0x28a9f8 - 0x28b480
void do_shopping_0x28a9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28a9f8u;

label_28a9f8:
    // 0x28a9f8: 0x27bdff40
    ctx->pc = 0x28a9f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
label_28a9fc:
    // 0x28a9fc: 0xffbf00b0
    ctx->pc = 0x28a9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_28aa00:
    // 0x28aa00: 0xffbe00a0
    ctx->pc = 0x28aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_28aa04:
    // 0x28aa04: 0xffb70090
    ctx->pc = 0x28aa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_28aa08:
    // 0x28aa08: 0xffb60080
    ctx->pc = 0x28aa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_28aa0c:
    // 0x28aa0c: 0xffb50070
    ctx->pc = 0x28aa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_28aa10:
    // 0x28aa10: 0xffb40060
    ctx->pc = 0x28aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_28aa14:
    // 0x28aa14: 0xffb30050
    ctx->pc = 0x28aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_28aa18:
    // 0x28aa18: 0xffb20040
    ctx->pc = 0x28aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_28aa1c:
    // 0x28aa1c: 0xffb10030
    ctx->pc = 0x28aa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_28aa20:
    // 0x28aa20: 0xffb00020
    ctx->pc = 0x28aa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_28aa24:
    // 0x28aa24: 0x80882d
    ctx->pc = 0x28aa24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28aa28:
    // 0x28aa28: 0x24032b00
    ctx->pc = 0x28aa28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
label_28aa2c:
    // 0x28aa2c: 0x2231818
    ctx->pc = 0x28aa2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28aa30:
    // 0x28aa30: 0x3c020032
    ctx->pc = 0x28aa30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_28aa34:
    // 0x28aa34: 0x24421bc0
    ctx->pc = 0x28aa34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
label_28aa38:
    // 0x28aa38: 0x628021
    ctx->pc = 0x28aa38u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28aa3c:
    // 0x28aa3c: 0xafa00004
    ctx->pc = 0x28aa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_28aa40:
    // 0x28aa40: 0xafa00008
    ctx->pc = 0x28aa40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_28aa44:
    // 0x28aa44: 0xafa0000c
    ctx->pc = 0x28aa44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_28aa48:
    // 0x28aa48: 0x982d
    ctx->pc = 0x28aa48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28aa4c:
    // 0x28aa4c: 0x3c03003c
    ctx->pc = 0x28aa4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_28aa50:
    // 0x28aa50: 0x24633dc0
    ctx->pc = 0x28aa50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15808));
label_28aa54:
    // 0x28aa54: 0x111080
    ctx->pc = 0x28aa54u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_28aa58:
    // 0x28aa58: 0x431021
    ctx->pc = 0x28aa58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28aa5c:
    // 0x28aa5c: 0x8c430000
    ctx->pc = 0x28aa5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28aa60:
    // 0x28aa60: 0x24020001
    ctx->pc = 0x28aa60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_28aa64:
    // 0x28aa64: 0x40b82d
    ctx->pc = 0x28aa64u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28aa68:
    // 0x28aa68: 0x63b80b
    ctx->pc = 0x28aa68u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 23, GPR_U32(ctx, 3));
label_28aa6c:
    // 0x28aa6c: 0x3c04003c
    ctx->pc = 0x28aa6cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_28aa70:
    // 0x28aa70: 0x24843da0
    ctx->pc = 0x28aa70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15776));
label_28aa74:
    // 0x28aa74: 0x111880
    ctx->pc = 0x28aa74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_28aa78:
    // 0x28aa78: 0x642021
    ctx->pc = 0x28aa78u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28aa7c:
    // 0x28aa7c: 0x3c02003c
    ctx->pc = 0x28aa7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28aa80:
    // 0x28aa80: 0x24423db0
    ctx->pc = 0x28aa80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15792));
label_28aa84:
    // 0x28aa84: 0x621821
    ctx->pc = 0x28aa84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28aa88:
    // 0x28aa88: 0x8e020984
    ctx->pc = 0x28aa88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
label_28aa8c:
    // 0x28aa8c: 0x8c630000
    ctx->pc = 0x28aa8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28aa90:
    // 0x28aa90: 0x431023
    ctx->pc = 0x28aa90u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28aa94:
    // 0x28aa94: 0xac820000
    ctx->pc = 0x28aa94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_28aa98:
    // 0x28aa98: 0x3c02003c
    ctx->pc = 0x28aa98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28aa9c:
    // 0x28aa9c: 0x24423dc0
    ctx->pc = 0x28aa9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15808));
label_28aaa0:
    // 0x28aaa0: 0x119080
    ctx->pc = 0x28aaa0u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 17), 2));
label_28aaa4:
    // 0x28aaa4: 0x242a021
    ctx->pc = 0x28aaa4u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_28aaa8:
    // 0x28aaa8: 0x3c02003c
    ctx->pc = 0x28aaa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28aaac:
    // 0x28aaac: 0x245e3de0
    ctx->pc = 0x28aaacu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 15840));
label_28aab0:
    // 0x28aab0: 0x3c02003c
    ctx->pc = 0x28aab0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28aab4:
    // 0x28aab4: 0x24563da0
    ctx->pc = 0x28aab4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 15776));
label_28aab8:
    // 0x28aab8: 0x3c02003c
    ctx->pc = 0x28aab8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28aabc:
    // 0x28aabc: 0x24553db0
    ctx->pc = 0x28aabcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 15792));
label_28aac0:
    // 0x28aac0: 0x25e1021
    ctx->pc = 0x28aac0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
label_28aac4:
    // 0x28aac4: 0xafa20010
    ctx->pc = 0x28aac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_28aac8:
    // 0x28aac8: 0xc081bee
label_28aacc:
    if (ctx->pc == 0x28AACCu) {
        ctx->pc = 0x28AACCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28AAD0u;
        goto label_28aad0;
    }
    ctx->pc = 0x28AAC8u;
    SET_GPR_U32(ctx, 31, 0x28AAD0u);
    ctx->pc = 0x28AACCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x206FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_down_0x206fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AAD0u; }
    }
    if (ctx->pc != 0x28AAD0u) { return; }
    ctx->pc = 0x28AAD0u;
label_28aad0:
    // 0x28aad0: 0x10400019
label_28aad4:
    if (ctx->pc == 0x28AAD4u) {
        ctx->pc = 0x28AAD8u;
        goto label_28aad8;
    }
    ctx->pc = 0x28AAD0u;
    {
        const bool branch_taken_0x28aad0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28aad0) {
            ctx->pc = 0x28AB38u;
            goto label_28ab38;
        }
    }
    ctx->pc = 0x28AAD8u;
label_28aad8:
    // 0x28aad8: 0x56600006
label_28aadc:
    if (ctx->pc == 0x28AADCu) {
        ctx->pc = 0x28AADCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x28AAE0u;
        goto label_28aae0;
    }
    ctx->pc = 0x28AAD8u;
    {
        const bool branch_taken_0x28aad8 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x28aad8) {
            ctx->pc = 0x28AADCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->pc = 0x28AAF4u;
            goto label_28aaf4;
        }
    }
    ctx->pc = 0x28AAE0u;
label_28aae0:
    // 0x28aae0: 0x220202d
    ctx->pc = 0x28aae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28aae4:
    // 0x28aae4: 0xc097c04
label_28aae8:
    if (ctx->pc == 0x28AAE8u) {
        ctx->pc = 0x28AAE8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28AAECu;
        goto label_28aaec;
    }
    ctx->pc = 0x28AAE4u;
    SET_GPR_U32(ctx, 31, 0x28AAECu);
    ctx->pc = 0x28AAE8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25F010u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioClick2_0x25f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AAECu; }
    }
    if (ctx->pc != 0x28AAECu) { return; }
    ctx->pc = 0x28AAECu;
label_28aaec:
    // 0x28aaec: 0x24130001
    ctx->pc = 0x28aaecu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_28aaf0:
    // 0x28aaf0: 0x8e830000
    ctx->pc = 0x28aaf0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_28aaf4:
    // 0x28aaf4: 0x24620001
    ctx->pc = 0x28aaf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
label_28aaf8:
    // 0x28aaf8: 0x43b80b
    ctx->pc = 0x28aaf8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 23, GPR_U32(ctx, 2));
label_28aafc:
    // 0x28aafc: 0x8e030984
    ctx->pc = 0x28aafcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
label_28ab00:
    // 0x28ab00: 0x24630001
    ctx->pc = 0x28ab00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_28ab04:
    // 0x28ab04: 0xae030984
    ctx->pc = 0x28ab04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2436), GPR_U32(ctx, 3));
label_28ab08:
    // 0x28ab08: 0x112080
    ctx->pc = 0x28ab08u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 2));
label_28ab0c:
    // 0x28ab0c: 0x9e1021
    ctx->pc = 0x28ab0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_28ab10:
    // 0x28ab10: 0x8c420000
    ctx->pc = 0x28ab10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28ab14:
    // 0x28ab14: 0x62182a
    ctx->pc = 0x28ab14u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_28ab18:
    // 0x28ab18: 0x14600007
label_28ab1c:
    if (ctx->pc == 0x28AB1Cu) {
        ctx->pc = 0x28AB1Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->pc = 0x28AB20u;
        goto label_28ab20;
    }
    ctx->pc = 0x28AB18u;
    {
        const bool branch_taken_0x28ab18 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x28AB1Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        if (branch_taken_0x28ab18) {
            ctx->pc = 0x28AB38u;
            goto label_28ab38;
        }
    }
    ctx->pc = 0x28AB20u;
label_28ab20:
    // 0x28ab20: 0xae000984
    ctx->pc = 0x28ab20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2436), GPR_U32(ctx, 0));
label_28ab24:
    // 0x28ab24: 0xac400000
    ctx->pc = 0x28ab24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_28ab28:
    // 0x28ab28: 0x951021
    ctx->pc = 0x28ab28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_28ab2c:
    // 0x28ab2c: 0xac400000
    ctx->pc = 0x28ab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_28ab30:
    // 0x28ab30: 0x24030001
    ctx->pc = 0x28ab30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_28ab34:
    // 0x28ab34: 0xafa3000c
    ctx->pc = 0x28ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_28ab38:
    // 0x28ab38: 0xc081be6
label_28ab3c:
    if (ctx->pc == 0x28AB3Cu) {
        ctx->pc = 0x28AB3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28AB40u;
        goto label_28ab40;
    }
    ctx->pc = 0x28AB38u;
    SET_GPR_U32(ctx, 31, 0x28AB40u);
    ctx->pc = 0x28AB3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x206F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_up_0x206f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AB40u; }
    }
    if (ctx->pc != 0x28AB40u) { return; }
    ctx->pc = 0x28AB40u;
label_28ab40:
    // 0x28ab40: 0x50400020
label_28ab44:
    if (ctx->pc == 0x28AB44u) {
        ctx->pc = 0x28AB44u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
        ctx->pc = 0x28AB48u;
        goto label_28ab48;
    }
    ctx->pc = 0x28AB40u;
    {
        const bool branch_taken_0x28ab40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28ab40) {
            ctx->pc = 0x28AB44u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
            ctx->pc = 0x28ABC4u;
            goto label_28abc4;
        }
    }
    ctx->pc = 0x28AB48u;
label_28ab48:
    // 0x28ab48: 0x56600006
label_28ab4c:
    if (ctx->pc == 0x28AB4Cu) {
        ctx->pc = 0x28AB4Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x28AB50u;
        goto label_28ab50;
    }
    ctx->pc = 0x28AB48u;
    {
        const bool branch_taken_0x28ab48 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x28ab48) {
            ctx->pc = 0x28AB4Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->pc = 0x28AB64u;
            goto label_28ab64;
        }
    }
    ctx->pc = 0x28AB50u;
label_28ab50:
    // 0x28ab50: 0x220202d
    ctx->pc = 0x28ab50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28ab54:
    // 0x28ab54: 0xc097c04
label_28ab58:
    if (ctx->pc == 0x28AB58u) {
        ctx->pc = 0x28AB58u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28AB5Cu;
        goto label_28ab5c;
    }
    ctx->pc = 0x28AB54u;
    SET_GPR_U32(ctx, 31, 0x28AB5Cu);
    ctx->pc = 0x28AB58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x25F010u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioClick2_0x25f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AB5Cu; }
    }
    if (ctx->pc != 0x28AB5Cu) { return; }
    ctx->pc = 0x28AB5Cu;
label_28ab5c:
    // 0x28ab5c: 0x24130001
    ctx->pc = 0x28ab5cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_28ab60:
    // 0x28ab60: 0x8e830000
    ctx->pc = 0x28ab60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_28ab64:
    // 0x28ab64: 0x24620001
    ctx->pc = 0x28ab64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
label_28ab68:
    // 0x28ab68: 0x43b80b
    ctx->pc = 0x28ab68u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 23, GPR_U32(ctx, 2));
label_28ab6c:
    // 0x28ab6c: 0x8e020984
    ctx->pc = 0x28ab6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
label_28ab70:
    // 0x28ab70: 0x2442ffff
    ctx->pc = 0x28ab70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_28ab74:
    // 0x28ab74: 0x4410012
label_28ab78:
    if (ctx->pc == 0x28AB78u) {
        ctx->pc = 0x28AB78u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2436), GPR_U32(ctx, 2));
        ctx->pc = 0x28AB7Cu;
        goto label_28ab7c;
    }
    ctx->pc = 0x28AB74u;
    {
        const bool branch_taken_0x28ab74 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28AB78u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2436), GPR_U32(ctx, 2));
        if (branch_taken_0x28ab74) {
            ctx->pc = 0x28ABC0u;
            goto label_28abc0;
        }
    }
    ctx->pc = 0x28AB7Cu;
label_28ab7c:
    // 0x28ab7c: 0xc0a2a56
label_28ab80:
    if (ctx->pc == 0x28AB80u) {
        ctx->pc = 0x28AB80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28AB84u;
        goto label_28ab84;
    }
    ctx->pc = 0x28AB7Cu;
    SET_GPR_U32(ctx, 31, 0x28AB84u);
    ctx->pc = 0x28AB80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28A958u;
    {
        const uint32_t __entryPc = ctx->pc;
        recalc_afford_idx_0x28a958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AB84u; }
    }
    if (ctx->pc != 0x28AB84u) { return; }
    ctx->pc = 0x28AB84u;
label_28ab84:
    // 0x28ab84: 0x8fa30010
    ctx->pc = 0x28ab84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_28ab88:
    // 0x28ab88: 0x8c620000
    ctx->pc = 0x28ab88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28ab8c:
    // 0x28ab8c: 0x2443ffff
    ctx->pc = 0x28ab8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
label_28ab90:
    // 0x28ab90: 0xae030984
    ctx->pc = 0x28ab90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2436), GPR_U32(ctx, 3));
label_28ab94:
    // 0x28ab94: 0x2562821
    ctx->pc = 0x28ab94u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
label_28ab98:
    // 0x28ab98: 0xaca30000
    ctx->pc = 0x28ab98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_28ab9c:
    // 0x28ab9c: 0x2552021
    ctx->pc = 0x28ab9cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_28aba0:
    // 0x28aba0: 0x2442fff9
    ctx->pc = 0x28aba0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967289));
label_28aba4:
    // 0x28aba4: 0x4410004
label_28aba8:
    if (ctx->pc == 0x28ABA8u) {
        ctx->pc = 0x28ABA8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x28ABACu;
        goto label_28abac;
    }
    ctx->pc = 0x28ABA4u;
    {
        const bool branch_taken_0x28aba4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28ABA8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x28aba4) {
            ctx->pc = 0x28ABB8u;
            goto label_28abb8;
        }
    }
    ctx->pc = 0x28ABACu;
label_28abac:
    // 0x28abac: 0x621023
    ctx->pc = 0x28abacu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28abb0:
    // 0x28abb0: 0xaca20000
    ctx->pc = 0x28abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_28abb4:
    // 0x28abb4: 0xac800000
    ctx->pc = 0x28abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_28abb8:
    // 0x28abb8: 0x24020001
    ctx->pc = 0x28abb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_28abbc:
    // 0x28abbc: 0xafa2000c
    ctx->pc = 0x28abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_28abc0:
    // 0x28abc0: 0x8e040984
    ctx->pc = 0x28abc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
label_28abc4:
    // 0x28abc4: 0x3c020035
    ctx->pc = 0x28abc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28abc8:
    // 0x28abc8: 0x8c43b528
    ctx->pc = 0x28abc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948136)));
label_28abcc:
    // 0x28abcc: 0x24020050
    ctx->pc = 0x28abccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
label_28abd0:
    // 0x28abd0: 0x821018
    ctx->pc = 0x28abd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28abd4:
    // 0x28abd4: 0x431021
    ctx->pc = 0x28abd4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28abd8:
    // 0x28abd8: 0x8c420048
    ctx->pc = 0x28abd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_28abdc:
    // 0x28abdc: 0xafa20000
    ctx->pc = 0x28abdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_28abe0:
    // 0x28abe0: 0x8e021a20
    ctx->pc = 0x28abe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6688)));
label_28abe4:
    // 0x28abe4: 0x8fa30000
    ctx->pc = 0x28abe4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28abe8:
    // 0x28abe8: 0x43102a
    ctx->pc = 0x28abe8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_28abec:
    // 0x28abec: 0x1440ffb6
label_28abf0:
    if (ctx->pc == 0x28ABF0u) {
        ctx->pc = 0x28ABF0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x28ABF4u;
        goto label_28abf4;
    }
    ctx->pc = 0x28ABECu;
    {
        const bool branch_taken_0x28abec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28ABF0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x28abec) {
            ctx->pc = 0x28AAC8u;
            goto label_28aac8;
        }
    }
    ctx->pc = 0x28ABF4u;
label_28abf4:
    // 0x28abf4: 0x111a00
    ctx->pc = 0x28abf4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 8));
label_28abf8:
    // 0x28abf8: 0x431021
    ctx->pc = 0x28abf8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28abfc:
    // 0x28abfc: 0x3c030035
    ctx->pc = 0x28abfcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_28ac00:
    // 0x28ac00: 0x2463bd30
    ctx->pc = 0x28ac00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294950192));
label_28ac04:
    // 0x28ac04: 0x431021
    ctx->pc = 0x28ac04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28ac08:
    // 0x28ac08: 0x8c420000
    ctx->pc = 0x28ac08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28ac0c:
    // 0x28ac0c: 0x1440ffae
label_28ac10:
    if (ctx->pc == 0x28AC10u) {
        ctx->pc = 0x28AC10u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x28AC14u;
        goto label_28ac14;
    }
    ctx->pc = 0x28AC0Cu;
    {
        const bool branch_taken_0x28ac0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28AC10u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x28ac0c) {
            ctx->pc = 0x28AAC8u;
            goto label_28aac8;
        }
    }
    ctx->pc = 0x28AC14u;
label_28ac14:
    // 0x28ac14: 0x24423dc0
    ctx->pc = 0x28ac14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15808));
label_28ac18:
    // 0x28ac18: 0x111880
    ctx->pc = 0x28ac18u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_28ac1c:
    // 0x28ac1c: 0x621821
    ctx->pc = 0x28ac1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28ac20:
    // 0x28ac20: 0x8c620000
    ctx->pc = 0x28ac20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28ac24:
    // 0x28ac24: 0x14400004
label_28ac28:
    if (ctx->pc == 0x28AC28u) {
        ctx->pc = 0x28AC28u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28AC2Cu;
        goto label_28ac2c;
    }
    ctx->pc = 0x28AC24u;
    {
        const bool branch_taken_0x28ac24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28AC28u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28ac24) {
            ctx->pc = 0x28AC38u;
            goto label_28ac38;
        }
    }
    ctx->pc = 0x28AC2Cu;
label_28ac2c:
    // 0x28ac2c: 0x220202d
    ctx->pc = 0x28ac2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28ac30:
    // 0x28ac30: 0xc081c4c
label_28ac34:
    if (ctx->pc == 0x28AC34u) {
        ctx->pc = 0x28AC34u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28AC38u;
        goto label_28ac38;
    }
    ctx->pc = 0x28AC30u;
    SET_GPR_U32(ctx, 31, 0x28AC38u);
    ctx->pc = 0x28AC34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x207130u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_menu_accept_0x207130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AC38u; }
    }
    if (ctx->pc != 0x28AC38u) { return; }
    ctx->pc = 0x28AC38u;
label_28ac38:
    // 0x28ac38: 0x1040013f
label_28ac3c:
    if (ctx->pc == 0x28AC3Cu) {
        ctx->pc = 0x28AC3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x28AC40u;
        goto label_28ac40;
    }
    ctx->pc = 0x28AC38u;
    {
        const bool branch_taken_0x28ac38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AC3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28ac38) {
            ctx->pc = 0x28B138u;
            goto label_28b138;
        }
    }
    ctx->pc = 0x28AC40u;
label_28ac40:
    // 0x28ac40: 0x8e030984
    ctx->pc = 0x28ac40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
label_28ac44:
    // 0x28ac44: 0x8c44b528
    ctx->pc = 0x28ac44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294948136)));
label_28ac48:
    // 0x28ac48: 0x24020050
    ctx->pc = 0x28ac48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
label_28ac4c:
    // 0x28ac4c: 0x621818
    ctx->pc = 0x28ac4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28ac50:
    // 0x28ac50: 0x642021
    ctx->pc = 0x28ac50u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28ac54:
    // 0x28ac54: 0x8e021a20
    ctx->pc = 0x28ac54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6688)));
label_28ac58:
    // 0x28ac58: 0x8c830048
    ctx->pc = 0x28ac58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_28ac5c:
    // 0x28ac5c: 0x43102a
    ctx->pc = 0x28ac5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_28ac60:
    // 0x28ac60: 0x14400131
label_28ac64:
    if (ctx->pc == 0x28AC64u) {
        ctx->pc = 0x28AC64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28AC68u;
        goto label_28ac68;
    }
    ctx->pc = 0x28AC60u;
    {
        const bool branch_taken_0x28ac60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28AC64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28ac60) {
            ctx->pc = 0x28B128u;
            goto label_28b128;
        }
    }
    ctx->pc = 0x28AC68u;
label_28ac68:
    // 0x28ac68: 0xafa20004
    ctx->pc = 0x28ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_28ac6c:
    // 0x28ac6c: 0x8c830044
    ctx->pc = 0x28ac6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_28ac70:
    // 0x28ac70: 0x2c620025
    ctx->pc = 0x28ac70u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 37));
label_28ac74:
    // 0x28ac74: 0x10400007
label_28ac78:
    if (ctx->pc == 0x28AC78u) {
        ctx->pc = 0x28AC78u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x28AC7Cu;
        goto label_28ac7c;
    }
    ctx->pc = 0x28AC74u;
    {
        const bool branch_taken_0x28ac74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AC78u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x28ac74) {
            ctx->pc = 0x28AC94u;
            goto label_28ac94;
        }
    }
    ctx->pc = 0x28AC7Cu;
label_28ac7c:
    // 0x28ac7c: 0x2442d950
    ctx->pc = 0x28ac7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957392));
label_28ac80:
    // 0x28ac80: 0x31880
    ctx->pc = 0x28ac80u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_28ac84:
    // 0x28ac84: 0x621821
    ctx->pc = 0x28ac84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28ac88:
    // 0x28ac88: 0x8c620000
    ctx->pc = 0x28ac88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28ac8c:
    // 0x28ac8c: 0x400008
label_28ac90:
    if (ctx->pc == 0x28AC90u) {
        ctx->pc = 0x28AC94u;
        goto label_28ac94;
    }
    ctx->pc = 0x28AC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A9F8u: goto label_28a9f8;
            case 0x28A9FCu: goto label_28a9fc;
            case 0x28AA00u: goto label_28aa00;
            case 0x28AA04u: goto label_28aa04;
            case 0x28AA08u: goto label_28aa08;
            case 0x28AA0Cu: goto label_28aa0c;
            case 0x28AA10u: goto label_28aa10;
            case 0x28AA14u: goto label_28aa14;
            case 0x28AA18u: goto label_28aa18;
            case 0x28AA1Cu: goto label_28aa1c;
            case 0x28AA20u: goto label_28aa20;
            case 0x28AA24u: goto label_28aa24;
            case 0x28AA28u: goto label_28aa28;
            case 0x28AA2Cu: goto label_28aa2c;
            case 0x28AA30u: goto label_28aa30;
            case 0x28AA34u: goto label_28aa34;
            case 0x28AA38u: goto label_28aa38;
            case 0x28AA3Cu: goto label_28aa3c;
            case 0x28AA40u: goto label_28aa40;
            case 0x28AA44u: goto label_28aa44;
            case 0x28AA48u: goto label_28aa48;
            case 0x28AA4Cu: goto label_28aa4c;
            case 0x28AA50u: goto label_28aa50;
            case 0x28AA54u: goto label_28aa54;
            case 0x28AA58u: goto label_28aa58;
            case 0x28AA5Cu: goto label_28aa5c;
            case 0x28AA60u: goto label_28aa60;
            case 0x28AA64u: goto label_28aa64;
            case 0x28AA68u: goto label_28aa68;
            case 0x28AA6Cu: goto label_28aa6c;
            case 0x28AA70u: goto label_28aa70;
            case 0x28AA74u: goto label_28aa74;
            case 0x28AA78u: goto label_28aa78;
            case 0x28AA7Cu: goto label_28aa7c;
            case 0x28AA80u: goto label_28aa80;
            case 0x28AA84u: goto label_28aa84;
            case 0x28AA88u: goto label_28aa88;
            case 0x28AA8Cu: goto label_28aa8c;
            case 0x28AA90u: goto label_28aa90;
            case 0x28AA94u: goto label_28aa94;
            case 0x28AA98u: goto label_28aa98;
            case 0x28AA9Cu: goto label_28aa9c;
            case 0x28AAA0u: goto label_28aaa0;
            case 0x28AAA4u: goto label_28aaa4;
            case 0x28AAA8u: goto label_28aaa8;
            case 0x28AAACu: goto label_28aaac;
            case 0x28AAB0u: goto label_28aab0;
            case 0x28AAB4u: goto label_28aab4;
            case 0x28AAB8u: goto label_28aab8;
            case 0x28AABCu: goto label_28aabc;
            case 0x28AAC0u: goto label_28aac0;
            case 0x28AAC4u: goto label_28aac4;
            case 0x28AAC8u: goto label_28aac8;
            case 0x28AACCu: goto label_28aacc;
            case 0x28AAD0u: goto label_28aad0;
            case 0x28AAD4u: goto label_28aad4;
            case 0x28AAD8u: goto label_28aad8;
            case 0x28AADCu: goto label_28aadc;
            case 0x28AAE0u: goto label_28aae0;
            case 0x28AAE4u: goto label_28aae4;
            case 0x28AAE8u: goto label_28aae8;
            case 0x28AAECu: goto label_28aaec;
            case 0x28AAF0u: goto label_28aaf0;
            case 0x28AAF4u: goto label_28aaf4;
            case 0x28AAF8u: goto label_28aaf8;
            case 0x28AAFCu: goto label_28aafc;
            case 0x28AB00u: goto label_28ab00;
            case 0x28AB04u: goto label_28ab04;
            case 0x28AB08u: goto label_28ab08;
            case 0x28AB0Cu: goto label_28ab0c;
            case 0x28AB10u: goto label_28ab10;
            case 0x28AB14u: goto label_28ab14;
            case 0x28AB18u: goto label_28ab18;
            case 0x28AB1Cu: goto label_28ab1c;
            case 0x28AB20u: goto label_28ab20;
            case 0x28AB24u: goto label_28ab24;
            case 0x28AB28u: goto label_28ab28;
            case 0x28AB2Cu: goto label_28ab2c;
            case 0x28AB30u: goto label_28ab30;
            case 0x28AB34u: goto label_28ab34;
            case 0x28AB38u: goto label_28ab38;
            case 0x28AB3Cu: goto label_28ab3c;
            case 0x28AB40u: goto label_28ab40;
            case 0x28AB44u: goto label_28ab44;
            case 0x28AB48u: goto label_28ab48;
            case 0x28AB4Cu: goto label_28ab4c;
            case 0x28AB50u: goto label_28ab50;
            case 0x28AB54u: goto label_28ab54;
            case 0x28AB58u: goto label_28ab58;
            case 0x28AB5Cu: goto label_28ab5c;
            case 0x28AB60u: goto label_28ab60;
            case 0x28AB64u: goto label_28ab64;
            case 0x28AB68u: goto label_28ab68;
            case 0x28AB6Cu: goto label_28ab6c;
            case 0x28AB70u: goto label_28ab70;
            case 0x28AB74u: goto label_28ab74;
            case 0x28AB78u: goto label_28ab78;
            case 0x28AB7Cu: goto label_28ab7c;
            case 0x28AB80u: goto label_28ab80;
            case 0x28AB84u: goto label_28ab84;
            case 0x28AB88u: goto label_28ab88;
            case 0x28AB8Cu: goto label_28ab8c;
            case 0x28AB90u: goto label_28ab90;
            case 0x28AB94u: goto label_28ab94;
            case 0x28AB98u: goto label_28ab98;
            case 0x28AB9Cu: goto label_28ab9c;
            case 0x28ABA0u: goto label_28aba0;
            case 0x28ABA4u: goto label_28aba4;
            case 0x28ABA8u: goto label_28aba8;
            case 0x28ABACu: goto label_28abac;
            case 0x28ABB0u: goto label_28abb0;
            case 0x28ABB4u: goto label_28abb4;
            case 0x28ABB8u: goto label_28abb8;
            case 0x28ABBCu: goto label_28abbc;
            case 0x28ABC0u: goto label_28abc0;
            case 0x28ABC4u: goto label_28abc4;
            case 0x28ABC8u: goto label_28abc8;
            case 0x28ABCCu: goto label_28abcc;
            case 0x28ABD0u: goto label_28abd0;
            case 0x28ABD4u: goto label_28abd4;
            case 0x28ABD8u: goto label_28abd8;
            case 0x28ABDCu: goto label_28abdc;
            case 0x28ABE0u: goto label_28abe0;
            case 0x28ABE4u: goto label_28abe4;
            case 0x28ABE8u: goto label_28abe8;
            case 0x28ABECu: goto label_28abec;
            case 0x28ABF0u: goto label_28abf0;
            case 0x28ABF4u: goto label_28abf4;
            case 0x28ABF8u: goto label_28abf8;
            case 0x28ABFCu: goto label_28abfc;
            case 0x28AC00u: goto label_28ac00;
            case 0x28AC04u: goto label_28ac04;
            case 0x28AC08u: goto label_28ac08;
            case 0x28AC0Cu: goto label_28ac0c;
            case 0x28AC10u: goto label_28ac10;
            case 0x28AC14u: goto label_28ac14;
            case 0x28AC18u: goto label_28ac18;
            case 0x28AC1Cu: goto label_28ac1c;
            case 0x28AC20u: goto label_28ac20;
            case 0x28AC24u: goto label_28ac24;
            case 0x28AC28u: goto label_28ac28;
            case 0x28AC2Cu: goto label_28ac2c;
            case 0x28AC30u: goto label_28ac30;
            case 0x28AC34u: goto label_28ac34;
            case 0x28AC38u: goto label_28ac38;
            case 0x28AC3Cu: goto label_28ac3c;
            case 0x28AC40u: goto label_28ac40;
            case 0x28AC44u: goto label_28ac44;
            case 0x28AC48u: goto label_28ac48;
            case 0x28AC4Cu: goto label_28ac4c;
            case 0x28AC50u: goto label_28ac50;
            case 0x28AC54u: goto label_28ac54;
            case 0x28AC58u: goto label_28ac58;
            case 0x28AC5Cu: goto label_28ac5c;
            case 0x28AC60u: goto label_28ac60;
            case 0x28AC64u: goto label_28ac64;
            case 0x28AC68u: goto label_28ac68;
            case 0x28AC6Cu: goto label_28ac6c;
            case 0x28AC70u: goto label_28ac70;
            case 0x28AC74u: goto label_28ac74;
            case 0x28AC78u: goto label_28ac78;
            case 0x28AC7Cu: goto label_28ac7c;
            case 0x28AC80u: goto label_28ac80;
            case 0x28AC84u: goto label_28ac84;
            case 0x28AC88u: goto label_28ac88;
            case 0x28AC8Cu: goto label_28ac8c;
            case 0x28AC90u: goto label_28ac90;
            case 0x28AC94u: goto label_28ac94;
            case 0x28AC98u: goto label_28ac98;
            case 0x28AC9Cu: goto label_28ac9c;
            case 0x28ACA0u: goto label_28aca0;
            case 0x28ACA4u: goto label_28aca4;
            case 0x28ACA8u: goto label_28aca8;
            case 0x28ACACu: goto label_28acac;
            case 0x28ACB0u: goto label_28acb0;
            case 0x28ACB4u: goto label_28acb4;
            case 0x28ACB8u: goto label_28acb8;
            case 0x28ACBCu: goto label_28acbc;
            case 0x28ACC0u: goto label_28acc0;
            case 0x28ACC4u: goto label_28acc4;
            case 0x28ACC8u: goto label_28acc8;
            case 0x28ACCCu: goto label_28accc;
            case 0x28ACD0u: goto label_28acd0;
            case 0x28ACD4u: goto label_28acd4;
            case 0x28ACD8u: goto label_28acd8;
            case 0x28ACDCu: goto label_28acdc;
            case 0x28ACE0u: goto label_28ace0;
            case 0x28ACE4u: goto label_28ace4;
            case 0x28ACE8u: goto label_28ace8;
            case 0x28ACECu: goto label_28acec;
            case 0x28ACF0u: goto label_28acf0;
            case 0x28ACF4u: goto label_28acf4;
            case 0x28ACF8u: goto label_28acf8;
            case 0x28ACFCu: goto label_28acfc;
            case 0x28AD00u: goto label_28ad00;
            case 0x28AD04u: goto label_28ad04;
            case 0x28AD08u: goto label_28ad08;
            case 0x28AD0Cu: goto label_28ad0c;
            case 0x28AD10u: goto label_28ad10;
            case 0x28AD14u: goto label_28ad14;
            case 0x28AD18u: goto label_28ad18;
            case 0x28AD1Cu: goto label_28ad1c;
            case 0x28AD20u: goto label_28ad20;
            case 0x28AD24u: goto label_28ad24;
            case 0x28AD28u: goto label_28ad28;
            case 0x28AD2Cu: goto label_28ad2c;
            case 0x28AD30u: goto label_28ad30;
            case 0x28AD34u: goto label_28ad34;
            case 0x28AD38u: goto label_28ad38;
            case 0x28AD3Cu: goto label_28ad3c;
            case 0x28AD40u: goto label_28ad40;
            case 0x28AD44u: goto label_28ad44;
            case 0x28AD48u: goto label_28ad48;
            case 0x28AD4Cu: goto label_28ad4c;
            case 0x28AD50u: goto label_28ad50;
            case 0x28AD54u: goto label_28ad54;
            case 0x28AD58u: goto label_28ad58;
            case 0x28AD5Cu: goto label_28ad5c;
            case 0x28AD60u: goto label_28ad60;
            case 0x28AD64u: goto label_28ad64;
            case 0x28AD68u: goto label_28ad68;
            case 0x28AD6Cu: goto label_28ad6c;
            case 0x28AD70u: goto label_28ad70;
            case 0x28AD74u: goto label_28ad74;
            case 0x28AD78u: goto label_28ad78;
            case 0x28AD7Cu: goto label_28ad7c;
            case 0x28AD80u: goto label_28ad80;
            case 0x28AD84u: goto label_28ad84;
            case 0x28AD88u: goto label_28ad88;
            case 0x28AD8Cu: goto label_28ad8c;
            case 0x28AD90u: goto label_28ad90;
            case 0x28AD94u: goto label_28ad94;
            case 0x28AD98u: goto label_28ad98;
            case 0x28AD9Cu: goto label_28ad9c;
            case 0x28ADA0u: goto label_28ada0;
            case 0x28ADA4u: goto label_28ada4;
            case 0x28ADA8u: goto label_28ada8;
            case 0x28ADACu: goto label_28adac;
            case 0x28ADB0u: goto label_28adb0;
            case 0x28ADB4u: goto label_28adb4;
            case 0x28ADB8u: goto label_28adb8;
            case 0x28ADBCu: goto label_28adbc;
            case 0x28ADC0u: goto label_28adc0;
            case 0x28ADC4u: goto label_28adc4;
            case 0x28ADC8u: goto label_28adc8;
            case 0x28ADCCu: goto label_28adcc;
            case 0x28ADD0u: goto label_28add0;
            case 0x28ADD4u: goto label_28add4;
            case 0x28ADD8u: goto label_28add8;
            case 0x28ADDCu: goto label_28addc;
            case 0x28ADE0u: goto label_28ade0;
            case 0x28ADE4u: goto label_28ade4;
            case 0x28ADE8u: goto label_28ade8;
            case 0x28ADECu: goto label_28adec;
            case 0x28ADF0u: goto label_28adf0;
            case 0x28ADF4u: goto label_28adf4;
            case 0x28ADF8u: goto label_28adf8;
            case 0x28ADFCu: goto label_28adfc;
            case 0x28AE00u: goto label_28ae00;
            case 0x28AE04u: goto label_28ae04;
            case 0x28AE08u: goto label_28ae08;
            case 0x28AE0Cu: goto label_28ae0c;
            case 0x28AE10u: goto label_28ae10;
            case 0x28AE14u: goto label_28ae14;
            case 0x28AE18u: goto label_28ae18;
            case 0x28AE1Cu: goto label_28ae1c;
            case 0x28AE20u: goto label_28ae20;
            case 0x28AE24u: goto label_28ae24;
            case 0x28AE28u: goto label_28ae28;
            case 0x28AE2Cu: goto label_28ae2c;
            case 0x28AE30u: goto label_28ae30;
            case 0x28AE34u: goto label_28ae34;
            case 0x28AE38u: goto label_28ae38;
            case 0x28AE3Cu: goto label_28ae3c;
            case 0x28AE40u: goto label_28ae40;
            case 0x28AE44u: goto label_28ae44;
            case 0x28AE48u: goto label_28ae48;
            case 0x28AE4Cu: goto label_28ae4c;
            case 0x28AE50u: goto label_28ae50;
            case 0x28AE54u: goto label_28ae54;
            case 0x28AE58u: goto label_28ae58;
            case 0x28AE5Cu: goto label_28ae5c;
            case 0x28AE60u: goto label_28ae60;
            case 0x28AE64u: goto label_28ae64;
            case 0x28AE68u: goto label_28ae68;
            case 0x28AE6Cu: goto label_28ae6c;
            case 0x28AE70u: goto label_28ae70;
            case 0x28AE74u: goto label_28ae74;
            case 0x28AE78u: goto label_28ae78;
            case 0x28AE7Cu: goto label_28ae7c;
            case 0x28AE80u: goto label_28ae80;
            case 0x28AE84u: goto label_28ae84;
            case 0x28AE88u: goto label_28ae88;
            case 0x28AE8Cu: goto label_28ae8c;
            case 0x28AE90u: goto label_28ae90;
            case 0x28AE94u: goto label_28ae94;
            case 0x28AE98u: goto label_28ae98;
            case 0x28AE9Cu: goto label_28ae9c;
            case 0x28AEA0u: goto label_28aea0;
            case 0x28AEA4u: goto label_28aea4;
            case 0x28AEA8u: goto label_28aea8;
            case 0x28AEACu: goto label_28aeac;
            case 0x28AEB0u: goto label_28aeb0;
            case 0x28AEB4u: goto label_28aeb4;
            case 0x28AEB8u: goto label_28aeb8;
            case 0x28AEBCu: goto label_28aebc;
            case 0x28AEC0u: goto label_28aec0;
            case 0x28AEC4u: goto label_28aec4;
            case 0x28AEC8u: goto label_28aec8;
            case 0x28AECCu: goto label_28aecc;
            case 0x28AED0u: goto label_28aed0;
            case 0x28AED4u: goto label_28aed4;
            case 0x28AED8u: goto label_28aed8;
            case 0x28AEDCu: goto label_28aedc;
            case 0x28AEE0u: goto label_28aee0;
            case 0x28AEE4u: goto label_28aee4;
            case 0x28AEE8u: goto label_28aee8;
            case 0x28AEECu: goto label_28aeec;
            case 0x28AEF0u: goto label_28aef0;
            case 0x28AEF4u: goto label_28aef4;
            case 0x28AEF8u: goto label_28aef8;
            case 0x28AEFCu: goto label_28aefc;
            case 0x28AF00u: goto label_28af00;
            case 0x28AF04u: goto label_28af04;
            case 0x28AF08u: goto label_28af08;
            case 0x28AF0Cu: goto label_28af0c;
            case 0x28AF10u: goto label_28af10;
            case 0x28AF14u: goto label_28af14;
            case 0x28AF18u: goto label_28af18;
            case 0x28AF1Cu: goto label_28af1c;
            case 0x28AF20u: goto label_28af20;
            case 0x28AF24u: goto label_28af24;
            case 0x28AF28u: goto label_28af28;
            case 0x28AF2Cu: goto label_28af2c;
            case 0x28AF30u: goto label_28af30;
            case 0x28AF34u: goto label_28af34;
            case 0x28AF38u: goto label_28af38;
            case 0x28AF3Cu: goto label_28af3c;
            case 0x28AF40u: goto label_28af40;
            case 0x28AF44u: goto label_28af44;
            case 0x28AF48u: goto label_28af48;
            case 0x28AF4Cu: goto label_28af4c;
            case 0x28AF50u: goto label_28af50;
            case 0x28AF54u: goto label_28af54;
            case 0x28AF58u: goto label_28af58;
            case 0x28AF5Cu: goto label_28af5c;
            case 0x28AF60u: goto label_28af60;
            case 0x28AF64u: goto label_28af64;
            case 0x28AF68u: goto label_28af68;
            case 0x28AF6Cu: goto label_28af6c;
            case 0x28AF70u: goto label_28af70;
            case 0x28AF74u: goto label_28af74;
            case 0x28AF78u: goto label_28af78;
            case 0x28AF7Cu: goto label_28af7c;
            case 0x28AF80u: goto label_28af80;
            case 0x28AF84u: goto label_28af84;
            case 0x28AF88u: goto label_28af88;
            case 0x28AF8Cu: goto label_28af8c;
            case 0x28AF90u: goto label_28af90;
            case 0x28AF94u: goto label_28af94;
            case 0x28AF98u: goto label_28af98;
            case 0x28AF9Cu: goto label_28af9c;
            case 0x28AFA0u: goto label_28afa0;
            case 0x28AFA4u: goto label_28afa4;
            case 0x28AFA8u: goto label_28afa8;
            case 0x28AFACu: goto label_28afac;
            case 0x28AFB0u: goto label_28afb0;
            case 0x28AFB4u: goto label_28afb4;
            case 0x28AFB8u: goto label_28afb8;
            case 0x28AFBCu: goto label_28afbc;
            case 0x28AFC0u: goto label_28afc0;
            case 0x28AFC4u: goto label_28afc4;
            case 0x28AFC8u: goto label_28afc8;
            case 0x28AFCCu: goto label_28afcc;
            case 0x28AFD0u: goto label_28afd0;
            case 0x28AFD4u: goto label_28afd4;
            case 0x28AFD8u: goto label_28afd8;
            case 0x28AFDCu: goto label_28afdc;
            case 0x28AFE0u: goto label_28afe0;
            case 0x28AFE4u: goto label_28afe4;
            case 0x28AFE8u: goto label_28afe8;
            case 0x28AFECu: goto label_28afec;
            case 0x28AFF0u: goto label_28aff0;
            case 0x28AFF4u: goto label_28aff4;
            case 0x28AFF8u: goto label_28aff8;
            case 0x28AFFCu: goto label_28affc;
            case 0x28B000u: goto label_28b000;
            case 0x28B004u: goto label_28b004;
            case 0x28B008u: goto label_28b008;
            case 0x28B00Cu: goto label_28b00c;
            case 0x28B010u: goto label_28b010;
            case 0x28B014u: goto label_28b014;
            case 0x28B018u: goto label_28b018;
            case 0x28B01Cu: goto label_28b01c;
            case 0x28B020u: goto label_28b020;
            case 0x28B024u: goto label_28b024;
            case 0x28B028u: goto label_28b028;
            case 0x28B02Cu: goto label_28b02c;
            case 0x28B030u: goto label_28b030;
            case 0x28B034u: goto label_28b034;
            case 0x28B038u: goto label_28b038;
            case 0x28B03Cu: goto label_28b03c;
            case 0x28B040u: goto label_28b040;
            case 0x28B044u: goto label_28b044;
            case 0x28B048u: goto label_28b048;
            case 0x28B04Cu: goto label_28b04c;
            case 0x28B050u: goto label_28b050;
            case 0x28B054u: goto label_28b054;
            case 0x28B058u: goto label_28b058;
            case 0x28B05Cu: goto label_28b05c;
            case 0x28B060u: goto label_28b060;
            case 0x28B064u: goto label_28b064;
            case 0x28B068u: goto label_28b068;
            case 0x28B06Cu: goto label_28b06c;
            case 0x28B070u: goto label_28b070;
            case 0x28B074u: goto label_28b074;
            case 0x28B078u: goto label_28b078;
            case 0x28B07Cu: goto label_28b07c;
            case 0x28B080u: goto label_28b080;
            case 0x28B084u: goto label_28b084;
            case 0x28B088u: goto label_28b088;
            case 0x28B08Cu: goto label_28b08c;
            case 0x28B090u: goto label_28b090;
            case 0x28B094u: goto label_28b094;
            case 0x28B098u: goto label_28b098;
            case 0x28B09Cu: goto label_28b09c;
            case 0x28B0A0u: goto label_28b0a0;
            case 0x28B0A4u: goto label_28b0a4;
            case 0x28B0A8u: goto label_28b0a8;
            case 0x28B0ACu: goto label_28b0ac;
            case 0x28B0B0u: goto label_28b0b0;
            case 0x28B0B4u: goto label_28b0b4;
            case 0x28B0B8u: goto label_28b0b8;
            case 0x28B0BCu: goto label_28b0bc;
            case 0x28B0C0u: goto label_28b0c0;
            case 0x28B0C4u: goto label_28b0c4;
            case 0x28B0C8u: goto label_28b0c8;
            case 0x28B0CCu: goto label_28b0cc;
            case 0x28B0D0u: goto label_28b0d0;
            case 0x28B0D4u: goto label_28b0d4;
            case 0x28B0D8u: goto label_28b0d8;
            case 0x28B0DCu: goto label_28b0dc;
            case 0x28B0E0u: goto label_28b0e0;
            case 0x28B0E4u: goto label_28b0e4;
            case 0x28B0E8u: goto label_28b0e8;
            case 0x28B0ECu: goto label_28b0ec;
            case 0x28B0F0u: goto label_28b0f0;
            case 0x28B0F4u: goto label_28b0f4;
            case 0x28B0F8u: goto label_28b0f8;
            case 0x28B0FCu: goto label_28b0fc;
            case 0x28B100u: goto label_28b100;
            case 0x28B104u: goto label_28b104;
            case 0x28B108u: goto label_28b108;
            case 0x28B10Cu: goto label_28b10c;
            case 0x28B110u: goto label_28b110;
            case 0x28B114u: goto label_28b114;
            case 0x28B118u: goto label_28b118;
            case 0x28B11Cu: goto label_28b11c;
            case 0x28B120u: goto label_28b120;
            case 0x28B124u: goto label_28b124;
            case 0x28B128u: goto label_28b128;
            case 0x28B12Cu: goto label_28b12c;
            case 0x28B130u: goto label_28b130;
            case 0x28B134u: goto label_28b134;
            case 0x28B138u: goto label_28b138;
            case 0x28B13Cu: goto label_28b13c;
            case 0x28B140u: goto label_28b140;
            case 0x28B144u: goto label_28b144;
            case 0x28B148u: goto label_28b148;
            case 0x28B14Cu: goto label_28b14c;
            case 0x28B150u: goto label_28b150;
            case 0x28B154u: goto label_28b154;
            case 0x28B158u: goto label_28b158;
            case 0x28B15Cu: goto label_28b15c;
            case 0x28B160u: goto label_28b160;
            case 0x28B164u: goto label_28b164;
            case 0x28B168u: goto label_28b168;
            case 0x28B16Cu: goto label_28b16c;
            case 0x28B170u: goto label_28b170;
            case 0x28B174u: goto label_28b174;
            case 0x28B178u: goto label_28b178;
            case 0x28B17Cu: goto label_28b17c;
            case 0x28B180u: goto label_28b180;
            case 0x28B184u: goto label_28b184;
            case 0x28B188u: goto label_28b188;
            case 0x28B18Cu: goto label_28b18c;
            case 0x28B190u: goto label_28b190;
            case 0x28B194u: goto label_28b194;
            case 0x28B198u: goto label_28b198;
            case 0x28B19Cu: goto label_28b19c;
            case 0x28B1A0u: goto label_28b1a0;
            case 0x28B1A4u: goto label_28b1a4;
            case 0x28B1A8u: goto label_28b1a8;
            case 0x28B1ACu: goto label_28b1ac;
            case 0x28B1B0u: goto label_28b1b0;
            case 0x28B1B4u: goto label_28b1b4;
            case 0x28B1B8u: goto label_28b1b8;
            case 0x28B1BCu: goto label_28b1bc;
            case 0x28B1C0u: goto label_28b1c0;
            case 0x28B1C4u: goto label_28b1c4;
            case 0x28B1C8u: goto label_28b1c8;
            case 0x28B1CCu: goto label_28b1cc;
            case 0x28B1D0u: goto label_28b1d0;
            case 0x28B1D4u: goto label_28b1d4;
            case 0x28B1D8u: goto label_28b1d8;
            case 0x28B1DCu: goto label_28b1dc;
            case 0x28B1E0u: goto label_28b1e0;
            case 0x28B1E4u: goto label_28b1e4;
            case 0x28B1E8u: goto label_28b1e8;
            case 0x28B1ECu: goto label_28b1ec;
            case 0x28B1F0u: goto label_28b1f0;
            case 0x28B1F4u: goto label_28b1f4;
            case 0x28B1F8u: goto label_28b1f8;
            case 0x28B1FCu: goto label_28b1fc;
            case 0x28B200u: goto label_28b200;
            case 0x28B204u: goto label_28b204;
            case 0x28B208u: goto label_28b208;
            case 0x28B20Cu: goto label_28b20c;
            case 0x28B210u: goto label_28b210;
            case 0x28B214u: goto label_28b214;
            case 0x28B218u: goto label_28b218;
            case 0x28B21Cu: goto label_28b21c;
            case 0x28B220u: goto label_28b220;
            case 0x28B224u: goto label_28b224;
            case 0x28B228u: goto label_28b228;
            case 0x28B22Cu: goto label_28b22c;
            case 0x28B230u: goto label_28b230;
            case 0x28B234u: goto label_28b234;
            case 0x28B238u: goto label_28b238;
            case 0x28B23Cu: goto label_28b23c;
            case 0x28B240u: goto label_28b240;
            case 0x28B244u: goto label_28b244;
            case 0x28B248u: goto label_28b248;
            case 0x28B24Cu: goto label_28b24c;
            case 0x28B250u: goto label_28b250;
            case 0x28B254u: goto label_28b254;
            case 0x28B258u: goto label_28b258;
            case 0x28B25Cu: goto label_28b25c;
            case 0x28B260u: goto label_28b260;
            case 0x28B264u: goto label_28b264;
            case 0x28B268u: goto label_28b268;
            case 0x28B26Cu: goto label_28b26c;
            case 0x28B270u: goto label_28b270;
            case 0x28B274u: goto label_28b274;
            case 0x28B278u: goto label_28b278;
            case 0x28B27Cu: goto label_28b27c;
            case 0x28B280u: goto label_28b280;
            case 0x28B284u: goto label_28b284;
            case 0x28B288u: goto label_28b288;
            case 0x28B28Cu: goto label_28b28c;
            case 0x28B290u: goto label_28b290;
            case 0x28B294u: goto label_28b294;
            case 0x28B298u: goto label_28b298;
            case 0x28B29Cu: goto label_28b29c;
            case 0x28B2A0u: goto label_28b2a0;
            case 0x28B2A4u: goto label_28b2a4;
            case 0x28B2A8u: goto label_28b2a8;
            case 0x28B2ACu: goto label_28b2ac;
            case 0x28B2B0u: goto label_28b2b0;
            case 0x28B2B4u: goto label_28b2b4;
            case 0x28B2B8u: goto label_28b2b8;
            case 0x28B2BCu: goto label_28b2bc;
            case 0x28B2C0u: goto label_28b2c0;
            case 0x28B2C4u: goto label_28b2c4;
            case 0x28B2C8u: goto label_28b2c8;
            case 0x28B2CCu: goto label_28b2cc;
            case 0x28B2D0u: goto label_28b2d0;
            case 0x28B2D4u: goto label_28b2d4;
            case 0x28B2D8u: goto label_28b2d8;
            case 0x28B2DCu: goto label_28b2dc;
            case 0x28B2E0u: goto label_28b2e0;
            case 0x28B2E4u: goto label_28b2e4;
            case 0x28B2E8u: goto label_28b2e8;
            case 0x28B2ECu: goto label_28b2ec;
            case 0x28B2F0u: goto label_28b2f0;
            case 0x28B2F4u: goto label_28b2f4;
            case 0x28B2F8u: goto label_28b2f8;
            case 0x28B2FCu: goto label_28b2fc;
            case 0x28B300u: goto label_28b300;
            case 0x28B304u: goto label_28b304;
            case 0x28B308u: goto label_28b308;
            case 0x28B30Cu: goto label_28b30c;
            case 0x28B310u: goto label_28b310;
            case 0x28B314u: goto label_28b314;
            case 0x28B318u: goto label_28b318;
            case 0x28B31Cu: goto label_28b31c;
            case 0x28B320u: goto label_28b320;
            case 0x28B324u: goto label_28b324;
            case 0x28B328u: goto label_28b328;
            case 0x28B32Cu: goto label_28b32c;
            case 0x28B330u: goto label_28b330;
            case 0x28B334u: goto label_28b334;
            case 0x28B338u: goto label_28b338;
            case 0x28B33Cu: goto label_28b33c;
            case 0x28B340u: goto label_28b340;
            case 0x28B344u: goto label_28b344;
            case 0x28B348u: goto label_28b348;
            case 0x28B34Cu: goto label_28b34c;
            case 0x28B350u: goto label_28b350;
            case 0x28B354u: goto label_28b354;
            case 0x28B358u: goto label_28b358;
            case 0x28B35Cu: goto label_28b35c;
            case 0x28B360u: goto label_28b360;
            case 0x28B364u: goto label_28b364;
            case 0x28B368u: goto label_28b368;
            case 0x28B36Cu: goto label_28b36c;
            case 0x28B370u: goto label_28b370;
            case 0x28B374u: goto label_28b374;
            case 0x28B378u: goto label_28b378;
            case 0x28B37Cu: goto label_28b37c;
            case 0x28B380u: goto label_28b380;
            case 0x28B384u: goto label_28b384;
            case 0x28B388u: goto label_28b388;
            case 0x28B38Cu: goto label_28b38c;
            case 0x28B390u: goto label_28b390;
            case 0x28B394u: goto label_28b394;
            case 0x28B398u: goto label_28b398;
            case 0x28B39Cu: goto label_28b39c;
            case 0x28B3A0u: goto label_28b3a0;
            case 0x28B3A4u: goto label_28b3a4;
            case 0x28B3A8u: goto label_28b3a8;
            case 0x28B3ACu: goto label_28b3ac;
            case 0x28B3B0u: goto label_28b3b0;
            case 0x28B3B4u: goto label_28b3b4;
            case 0x28B3B8u: goto label_28b3b8;
            case 0x28B3BCu: goto label_28b3bc;
            case 0x28B3C0u: goto label_28b3c0;
            case 0x28B3C4u: goto label_28b3c4;
            case 0x28B3C8u: goto label_28b3c8;
            case 0x28B3CCu: goto label_28b3cc;
            case 0x28B3D0u: goto label_28b3d0;
            case 0x28B3D4u: goto label_28b3d4;
            case 0x28B3D8u: goto label_28b3d8;
            case 0x28B3DCu: goto label_28b3dc;
            case 0x28B3E0u: goto label_28b3e0;
            case 0x28B3E4u: goto label_28b3e4;
            case 0x28B3E8u: goto label_28b3e8;
            case 0x28B3ECu: goto label_28b3ec;
            case 0x28B3F0u: goto label_28b3f0;
            case 0x28B3F4u: goto label_28b3f4;
            case 0x28B3F8u: goto label_28b3f8;
            case 0x28B3FCu: goto label_28b3fc;
            case 0x28B400u: goto label_28b400;
            case 0x28B404u: goto label_28b404;
            case 0x28B408u: goto label_28b408;
            case 0x28B40Cu: goto label_28b40c;
            case 0x28B410u: goto label_28b410;
            case 0x28B414u: goto label_28b414;
            case 0x28B418u: goto label_28b418;
            case 0x28B41Cu: goto label_28b41c;
            case 0x28B420u: goto label_28b420;
            case 0x28B424u: goto label_28b424;
            case 0x28B428u: goto label_28b428;
            case 0x28B42Cu: goto label_28b42c;
            case 0x28B430u: goto label_28b430;
            case 0x28B434u: goto label_28b434;
            case 0x28B438u: goto label_28b438;
            case 0x28B43Cu: goto label_28b43c;
            case 0x28B440u: goto label_28b440;
            case 0x28B444u: goto label_28b444;
            case 0x28B448u: goto label_28b448;
            case 0x28B44Cu: goto label_28b44c;
            case 0x28B450u: goto label_28b450;
            case 0x28B454u: goto label_28b454;
            case 0x28B458u: goto label_28b458;
            case 0x28B45Cu: goto label_28b45c;
            case 0x28B460u: goto label_28b460;
            case 0x28B464u: goto label_28b464;
            case 0x28B468u: goto label_28b468;
            case 0x28B46Cu: goto label_28b46c;
            case 0x28B470u: goto label_28b470;
            case 0x28B474u: goto label_28b474;
            case 0x28B478u: goto label_28b478;
            case 0x28B47Cu: goto label_28b47c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28AC94u;
label_28ac94:
    // 0x28ac94: 0x24030001
    ctx->pc = 0x28ac94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_28ac98:
    // 0x28ac98: 0x1000010e
label_28ac9c:
    if (ctx->pc == 0x28AC9Cu) {
        ctx->pc = 0x28AC9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x28ACA0u;
        goto label_28aca0;
    }
    ctx->pc = 0x28AC98u;
    {
        const bool branch_taken_0x28ac98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AC9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        if (branch_taken_0x28ac98) {
            ctx->pc = 0x28B0D4u;
            goto label_28b0d4;
        }
    }
    ctx->pc = 0x28ACA0u;
label_28aca0:
    // 0x28aca0: 0x3c020034
    ctx->pc = 0x28aca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_28aca4:
    // 0x28aca4: 0x8e031a14
    ctx->pc = 0x28aca4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 6676)));
label_28aca8:
    // 0x28aca8: 0x8c42e814
    ctx->pc = 0x28aca8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961172)));
label_28acac:
    // 0x28acac: 0x62102a
    ctx->pc = 0x28acacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_28acb0:
    // 0x28acb0: 0x10400018
label_28acb4:
    if (ctx->pc == 0x28ACB4u) {
        ctx->pc = 0x28ACB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x28ACB8u;
        goto label_28acb8;
    }
    ctx->pc = 0x28ACB0u;
    {
        const bool branch_taken_0x28acb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28ACB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x28acb0) {
            ctx->pc = 0x28AD14u;
            goto label_28ad14;
        }
    }
    ctx->pc = 0x28ACB8u;
label_28acb8:
    // 0x28acb8: 0x10000106
label_28acbc:
    if (ctx->pc == 0x28ACBCu) {
        ctx->pc = 0x28ACBCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6676), GPR_U32(ctx, 2));
        ctx->pc = 0x28ACC0u;
        goto label_28acc0;
    }
    ctx->pc = 0x28ACB8u;
    {
        const bool branch_taken_0x28acb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28ACBCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6676), GPR_U32(ctx, 2));
        if (branch_taken_0x28acb8) {
            ctx->pc = 0x28B0D4u;
            goto label_28b0d4;
        }
    }
    ctx->pc = 0x28ACC0u;
label_28acc0:
    // 0x28acc0: 0x200202d
    ctx->pc = 0x28acc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28acc4:
    // 0x28acc4: 0x24050005
    ctx->pc = 0x28acc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
label_28acc8:
    // 0x28acc8: 0x44806000
    ctx->pc = 0x28acc8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28accc:
    // 0x28accc: 0x10000096
label_28acd0:
    if (ctx->pc == 0x28ACD0u) {
        ctx->pc = 0x28ACD0u;
        SET_GPR_U32(ctx, 6, ((uint32_t)32 << 16));
        ctx->pc = 0x28ACD4u;
        goto label_28acd4;
    }
    ctx->pc = 0x28ACCCu;
    {
        const bool branch_taken_0x28accc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28ACD0u;
        SET_GPR_U32(ctx, 6, ((uint32_t)32 << 16));
        if (branch_taken_0x28accc) {
            ctx->pc = 0x28AF28u;
            goto label_28af28;
        }
    }
    ctx->pc = 0x28ACD4u;
label_28acd4:
    // 0x28acd4: 0x3c020034
    ctx->pc = 0x28acd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_28acd8:
    // 0x28acd8: 0x8e031a18
    ctx->pc = 0x28acd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 6680)));
label_28acdc:
    // 0x28acdc: 0x8c42e818
    ctx->pc = 0x28acdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961176)));
label_28ace0:
    // 0x28ace0: 0x62182a
    ctx->pc = 0x28ace0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_28ace4:
    // 0x28ace4: 0x506000fb
label_28ace8:
    if (ctx->pc == 0x28ACE8u) {
        ctx->pc = 0x28ACE8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x28ACECu;
        goto label_28acec;
    }
    ctx->pc = 0x28ACE4u;
    {
        const bool branch_taken_0x28ace4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x28ace4) {
            ctx->pc = 0x28ACE8u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->pc = 0x28B0D4u;
            goto label_28b0d4;
        }
    }
    ctx->pc = 0x28ACECu;
label_28acec:
    // 0x28acec: 0xc0b5c24
label_28acf0:
    if (ctx->pc == 0x28ACF0u) {
        ctx->pc = 0x28ACF0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x28ACF4u;
        goto label_28acf4;
    }
    ctx->pc = 0x28ACECu;
    SET_GPR_U32(ctx, 31, 0x28ACF4u);
    ctx->pc = 0x28ACF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ACF4u; }
    }
    if (ctx->pc != 0x28ACF4u) { return; }
    ctx->pc = 0x28ACF4u;
label_28acf4:
    // 0x28acf4: 0x8e031a18
    ctx->pc = 0x28acf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 6680)));
label_28acf8:
    // 0x28acf8: 0x32080
    ctx->pc = 0x28acf8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
label_28acfc:
    // 0x28acfc: 0x2042021
    ctx->pc = 0x28acfcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_28ad00:
    // 0x28ad00: 0x24420001
    ctx->pc = 0x28ad00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_28ad04:
    // 0x28ad04: 0xac822a9c
    ctx->pc = 0x28ad04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10908), GPR_U32(ctx, 2));
label_28ad08:
    // 0x28ad08: 0x24630001
    ctx->pc = 0x28ad08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_28ad0c:
    // 0x28ad0c: 0x100000f1
label_28ad10:
    if (ctx->pc == 0x28AD10u) {
        ctx->pc = 0x28AD10u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6680), GPR_U32(ctx, 3));
        ctx->pc = 0x28AD14u;
        goto label_28ad14;
    }
    ctx->pc = 0x28AD0Cu;
    {
        const bool branch_taken_0x28ad0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AD10u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6680), GPR_U32(ctx, 3));
        if (branch_taken_0x28ad0c) {
            ctx->pc = 0x28B0D4u;
            goto label_28b0d4;
        }
    }
    ctx->pc = 0x28AD14u;
label_28ad14:
    // 0x28ad14: 0x100000ef
label_28ad18:
    if (ctx->pc == 0x28AD18u) {
        ctx->pc = 0x28AD18u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x28AD1Cu;
        goto label_28ad1c;
    }
    ctx->pc = 0x28AD14u;
    {
        const bool branch_taken_0x28ad14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AD18u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x28ad14) {
            ctx->pc = 0x28B0D4u;
            goto label_28b0d4;
        }
    }
    ctx->pc = 0x28AD1Cu;
label_28ad1c:
    // 0x28ad1c: 0x200202d
    ctx->pc = 0x28ad1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ad20:
    // 0x28ad20: 0x24050009
    ctx->pc = 0x28ad20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
label_28ad24:
    // 0x28ad24: 0x44806000
    ctx->pc = 0x28ad24u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28ad28:
    // 0x28ad28: 0x100000ba
label_28ad2c:
    if (ctx->pc == 0x28AD2Cu) {
        ctx->pc = 0x28AD2Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x28AD30u;
        goto label_28ad30;
    }
    ctx->pc = 0x28AD28u;
    {
        const bool branch_taken_0x28ad28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AD2Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
        if (branch_taken_0x28ad28) {
            ctx->pc = 0x28B014u;
            goto label_28b014;
        }
    }
    ctx->pc = 0x28AD30u;
label_28ad30:
    // 0x28ad30: 0x200202d
    ctx->pc = 0x28ad30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ad34:
    // 0x28ad34: 0xc08afb4
label_28ad38:
    if (ctx->pc == 0x28AD38u) {
        ctx->pc = 0x28AD38u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x28AD3Cu;
        goto label_28ad3c;
    }
    ctx->pc = 0x28AD34u;
    SET_GPR_U32(ctx, 31, 0x28AD3Cu);
    ctx->pc = 0x28AD38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x22BED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerIncFight_0x22bed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AD3Cu; }
    }
    if (ctx->pc != 0x28AD3Cu) { return; }
    ctx->pc = 0x28AD3Cu;
label_28ad3c:
    // 0x28ad3c: 0xc600098c
    ctx->pc = 0x28ad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ad40:
    // 0x28ad40: 0x3c014120
    ctx->pc = 0x28ad40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_28ad44:
    // 0x28ad44: 0x44810800
    ctx->pc = 0x28ad44u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_28ad48:
    // 0x28ad48: 0x46010000
    ctx->pc = 0x28ad48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28ad4c:
    // 0x28ad4c: 0x100000e1
label_28ad50:
    if (ctx->pc == 0x28AD50u) {
        ctx->pc = 0x28AD50u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2444), bits); }
        ctx->pc = 0x28AD54u;
        goto label_28ad54;
    }
    ctx->pc = 0x28AD4Cu;
    {
        const bool branch_taken_0x28ad4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AD50u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2444), bits); }
        if (branch_taken_0x28ad4c) {
            ctx->pc = 0x28B0D4u;
            goto label_28b0d4;
        }
    }
    ctx->pc = 0x28AD54u;
label_28ad54:
    // 0x28ad54: 0x200202d
    ctx->pc = 0x28ad54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ad58:
    // 0x28ad58: 0xc08afde
label_28ad5c:
    if (ctx->pc == 0x28AD5Cu) {
        ctx->pc = 0x28AD5Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x28AD60u;
        goto label_28ad60;
    }
    ctx->pc = 0x28AD58u;
    SET_GPR_U32(ctx, 31, 0x28AD60u);
    ctx->pc = 0x28AD5Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x22BF78u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerIncSpeed_0x22bf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AD60u; }
    }
    if (ctx->pc != 0x28AD60u) { return; }
    ctx->pc = 0x28AD60u;
label_28ad60:
    // 0x28ad60: 0xc6000998
    ctx->pc = 0x28ad60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ad64:
    // 0x28ad64: 0x3c014120
    ctx->pc = 0x28ad64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_28ad68:
    // 0x28ad68: 0x44810800
    ctx->pc = 0x28ad68u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_28ad6c:
    // 0x28ad6c: 0x46010000
    ctx->pc = 0x28ad6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28ad70:
    // 0x28ad70: 0x100000d8
label_28ad74:
    if (ctx->pc == 0x28AD74u) {
        ctx->pc = 0x28AD74u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2456), bits); }
        ctx->pc = 0x28AD78u;
        goto label_28ad78;
    }
    ctx->pc = 0x28AD70u;
    {
        const bool branch_taken_0x28ad70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AD74u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2456), bits); }
        if (branch_taken_0x28ad70) {
            ctx->pc = 0x28B0D4u;
            goto label_28b0d4;
        }
    }
    ctx->pc = 0x28AD78u;
label_28ad78:
    // 0x28ad78: 0x200202d
    ctx->pc = 0x28ad78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ad7c:
    // 0x28ad7c: 0xc08afc2
label_28ad80:
    if (ctx->pc == 0x28AD80u) {
        ctx->pc = 0x28AD80u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x28AD84u;
        goto label_28ad84;
    }
    ctx->pc = 0x28AD7Cu;
    SET_GPR_U32(ctx, 31, 0x28AD84u);
    ctx->pc = 0x28AD80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x22BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerIncArmor_0x22bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AD84u; }
    }
    if (ctx->pc != 0x28AD84u) { return; }
    ctx->pc = 0x28AD84u;
label_28ad84:
    // 0x28ad84: 0xc6000990
    ctx->pc = 0x28ad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ad88:
    // 0x28ad88: 0x3c014120
    ctx->pc = 0x28ad88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_28ad8c:
    // 0x28ad8c: 0x44810800
    ctx->pc = 0x28ad8cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_28ad90:
    // 0x28ad90: 0x46010000
    ctx->pc = 0x28ad90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28ad94:
    // 0x28ad94: 0x100000cf
label_28ad98:
    if (ctx->pc == 0x28AD98u) {
        ctx->pc = 0x28AD98u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2448), bits); }
        ctx->pc = 0x28AD9Cu;
        goto label_28ad9c;
    }
    ctx->pc = 0x28AD94u;
    {
        const bool branch_taken_0x28ad94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AD98u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2448), bits); }
        if (branch_taken_0x28ad94) {
            ctx->pc = 0x28B0D4u;
            goto label_28b0d4;
        }
    }
    ctx->pc = 0x28AD9Cu;
label_28ad9c:
    // 0x28ad9c: 0x200202d
    ctx->pc = 0x28ad9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ada0:
    // 0x28ada0: 0xc08afd0
label_28ada4:
    if (ctx->pc == 0x28ADA4u) {
        ctx->pc = 0x28ADA4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x28ADA8u;
        goto label_28ada8;
    }
    ctx->pc = 0x28ADA0u;
    SET_GPR_U32(ctx, 31, 0x28ADA8u);
    ctx->pc = 0x28ADA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x22BF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerIncMagic_0x22bf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ADA8u; }
    }
    if (ctx->pc != 0x28ADA8u) { return; }
    ctx->pc = 0x28ADA8u;
label_28ada8:
    // 0x28ada8: 0xc6000994
    ctx->pc = 0x28ada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28adac:
    // 0x28adac: 0x3c014120
    ctx->pc = 0x28adacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_28adb0:
    // 0x28adb0: 0x44810800
    ctx->pc = 0x28adb0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_28adb4:
    // 0x28adb4: 0x46010000
    ctx->pc = 0x28adb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28adb8:
    // 0x28adb8: 0x100000c6
label_28adbc:
    if (ctx->pc == 0x28ADBCu) {
        ctx->pc = 0x28ADBCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2452), bits); }
        ctx->pc = 0x28ADC0u;
        goto label_28adc0;
    }
    ctx->pc = 0x28ADB8u;
    {
        const bool branch_taken_0x28adb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28ADBCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2452), bits); }
        if (branch_taken_0x28adb8) {
            ctx->pc = 0x28B0D4u;
            goto label_28b0d4;
        }
    }
    ctx->pc = 0x28ADC0u;
label_28adc0:
    // 0x28adc0: 0x200202d
    ctx->pc = 0x28adc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28adc4:
    // 0x28adc4: 0x24050006
    ctx->pc = 0x28adc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
label_28adc8:
    // 0x28adc8: 0x44806000
    ctx->pc = 0x28adc8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28adcc:
    // 0x28adcc: 0x10000091
label_28add0:
    if (ctx->pc == 0x28ADD0u) {
        ctx->pc = 0x28ADD0u;
        SET_GPR_U32(ctx, 6, ((uint32_t)2 << 16));
        ctx->pc = 0x28ADD4u;
        goto label_28add4;
    }
    ctx->pc = 0x28ADCCu;
    {
        const bool branch_taken_0x28adcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28ADD0u;
        SET_GPR_U32(ctx, 6, ((uint32_t)2 << 16));
        if (branch_taken_0x28adcc) {
            ctx->pc = 0x28B014u;
            goto label_28b014;
        }
    }
    ctx->pc = 0x28ADD4u;
label_28add4:
    // 0x28add4: 0x200202d
    ctx->pc = 0x28add4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28add8:
    // 0x28add8: 0x24050009
    ctx->pc = 0x28add8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
label_28addc:
    // 0x28addc: 0x44806000
    ctx->pc = 0x28addcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28ade0:
    // 0x28ade0: 0x100000a5
label_28ade4:
    if (ctx->pc == 0x28ADE4u) {
        ctx->pc = 0x28ADE4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x28ADE8u;
        goto label_28ade8;
    }
    ctx->pc = 0x28ADE0u;
    {
        const bool branch_taken_0x28ade0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28ADE4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x28ade0) {
            ctx->pc = 0x28B078u;
            goto label_28b078;
        }
    }
    ctx->pc = 0x28ADE8u;
label_28ade8:
    // 0x28ade8: 0x200202d
    ctx->pc = 0x28ade8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28adec:
    // 0x28adec: 0x24050005
    ctx->pc = 0x28adecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
label_28adf0:
    // 0x28adf0: 0x44806000
    ctx->pc = 0x28adf0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28adf4:
    // 0x28adf4: 0x10000087
label_28adf8:
    if (ctx->pc == 0x28ADF8u) {
        ctx->pc = 0x28ADF8u;
        SET_GPR_U32(ctx, 6, ((uint32_t)8192 << 16));
        ctx->pc = 0x28ADFCu;
        goto label_28adfc;
    }
    ctx->pc = 0x28ADF4u;
    {
        const bool branch_taken_0x28adf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28ADF8u;
        SET_GPR_U32(ctx, 6, ((uint32_t)8192 << 16));
        if (branch_taken_0x28adf4) {
            ctx->pc = 0x28B014u;
            goto label_28b014;
        }
    }
    ctx->pc = 0x28ADFCu;
label_28adfc:
    // 0x28adfc: 0x200202d
    ctx->pc = 0x28adfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ae00:
    // 0x28ae00: 0x24050005
    ctx->pc = 0x28ae00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
label_28ae04:
    // 0x28ae04: 0x44806000
    ctx->pc = 0x28ae04u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28ae08:
    // 0x28ae08: 0x1000009b
label_28ae0c:
    if (ctx->pc == 0x28AE0Cu) {
        ctx->pc = 0x28AE0Cu;
        SET_GPR_U32(ctx, 6, ((uint32_t)8 << 16));
        ctx->pc = 0x28AE10u;
        goto label_28ae10;
    }
    ctx->pc = 0x28AE08u;
    {
        const bool branch_taken_0x28ae08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AE0Cu;
        SET_GPR_U32(ctx, 6, ((uint32_t)8 << 16));
        if (branch_taken_0x28ae08) {
            ctx->pc = 0x28B078u;
            goto label_28b078;
        }
    }
    ctx->pc = 0x28AE10u;
label_28ae10:
    // 0x28ae10: 0x200202d
    ctx->pc = 0x28ae10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ae14:
    // 0x28ae14: 0x24050005
    ctx->pc = 0x28ae14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
label_28ae18:
    // 0x28ae18: 0x3c014040
    ctx->pc = 0x28ae18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_28ae1c:
    // 0x28ae1c: 0x44816000
    ctx->pc = 0x28ae1cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_28ae20:
    // 0x28ae20: 0x1000005e
label_28ae24:
    if (ctx->pc == 0x28AE24u) {
        ctx->pc = 0x28AE24u;
        SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
        ctx->pc = 0x28AE28u;
        goto label_28ae28;
    }
    ctx->pc = 0x28AE20u;
    {
        const bool branch_taken_0x28ae20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AE24u;
        SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
        if (branch_taken_0x28ae20) {
            ctx->pc = 0x28AF9Cu;
            goto label_28af9c;
        }
    }
    ctx->pc = 0x28AE28u;
label_28ae28:
    // 0x28ae28: 0x200202d
    ctx->pc = 0x28ae28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ae2c:
    // 0x28ae2c: 0x24050006
    ctx->pc = 0x28ae2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
label_28ae30:
    // 0x28ae30: 0x44806000
    ctx->pc = 0x28ae30u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28ae34:
    // 0x28ae34: 0x10000086
label_28ae38:
    if (ctx->pc == 0x28AE38u) {
        ctx->pc = 0x28AE38u;
        SET_GPR_U32(ctx, 6, ((uint32_t)64 << 16));
        ctx->pc = 0x28AE3Cu;
        goto label_28ae3c;
    }
    ctx->pc = 0x28AE34u;
    {
        const bool branch_taken_0x28ae34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AE38u;
        SET_GPR_U32(ctx, 6, ((uint32_t)64 << 16));
        if (branch_taken_0x28ae34) {
            ctx->pc = 0x28B050u;
            goto label_28b050;
        }
    }
    ctx->pc = 0x28AE3Cu;
label_28ae3c:
    // 0x28ae3c: 0x200202d
    ctx->pc = 0x28ae3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ae40:
    // 0x28ae40: 0x24050006
    ctx->pc = 0x28ae40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
label_28ae44:
    // 0x28ae44: 0x44806000
    ctx->pc = 0x28ae44u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28ae48:
    // 0x28ae48: 0x10000081
label_28ae4c:
    if (ctx->pc == 0x28AE4Cu) {
        ctx->pc = 0x28AE4Cu;
        SET_GPR_U32(ctx, 6, ((uint32_t)32 << 16));
        ctx->pc = 0x28AE50u;
        goto label_28ae50;
    }
    ctx->pc = 0x28AE48u;
    {
        const bool branch_taken_0x28ae48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AE4Cu;
        SET_GPR_U32(ctx, 6, ((uint32_t)32 << 16));
        if (branch_taken_0x28ae48) {
            ctx->pc = 0x28B050u;
            goto label_28b050;
        }
    }
    ctx->pc = 0x28AE50u;
label_28ae50:
    // 0x28ae50: 0x200202d
    ctx->pc = 0x28ae50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ae54:
    // 0x28ae54: 0x24050006
    ctx->pc = 0x28ae54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
label_28ae58:
    // 0x28ae58: 0x44806000
    ctx->pc = 0x28ae58u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28ae5c:
    // 0x28ae5c: 0x3c0141a0
    ctx->pc = 0x28ae5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
label_28ae60:
    // 0x28ae60: 0x44816800
    ctx->pc = 0x28ae60u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_28ae64:
    // 0x28ae64: 0xc08b096
label_28ae68:
    if (ctx->pc == 0x28AE68u) {
        ctx->pc = 0x28AE68u;
        SET_GPR_U32(ctx, 6, ((uint32_t)17 << 16));
        ctx->pc = 0x28AE6Cu;
        goto label_28ae6c;
    }
    ctx->pc = 0x28AE64u;
    SET_GPR_U32(ctx, 31, 0x28AE6Cu);
    ctx->pc = 0x28AE68u;
    SET_GPR_U32(ctx, 6, ((uint32_t)17 << 16));
    ctx->pc = 0x22C258u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerAddPowerup_0x22c258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AE6Cu; }
    }
    if (ctx->pc != 0x28AE6Cu) { return; }
    ctx->pc = 0x28AE6Cu;
label_28ae6c:
    // 0x28ae6c: 0x1000009a
label_28ae70:
    if (ctx->pc == 0x28AE70u) {
        ctx->pc = 0x28AE70u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x28AE74u;
        goto label_28ae74;
    }
    ctx->pc = 0x28AE6Cu;
    {
        const bool branch_taken_0x28ae6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AE70u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x28ae6c) {
            ctx->pc = 0x28B0D8u;
            goto label_28b0d8;
        }
    }
    ctx->pc = 0x28AE74u;
label_28ae74:
    // 0x28ae74: 0x8e030984
    ctx->pc = 0x28ae74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
label_28ae78:
    // 0x28ae78: 0x3c020035
    ctx->pc = 0x28ae78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28ae7c:
    // 0x28ae7c: 0x8c44b528
    ctx->pc = 0x28ae7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294948136)));
label_28ae80:
    // 0x28ae80: 0x24020050
    ctx->pc = 0x28ae80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
label_28ae84:
    // 0x28ae84: 0x621818
    ctx->pc = 0x28ae84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28ae88:
    // 0x28ae88: 0x641821
    ctx->pc = 0x28ae88u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28ae8c:
    // 0x28ae8c: 0xc46c004c
    ctx->pc = 0x28ae8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28ae90:
    // 0x28ae90: 0x46806320
    ctx->pc = 0x28ae90u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_28ae94:
    // 0x28ae94: 0xc08c97e
label_28ae98:
    if (ctx->pc == 0x28AE98u) {
        ctx->pc = 0x28AE98u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28AE9Cu;
        goto label_28ae9c;
    }
    ctx->pc = 0x28AE94u;
    SET_GPR_U32(ctx, 31, 0x28AE9Cu);
    ctx->pc = 0x28AE98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2325F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        heal_player_0x2325f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AE9Cu; }
    }
    if (ctx->pc != 0x28AE9Cu) { return; }
    ctx->pc = 0x28AE9Cu;
label_28ae9c:
    // 0x28ae9c: 0x1000008e
label_28aea0:
    if (ctx->pc == 0x28AEA0u) {
        ctx->pc = 0x28AEA0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x28AEA4u;
        goto label_28aea4;
    }
    ctx->pc = 0x28AE9Cu;
    {
        const bool branch_taken_0x28ae9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AEA0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x28ae9c) {
            ctx->pc = 0x28B0D8u;
            goto label_28b0d8;
        }
    }
    ctx->pc = 0x28AEA4u;
label_28aea4:
    // 0x28aea4: 0x200202d
    ctx->pc = 0x28aea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28aea8:
    // 0x28aea8: 0x24050009
    ctx->pc = 0x28aea8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
label_28aeac:
    // 0x28aeac: 0x44806000
    ctx->pc = 0x28aeacu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28aeb0:
    // 0x28aeb0: 0x3c014270
    ctx->pc = 0x28aeb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17008 << 16));
label_28aeb4:
    // 0x28aeb4: 0x44816800
    ctx->pc = 0x28aeb4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_28aeb8:
    // 0x28aeb8: 0xc08b096
label_28aebc:
    if (ctx->pc == 0x28AEBCu) {
        ctx->pc = 0x28AEBCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28AEC0u;
        goto label_28aec0;
    }
    ctx->pc = 0x28AEB8u;
    SET_GPR_U32(ctx, 31, 0x28AEC0u);
    ctx->pc = 0x28AEBCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x22C258u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerAddPowerup_0x22c258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AEC0u; }
    }
    if (ctx->pc != 0x28AEC0u) { return; }
    ctx->pc = 0x28AEC0u;
label_28aec0:
    // 0x28aec0: 0x10000085
label_28aec4:
    if (ctx->pc == 0x28AEC4u) {
        ctx->pc = 0x28AEC4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x28AEC8u;
        goto label_28aec8;
    }
    ctx->pc = 0x28AEC0u;
    {
        const bool branch_taken_0x28aec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AEC4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x28aec0) {
            ctx->pc = 0x28B0D8u;
            goto label_28b0d8;
        }
    }
    ctx->pc = 0x28AEC8u;
label_28aec8:
    // 0x28aec8: 0x200202d
    ctx->pc = 0x28aec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28aecc:
    // 0x28aecc: 0x24050009
    ctx->pc = 0x28aeccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
label_28aed0:
    // 0x28aed0: 0x44806000
    ctx->pc = 0x28aed0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28aed4:
    // 0x28aed4: 0x1000004f
label_28aed8:
    if (ctx->pc == 0x28AED8u) {
        ctx->pc = 0x28AED8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x28AEDCu;
        goto label_28aedc;
    }
    ctx->pc = 0x28AED4u;
    {
        const bool branch_taken_0x28aed4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AED8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
        if (branch_taken_0x28aed4) {
            ctx->pc = 0x28B014u;
            goto label_28b014;
        }
    }
    ctx->pc = 0x28AEDCu;
label_28aedc:
    // 0x28aedc: 0x200202d
    ctx->pc = 0x28aedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28aee0:
    // 0x28aee0: 0x24050005
    ctx->pc = 0x28aee0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
label_28aee4:
    // 0x28aee4: 0x44806000
    ctx->pc = 0x28aee4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28aee8:
    // 0x28aee8: 0x1000000f
label_28aeec:
    if (ctx->pc == 0x28AEECu) {
        ctx->pc = 0x28AEECu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28AEF0u;
        goto label_28aef0;
    }
    ctx->pc = 0x28AEE8u;
    {
        const bool branch_taken_0x28aee8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AEECu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28aee8) {
            ctx->pc = 0x28AF28u;
            goto label_28af28;
        }
    }
    ctx->pc = 0x28AEF0u;
label_28aef0:
    // 0x28aef0: 0x200202d
    ctx->pc = 0x28aef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28aef4:
    // 0x28aef4: 0x24050005
    ctx->pc = 0x28aef4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
label_28aef8:
    // 0x28aef8: 0x44806000
    ctx->pc = 0x28aef8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28aefc:
    // 0x28aefc: 0x1000000a
label_28af00:
    if (ctx->pc == 0x28AF00u) {
        ctx->pc = 0x28AF00u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x28AF04u;
        goto label_28af04;
    }
    ctx->pc = 0x28AEFCu;
    {
        const bool branch_taken_0x28aefc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AF00u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x28aefc) {
            ctx->pc = 0x28AF28u;
            goto label_28af28;
        }
    }
    ctx->pc = 0x28AF04u;
label_28af04:
    // 0x28af04: 0x200202d
    ctx->pc = 0x28af04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28af08:
    // 0x28af08: 0x24050005
    ctx->pc = 0x28af08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
label_28af0c:
    // 0x28af0c: 0x44806000
    ctx->pc = 0x28af0cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28af10:
    // 0x28af10: 0x10000005
label_28af14:
    if (ctx->pc == 0x28AF14u) {
        ctx->pc = 0x28AF14u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x28AF18u;
        goto label_28af18;
    }
    ctx->pc = 0x28AF10u;
    {
        const bool branch_taken_0x28af10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AF14u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x28af10) {
            ctx->pc = 0x28AF28u;
            goto label_28af28;
        }
    }
    ctx->pc = 0x28AF18u;
label_28af18:
    // 0x28af18: 0x200202d
    ctx->pc = 0x28af18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28af1c:
    // 0x28af1c: 0x24050005
    ctx->pc = 0x28af1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
label_28af20:
    // 0x28af20: 0x44806000
    ctx->pc = 0x28af20u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28af24:
    // 0x28af24: 0x24060004
    ctx->pc = 0x28af24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
label_28af28:
    // 0x28af28: 0x3c0142b4
    ctx->pc = 0x28af28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17076 << 16));
label_28af2c:
    // 0x28af2c: 0x44816800
    ctx->pc = 0x28af2cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_28af30:
    // 0x28af30: 0xc08b096
label_28af34:
    if (ctx->pc == 0x28AF34u) {
        ctx->pc = 0x28AF38u;
        goto label_28af38;
    }
    ctx->pc = 0x28AF30u;
    SET_GPR_U32(ctx, 31, 0x28AF38u);
    ctx->pc = 0x22C258u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerAddPowerup_0x22c258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AF38u; }
    }
    if (ctx->pc != 0x28AF38u) { return; }
    ctx->pc = 0x28AF38u;
label_28af38:
    // 0x28af38: 0x10000067
label_28af3c:
    if (ctx->pc == 0x28AF3Cu) {
        ctx->pc = 0x28AF3Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x28AF40u;
        goto label_28af40;
    }
    ctx->pc = 0x28AF38u;
    {
        const bool branch_taken_0x28af38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AF3Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x28af38) {
            ctx->pc = 0x28B0D8u;
            goto label_28b0d8;
        }
    }
    ctx->pc = 0x28AF40u;
label_28af40:
    // 0x28af40: 0x200202d
    ctx->pc = 0x28af40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28af44:
    // 0x28af44: 0x24050005
    ctx->pc = 0x28af44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
label_28af48:
    // 0x28af48: 0x3c0140a0
    ctx->pc = 0x28af48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
label_28af4c:
    // 0x28af4c: 0x44816000
    ctx->pc = 0x28af4cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_28af50:
    // 0x28af50: 0x10000012
label_28af54:
    if (ctx->pc == 0x28AF54u) {
        ctx->pc = 0x28AF54u;
        SET_GPR_U32(ctx, 6, ((uint32_t)16 << 16));
        ctx->pc = 0x28AF58u;
        goto label_28af58;
    }
    ctx->pc = 0x28AF50u;
    {
        const bool branch_taken_0x28af50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AF54u;
        SET_GPR_U32(ctx, 6, ((uint32_t)16 << 16));
        if (branch_taken_0x28af50) {
            ctx->pc = 0x28AF9Cu;
            goto label_28af9c;
        }
    }
    ctx->pc = 0x28AF58u;
label_28af58:
    // 0x28af58: 0x200202d
    ctx->pc = 0x28af58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28af5c:
    // 0x28af5c: 0x24050009
    ctx->pc = 0x28af5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
label_28af60:
    // 0x28af60: 0x3c0140a0
    ctx->pc = 0x28af60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
label_28af64:
    // 0x28af64: 0x44816000
    ctx->pc = 0x28af64u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_28af68:
    // 0x28af68: 0x1000000c
label_28af6c:
    if (ctx->pc == 0x28AF6Cu) {
        ctx->pc = 0x28AF6Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x28AF70u;
        goto label_28af70;
    }
    ctx->pc = 0x28AF68u;
    {
        const bool branch_taken_0x28af68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AF6Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x28af68) {
            ctx->pc = 0x28AF9Cu;
            goto label_28af9c;
        }
    }
    ctx->pc = 0x28AF70u;
label_28af70:
    // 0x28af70: 0x200202d
    ctx->pc = 0x28af70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28af74:
    // 0x28af74: 0x24050009
    ctx->pc = 0x28af74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
label_28af78:
    // 0x28af78: 0x3c0140a0
    ctx->pc = 0x28af78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
label_28af7c:
    // 0x28af7c: 0x44816000
    ctx->pc = 0x28af7cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_28af80:
    // 0x28af80: 0x10000006
label_28af84:
    if (ctx->pc == 0x28AF84u) {
        ctx->pc = 0x28AF84u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x28AF88u;
        goto label_28af88;
    }
    ctx->pc = 0x28AF80u;
    {
        const bool branch_taken_0x28af80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AF84u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x28af80) {
            ctx->pc = 0x28AF9Cu;
            goto label_28af9c;
        }
    }
    ctx->pc = 0x28AF88u;
label_28af88:
    // 0x28af88: 0x200202d
    ctx->pc = 0x28af88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28af8c:
    // 0x28af8c: 0x24050009
    ctx->pc = 0x28af8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
label_28af90:
    // 0x28af90: 0x3c0140a0
    ctx->pc = 0x28af90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
label_28af94:
    // 0x28af94: 0x44816000
    ctx->pc = 0x28af94u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_28af98:
    // 0x28af98: 0x24060020
    ctx->pc = 0x28af98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
label_28af9c:
    // 0x28af9c: 0x3c01bf80
    ctx->pc = 0x28af9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
label_28afa0:
    // 0x28afa0: 0x44816800
    ctx->pc = 0x28afa0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_28afa4:
    // 0x28afa4: 0xc08b096
label_28afa8:
    if (ctx->pc == 0x28AFA8u) {
        ctx->pc = 0x28AFACu;
        goto label_28afac;
    }
    ctx->pc = 0x28AFA4u;
    SET_GPR_U32(ctx, 31, 0x28AFACu);
    ctx->pc = 0x22C258u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerAddPowerup_0x22c258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AFACu; }
    }
    if (ctx->pc != 0x28AFACu) { return; }
    ctx->pc = 0x28AFACu;
label_28afac:
    // 0x28afac: 0x1000004a
label_28afb0:
    if (ctx->pc == 0x28AFB0u) {
        ctx->pc = 0x28AFB0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x28AFB4u;
        goto label_28afb4;
    }
    ctx->pc = 0x28AFACu;
    {
        const bool branch_taken_0x28afac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AFB0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x28afac) {
            ctx->pc = 0x28B0D8u;
            goto label_28b0d8;
        }
    }
    ctx->pc = 0x28AFB4u;
label_28afb4:
    // 0x28afb4: 0x200202d
    ctx->pc = 0x28afb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28afb8:
    // 0x28afb8: 0x24050009
    ctx->pc = 0x28afb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
label_28afbc:
    // 0x28afbc: 0x3c014080
    ctx->pc = 0x28afbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
label_28afc0:
    // 0x28afc0: 0x44816000
    ctx->pc = 0x28afc0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_28afc4:
    // 0x28afc4: 0x3c014220
    ctx->pc = 0x28afc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16928 << 16));
label_28afc8:
    // 0x28afc8: 0x44816800
    ctx->pc = 0x28afc8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_28afcc:
    // 0x28afcc: 0xc08b096
label_28afd0:
    if (ctx->pc == 0x28AFD0u) {
        ctx->pc = 0x28AFD0u;
        SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
        ctx->pc = 0x28AFD4u;
        goto label_28afd4;
    }
    ctx->pc = 0x28AFCCu;
    SET_GPR_U32(ctx, 31, 0x28AFD4u);
    ctx->pc = 0x28AFD0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    ctx->pc = 0x22C258u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerAddPowerup_0x22c258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AFD4u; }
    }
    if (ctx->pc != 0x28AFD4u) { return; }
    ctx->pc = 0x28AFD4u;
label_28afd4:
    // 0x28afd4: 0x10000040
label_28afd8:
    if (ctx->pc == 0x28AFD8u) {
        ctx->pc = 0x28AFD8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x28AFDCu;
        goto label_28afdc;
    }
    ctx->pc = 0x28AFD4u;
    {
        const bool branch_taken_0x28afd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AFD8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x28afd4) {
            ctx->pc = 0x28B0D8u;
            goto label_28b0d8;
        }
    }
    ctx->pc = 0x28AFDCu;
label_28afdc:
    // 0x28afdc: 0x200202d
    ctx->pc = 0x28afdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28afe0:
    // 0x28afe0: 0x24050009
    ctx->pc = 0x28afe0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
label_28afe4:
    // 0x28afe4: 0x44806000
    ctx->pc = 0x28afe4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28afe8:
    // 0x28afe8: 0x10000019
label_28afec:
    if (ctx->pc == 0x28AFECu) {
        ctx->pc = 0x28AFECu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x28AFF0u;
        goto label_28aff0;
    }
    ctx->pc = 0x28AFE8u;
    {
        const bool branch_taken_0x28afe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28AFECu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 512));
        if (branch_taken_0x28afe8) {
            ctx->pc = 0x28B050u;
            goto label_28b050;
        }
    }
    ctx->pc = 0x28AFF0u;
label_28aff0:
    // 0x28aff0: 0x200202d
    ctx->pc = 0x28aff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28aff4:
    // 0x28aff4: 0x24050009
    ctx->pc = 0x28aff4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
label_28aff8:
    // 0x28aff8: 0x44806000
    ctx->pc = 0x28aff8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28affc:
    // 0x28affc: 0x10000014
label_28b000:
    if (ctx->pc == 0x28B000u) {
        ctx->pc = 0x28B000u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x28B004u;
        goto label_28b004;
    }
    ctx->pc = 0x28AFFCu;
    {
        const bool branch_taken_0x28affc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B000u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x28affc) {
            ctx->pc = 0x28B050u;
            goto label_28b050;
        }
    }
    ctx->pc = 0x28B004u;
label_28b004:
    // 0x28b004: 0x200202d
    ctx->pc = 0x28b004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b008:
    // 0x28b008: 0x24050006
    ctx->pc = 0x28b008u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
label_28b00c:
    // 0x28b00c: 0x44806000
    ctx->pc = 0x28b00cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28b010:
    // 0x28b010: 0x3c060001
    ctx->pc = 0x28b010u;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
label_28b014:
    // 0x28b014: 0x3c0141f0
    ctx->pc = 0x28b014u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
label_28b018:
    // 0x28b018: 0x44816800
    ctx->pc = 0x28b018u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_28b01c:
    // 0x28b01c: 0xc08b096
label_28b020:
    if (ctx->pc == 0x28B020u) {
        ctx->pc = 0x28B024u;
        goto label_28b024;
    }
    ctx->pc = 0x28B01Cu;
    SET_GPR_U32(ctx, 31, 0x28B024u);
    ctx->pc = 0x22C258u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerAddPowerup_0x22c258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B024u; }
    }
    if (ctx->pc != 0x28B024u) { return; }
    ctx->pc = 0x28B024u;
label_28b024:
    // 0x28b024: 0x1000002c
label_28b028:
    if (ctx->pc == 0x28B028u) {
        ctx->pc = 0x28B028u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x28B02Cu;
        goto label_28b02c;
    }
    ctx->pc = 0x28B024u;
    {
        const bool branch_taken_0x28b024 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B028u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x28b024) {
            ctx->pc = 0x28B0D8u;
            goto label_28b0d8;
        }
    }
    ctx->pc = 0x28B02Cu;
label_28b02c:
    // 0x28b02c: 0x200202d
    ctx->pc = 0x28b02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b030:
    // 0x28b030: 0x24050009
    ctx->pc = 0x28b030u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
label_28b034:
    // 0x28b034: 0x44806000
    ctx->pc = 0x28b034u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28b038:
    // 0x28b038: 0x10000019
label_28b03c:
    if (ctx->pc == 0x28B03Cu) {
        ctx->pc = 0x28B03Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x28B040u;
        goto label_28b040;
    }
    ctx->pc = 0x28B038u;
    {
        const bool branch_taken_0x28b038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B03Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x28b038) {
            ctx->pc = 0x28B0A0u;
            goto label_28b0a0;
        }
    }
    ctx->pc = 0x28B040u;
label_28b040:
    // 0x28b040: 0x200202d
    ctx->pc = 0x28b040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b044:
    // 0x28b044: 0x24050006
    ctx->pc = 0x28b044u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
label_28b048:
    // 0x28b048: 0x44806000
    ctx->pc = 0x28b048u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28b04c:
    // 0x28b04c: 0x24062008
    ctx->pc = 0x28b04cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8200));
label_28b050:
    // 0x28b050: 0x3c014170
    ctx->pc = 0x28b050u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
label_28b054:
    // 0x28b054: 0x44816800
    ctx->pc = 0x28b054u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_28b058:
    // 0x28b058: 0xc08b096
label_28b05c:
    if (ctx->pc == 0x28B05Cu) {
        ctx->pc = 0x28B060u;
        goto label_28b060;
    }
    ctx->pc = 0x28B058u;
    SET_GPR_U32(ctx, 31, 0x28B060u);
    ctx->pc = 0x22C258u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerAddPowerup_0x22c258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B060u; }
    }
    if (ctx->pc != 0x28B060u) { return; }
    ctx->pc = 0x28B060u;
label_28b060:
    // 0x28b060: 0x1000001d
label_28b064:
    if (ctx->pc == 0x28B064u) {
        ctx->pc = 0x28B064u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x28B068u;
        goto label_28b068;
    }
    ctx->pc = 0x28B060u;
    {
        const bool branch_taken_0x28b060 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B064u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x28b060) {
            ctx->pc = 0x28B0D8u;
            goto label_28b0d8;
        }
    }
    ctx->pc = 0x28B068u;
label_28b068:
    // 0x28b068: 0x200202d
    ctx->pc = 0x28b068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b06c:
    // 0x28b06c: 0x24050005
    ctx->pc = 0x28b06cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
label_28b070:
    // 0x28b070: 0x44806000
    ctx->pc = 0x28b070u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28b074:
    // 0x28b074: 0x3c060040
    ctx->pc = 0x28b074u;
    SET_GPR_U32(ctx, 6, ((uint32_t)64 << 16));
label_28b078:
    // 0x28b078: 0x3c014234
    ctx->pc = 0x28b078u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16948 << 16));
label_28b07c:
    // 0x28b07c: 0x44816800
    ctx->pc = 0x28b07cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_28b080:
    // 0x28b080: 0xc08b096
label_28b084:
    if (ctx->pc == 0x28B084u) {
        ctx->pc = 0x28B088u;
        goto label_28b088;
    }
    ctx->pc = 0x28B080u;
    SET_GPR_U32(ctx, 31, 0x28B088u);
    ctx->pc = 0x22C258u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerAddPowerup_0x22c258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B088u; }
    }
    if (ctx->pc != 0x28B088u) { return; }
    ctx->pc = 0x28B088u;
label_28b088:
    // 0x28b088: 0x10000013
label_28b08c:
    if (ctx->pc == 0x28B08Cu) {
        ctx->pc = 0x28B08Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x28B090u;
        goto label_28b090;
    }
    ctx->pc = 0x28B088u;
    {
        const bool branch_taken_0x28b088 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B08Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x28b088) {
            ctx->pc = 0x28B0D8u;
            goto label_28b0d8;
        }
    }
    ctx->pc = 0x28B090u;
label_28b090:
    // 0x28b090: 0x200202d
    ctx->pc = 0x28b090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b094:
    // 0x28b094: 0x24050006
    ctx->pc = 0x28b094u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
label_28b098:
    // 0x28b098: 0x44806000
    ctx->pc = 0x28b098u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28b09c:
    // 0x28b09c: 0x3c060008
    ctx->pc = 0x28b09cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)8 << 16));
label_28b0a0:
    // 0x28b0a0: 0x3c0142f0
    ctx->pc = 0x28b0a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17136 << 16));
label_28b0a4:
    // 0x28b0a4: 0x44816800
    ctx->pc = 0x28b0a4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_28b0a8:
    // 0x28b0a8: 0xc08b096
label_28b0ac:
    if (ctx->pc == 0x28B0ACu) {
        ctx->pc = 0x28B0B0u;
        goto label_28b0b0;
    }
    ctx->pc = 0x28B0A8u;
    SET_GPR_U32(ctx, 31, 0x28B0B0u);
    ctx->pc = 0x22C258u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerAddPowerup_0x22c258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B0B0u; }
    }
    if (ctx->pc != 0x28B0B0u) { return; }
    ctx->pc = 0x28B0B0u;
label_28b0b0:
    // 0x28b0b0: 0x10000009
label_28b0b4:
    if (ctx->pc == 0x28B0B4u) {
        ctx->pc = 0x28B0B4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x28B0B8u;
        goto label_28b0b8;
    }
    ctx->pc = 0x28B0B0u;
    {
        const bool branch_taken_0x28b0b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B0B4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x28b0b0) {
            ctx->pc = 0x28B0D8u;
            goto label_28b0d8;
        }
    }
    ctx->pc = 0x28B0B8u;
label_28b0b8:
    // 0x28b0b8: 0x200202d
    ctx->pc = 0x28b0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b0bc:
    // 0x28b0bc: 0x24050009
    ctx->pc = 0x28b0bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
label_28b0c0:
    // 0x28b0c0: 0x44806000
    ctx->pc = 0x28b0c0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_28b0c4:
    // 0x28b0c4: 0x3c0141c8
    ctx->pc = 0x28b0c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16840 << 16));
label_28b0c8:
    // 0x28b0c8: 0x44816800
    ctx->pc = 0x28b0c8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_28b0cc:
    // 0x28b0cc: 0xc08b096
label_28b0d0:
    if (ctx->pc == 0x28B0D0u) {
        ctx->pc = 0x28B0D0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x28B0D4u;
        goto label_28b0d4;
    }
    ctx->pc = 0x28B0CCu;
    SET_GPR_U32(ctx, 31, 0x28B0D4u);
    ctx->pc = 0x28B0D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x22C258u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerAddPowerup_0x22c258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B0D4u; }
    }
    if (ctx->pc != 0x28B0D4u) { return; }
    ctx->pc = 0x28B0D4u;
label_28b0d4:
    // 0x28b0d4: 0x8fa20004
    ctx->pc = 0x28b0d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_28b0d8:
    // 0x28b0d8: 0x10400013
label_28b0dc:
    if (ctx->pc == 0x28B0DCu) {
        ctx->pc = 0x28B0DCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x28B0E0u;
        goto label_28b0e0;
    }
    ctx->pc = 0x28B0D8u;
    {
        const bool branch_taken_0x28b0d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B0DCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x28b0d8) {
            ctx->pc = 0x28B128u;
            goto label_28b128;
        }
    }
    ctx->pc = 0x28B0E0u;
label_28b0e0:
    // 0x28b0e0: 0x8e021a20
    ctx->pc = 0x28b0e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6688)));
label_28b0e4:
    // 0x28b0e4: 0x431023
    ctx->pc = 0x28b0e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28b0e8:
    // 0x28b0e8: 0xae021a20
    ctx->pc = 0x28b0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6688), GPR_U32(ctx, 2));
label_28b0ec:
    // 0x28b0ec: 0x8e020984
    ctx->pc = 0x28b0ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
label_28b0f0:
    // 0x28b0f0: 0x1040001a
label_28b0f4:
    if (ctx->pc == 0x28B0F4u) {
        ctx->pc = 0x28B0F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x28B0F8u;
        goto label_28b0f8;
    }
    ctx->pc = 0x28B0F0u;
    {
        const bool branch_taken_0x28b0f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B0F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28b0f0) {
            ctx->pc = 0x28B15Cu;
            goto label_28b15c;
        }
    }
    ctx->pc = 0x28B0F8u;
label_28b0f8:
    // 0x28b0f8: 0x2442b4b8
    ctx->pc = 0x28b0f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948024));
label_28b0fc:
    // 0x28b0fc: 0x111880
    ctx->pc = 0x28b0fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_28b100:
    // 0x28b100: 0x621821
    ctx->pc = 0x28b100u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28b104:
    // 0x28b104: 0x8c620000
    ctx->pc = 0x28b104u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28b108:
    // 0x28b108: 0x24420001
    ctx->pc = 0x28b108u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_28b10c:
    // 0x28b10c: 0xac620000
    ctx->pc = 0x28b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_28b110:
    // 0x28b110: 0xc098258
label_28b114:
    if (ctx->pc == 0x28B114u) {
        ctx->pc = 0x28B114u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28B118u;
        goto label_28b118;
    }
    ctx->pc = 0x28B110u;
    SET_GPR_U32(ctx, 31, 0x28B118u);
    ctx->pc = 0x28B114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x260960u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPickup_0x260960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B118u; }
    }
    if (ctx->pc != 0x28B118u) { return; }
    ctx->pc = 0x28B118u;
label_28b118:
    // 0x28b118: 0xc08b46c
label_28b11c:
    if (ctx->pc == 0x28B11Cu) {
        ctx->pc = 0x28B11Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28B120u;
        goto label_28b120;
    }
    ctx->pc = 0x28B118u;
    SET_GPR_U32(ctx, 31, 0x28B120u);
    ctx->pc = 0x28B11Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22D1B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerProcessPowerups_0x22d1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B120u; }
    }
    if (ctx->pc != 0x28B120u) { return; }
    ctx->pc = 0x28B120u;
label_28b120:
    // 0x28b120: 0x1000000f
label_28b124:
    if (ctx->pc == 0x28B124u) {
        ctx->pc = 0x28B124u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x28B128u;
        goto label_28b128;
    }
    ctx->pc = 0x28B120u;
    {
        const bool branch_taken_0x28b120 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B124u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x28b120) {
            ctx->pc = 0x28B160u;
            goto label_28b160;
        }
    }
    ctx->pc = 0x28B128u;
label_28b128:
    // 0x28b128: 0xc098196
label_28b12c:
    if (ctx->pc == 0x28B12Cu) {
        ctx->pc = 0x28B130u;
        goto label_28b130;
    }
    ctx->pc = 0x28B128u;
    SET_GPR_U32(ctx, 31, 0x28B130u);
    ctx->pc = 0x260658u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioBuzzer_0x260658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B130u; }
    }
    if (ctx->pc != 0x28B130u) { return; }
    ctx->pc = 0x28B130u;
label_28b130:
    // 0x28b130: 0x1000000b
label_28b134:
    if (ctx->pc == 0x28B134u) {
        ctx->pc = 0x28B134u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x28B138u;
        goto label_28b138;
    }
    ctx->pc = 0x28B130u;
    {
        const bool branch_taken_0x28b130 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B134u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x28b130) {
            ctx->pc = 0x28B160u;
            goto label_28b160;
        }
    }
    ctx->pc = 0x28B138u;
label_28b138:
    // 0x28b138: 0xc081cfc
label_28b13c:
    if (ctx->pc == 0x28B13Cu) {
        ctx->pc = 0x28B13Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28B140u;
        goto label_28b140;
    }
    ctx->pc = 0x28B138u;
    SET_GPR_U32(ctx, 31, 0x28B140u);
    ctx->pc = 0x28B13Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2073F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_menu_back_0x2073f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B140u; }
    }
    if (ctx->pc != 0x28B140u) { return; }
    ctx->pc = 0x28B140u;
label_28b140:
    // 0x28b140: 0x10400007
label_28b144:
    if (ctx->pc == 0x28B144u) {
        ctx->pc = 0x28B144u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x28B148u;
        goto label_28b148;
    }
    ctx->pc = 0x28B140u;
    {
        const bool branch_taken_0x28b140 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B144u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x28b140) {
            ctx->pc = 0x28B160u;
            goto label_28b160;
        }
    }
    ctx->pc = 0x28B148u;
label_28b148:
    // 0x28b148: 0x8e020984
    ctx->pc = 0x28b148u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
label_28b14c:
    // 0x28b14c: 0x10400004
label_28b150:
    if (ctx->pc == 0x28B150u) {
        ctx->pc = 0x28B150u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28B154u;
        goto label_28b154;
    }
    ctx->pc = 0x28B14Cu;
    {
        const bool branch_taken_0x28b14c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B150u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28b14c) {
            ctx->pc = 0x28B160u;
            goto label_28b160;
        }
    }
    ctx->pc = 0x28B154u;
label_28b154:
    // 0x28b154: 0xae000984
    ctx->pc = 0x28b154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2436), GPR_U32(ctx, 0));
label_28b158:
    // 0x28b158: 0xafa2000c
    ctx->pc = 0x28b158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_28b15c:
    // 0x28b15c: 0x8fa30004
    ctx->pc = 0x28b15cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_28b160:
    // 0x28b160: 0x1060005d
label_28b164:
    if (ctx->pc == 0x28B164u) {
        ctx->pc = 0x28B164u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->pc = 0x28B168u;
        goto label_28b168;
    }
    ctx->pc = 0x28B160u;
    {
        const bool branch_taken_0x28b160 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B164u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        if (branch_taken_0x28b160) {
            ctx->pc = 0x28B2D8u;
            goto label_28b2d8;
        }
    }
    ctx->pc = 0x28B168u;
label_28b168:
    // 0x28b168: 0xc0a29ea
label_28b16c:
    if (ctx->pc == 0x28B16Cu) {
        ctx->pc = 0x28B16Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28B170u;
        goto label_28b170;
    }
    ctx->pc = 0x28B168u;
    SET_GPR_U32(ctx, 31, 0x28B170u);
    ctx->pc = 0x28B16Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28A7A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        make_skiplist_0x28a7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B170u; }
    }
    if (ctx->pc != 0x28B170u) { return; }
    ctx->pc = 0x28B170u;
label_28b170:
    // 0x28b170: 0x3c030035
    ctx->pc = 0x28b170u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_28b174:
    // 0x28b174: 0x2463b930
    ctx->pc = 0x28b174u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294949168));
label_28b178:
    // 0x28b178: 0x8e040984
    ctx->pc = 0x28b178u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
label_28b17c:
    // 0x28b17c: 0x42880
    ctx->pc = 0x28b17cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 2));
label_28b180:
    // 0x28b180: 0x111200
    ctx->pc = 0x28b180u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 8));
label_28b184:
    // 0x28b184: 0xa22821
    ctx->pc = 0x28b184u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28b188:
    // 0x28b188: 0xa31821
    ctx->pc = 0x28b188u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_28b18c:
    // 0x28b18c: 0x2402001e
    ctx->pc = 0x28b18cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
label_28b190:
    // 0x28b190: 0xac620000
    ctx->pc = 0x28b190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_28b194:
    // 0x28b194: 0x3c020035
    ctx->pc = 0x28b194u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28b198:
    // 0x28b198: 0x8c43b528
    ctx->pc = 0x28b198u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948136)));
label_28b19c:
    // 0x28b19c: 0x24020050
    ctx->pc = 0x28b19cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
label_28b1a0:
    // 0x28b1a0: 0x822018
    ctx->pc = 0x28b1a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28b1a4:
    // 0x28b1a4: 0x832021
    ctx->pc = 0x28b1a4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_28b1a8:
    // 0x28b1a8: 0x8e021a20
    ctx->pc = 0x28b1a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6688)));
label_28b1ac:
    // 0x28b1ac: 0x8c830048
    ctx->pc = 0x28b1acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_28b1b0:
    // 0x28b1b0: 0x43102a
    ctx->pc = 0x28b1b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_28b1b4:
    // 0x28b1b4: 0x54400008
label_28b1b8:
    if (ctx->pc == 0x28B1B8u) {
        ctx->pc = 0x28B1B8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
        ctx->pc = 0x28B1BCu;
        goto label_28b1bc;
    }
    ctx->pc = 0x28B1B4u;
    {
        const bool branch_taken_0x28b1b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28b1b4) {
            ctx->pc = 0x28B1B8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
            ctx->pc = 0x28B1D8u;
            goto label_28b1d8;
        }
    }
    ctx->pc = 0x28B1BCu;
label_28b1bc:
    // 0x28b1bc: 0x3c020035
    ctx->pc = 0x28b1bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28b1c0:
    // 0x28b1c0: 0x2442bd30
    ctx->pc = 0x28b1c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950192));
label_28b1c4:
    // 0x28b1c4: 0xa21021
    ctx->pc = 0x28b1c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28b1c8:
    // 0x28b1c8: 0x8c420000
    ctx->pc = 0x28b1c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28b1cc:
    // 0x28b1cc: 0x10400018
label_28b1d0:
    if (ctx->pc == 0x28B1D0u) {
        ctx->pc = 0x28B1D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x28B1D4u;
        goto label_28b1d4;
    }
    ctx->pc = 0x28B1CCu;
    {
        const bool branch_taken_0x28b1cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B1D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x28b1cc) {
            ctx->pc = 0x28B230u;
            goto label_28b230;
        }
    }
    ctx->pc = 0x28B1D4u;
label_28b1d4:
    // 0x28b1d4: 0x8e020984
    ctx->pc = 0x28b1d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
label_28b1d8:
    // 0x28b1d8: 0x2445ffff
    ctx->pc = 0x28b1d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294967295));
label_28b1dc:
    // 0x28b1dc: 0xae050984
    ctx->pc = 0x28b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2436), GPR_U32(ctx, 5));
label_28b1e0:
    // 0x28b1e0: 0x3c020035
    ctx->pc = 0x28b1e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28b1e4:
    // 0x28b1e4: 0x8c43b528
    ctx->pc = 0x28b1e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948136)));
label_28b1e8:
    // 0x28b1e8: 0x24020050
    ctx->pc = 0x28b1e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
label_28b1ec:
    // 0x28b1ec: 0xa21018
    ctx->pc = 0x28b1ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28b1f0:
    // 0x28b1f0: 0x431021
    ctx->pc = 0x28b1f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28b1f4:
    // 0x28b1f4: 0x8e031a20
    ctx->pc = 0x28b1f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 6688)));
label_28b1f8:
    // 0x28b1f8: 0x8c420048
    ctx->pc = 0x28b1f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_28b1fc:
    // 0x28b1fc: 0x62182a
    ctx->pc = 0x28b1fcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_28b200:
    // 0x28b200: 0x5460fff5
label_28b204:
    if (ctx->pc == 0x28B204u) {
        ctx->pc = 0x28B204u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
        ctx->pc = 0x28B208u;
        goto label_28b208;
    }
    ctx->pc = 0x28B200u;
    {
        const bool branch_taken_0x28b200 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x28b200) {
            ctx->pc = 0x28B204u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
            ctx->pc = 0x28B1D8u;
            goto label_28b1d8;
        }
    }
    ctx->pc = 0x28B208u;
label_28b208:
    // 0x28b208: 0x3c040035
    ctx->pc = 0x28b208u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_28b20c:
    // 0x28b20c: 0x2484bd30
    ctx->pc = 0x28b20cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950192));
label_28b210:
    // 0x28b210: 0x51080
    ctx->pc = 0x28b210u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_28b214:
    // 0x28b214: 0x111a00
    ctx->pc = 0x28b214u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 8));
label_28b218:
    // 0x28b218: 0x431021
    ctx->pc = 0x28b218u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28b21c:
    // 0x28b21c: 0x441021
    ctx->pc = 0x28b21cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28b220:
    // 0x28b220: 0x8c420000
    ctx->pc = 0x28b220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28b224:
    // 0x28b224: 0x5440ffec
label_28b228:
    if (ctx->pc == 0x28B228u) {
        ctx->pc = 0x28B228u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
        ctx->pc = 0x28B22Cu;
        goto label_28b22c;
    }
    ctx->pc = 0x28B224u;
    {
        const bool branch_taken_0x28b224 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28b224) {
            ctx->pc = 0x28B228u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
            ctx->pc = 0x28B1D8u;
            goto label_28b1d8;
        }
    }
    ctx->pc = 0x28B22Cu;
label_28b22c:
    // 0x28b22c: 0x3c02003c
    ctx->pc = 0x28b22cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28b230:
    // 0x28b230: 0x24423db0
    ctx->pc = 0x28b230u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15792));
label_28b234:
    // 0x28b234: 0x111880
    ctx->pc = 0x28b234u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_28b238:
    // 0x28b238: 0x621821
    ctx->pc = 0x28b238u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28b23c:
    // 0x28b23c: 0x8e040984
    ctx->pc = 0x28b23cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
label_28b240:
    // 0x28b240: 0x8c620000
    ctx->pc = 0x28b240u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28b244:
    // 0x28b244: 0x82102a
    ctx->pc = 0x28b244u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
label_28b248:
    // 0x28b248: 0x50400007
label_28b24c:
    if (ctx->pc == 0x28B24Cu) {
        ctx->pc = 0x28B24Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
        ctx->pc = 0x28B250u;
        goto label_28b250;
    }
    ctx->pc = 0x28B248u;
    {
        const bool branch_taken_0x28b248 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28b248) {
            ctx->pc = 0x28B24Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
            ctx->pc = 0x28B268u;
            goto label_28b268;
        }
    }
    ctx->pc = 0x28B250u;
label_28b250:
    // 0x28b250: 0xac640000
    ctx->pc = 0x28b250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_28b254:
    // 0x28b254: 0xc0a2a56
label_28b258:
    if (ctx->pc == 0x28B258u) {
        ctx->pc = 0x28B258u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28B25Cu;
        goto label_28b25c;
    }
    ctx->pc = 0x28B254u;
    SET_GPR_U32(ctx, 31, 0x28B25Cu);
    ctx->pc = 0x28B258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28A958u;
    {
        const uint32_t __entryPc = ctx->pc;
        recalc_afford_idx_0x28a958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B25Cu; }
    }
    if (ctx->pc != 0x28B25Cu) { return; }
    ctx->pc = 0x28B25Cu;
label_28b25c:
    // 0x28b25c: 0x24020001
    ctx->pc = 0x28b25cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_28b260:
    // 0x28b260: 0xafa2000c
    ctx->pc = 0x28b260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_28b264:
    // 0x28b264: 0x8e020984
    ctx->pc = 0x28b264u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
label_28b268:
    // 0x28b268: 0x24450001
    ctx->pc = 0x28b268u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
label_28b26c:
    // 0x28b26c: 0x3c020035
    ctx->pc = 0x28b26cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28b270:
    // 0x28b270: 0x8c42b52c
    ctx->pc = 0x28b270u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948140)));
label_28b274:
    // 0x28b274: 0xa2102a
    ctx->pc = 0x28b274u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
label_28b278:
    // 0x28b278: 0x10400016
label_28b27c:
    if (ctx->pc == 0x28B27Cu) {
        ctx->pc = 0x28B27Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        ctx->pc = 0x28B280u;
        goto label_28b280;
    }
    ctx->pc = 0x28B278u;
    {
        const bool branch_taken_0x28b278 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B27Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        if (branch_taken_0x28b278) {
            ctx->pc = 0x28B2D4u;
            goto label_28b2d4;
        }
    }
    ctx->pc = 0x28B280u;
label_28b280:
    // 0x28b280: 0x2484b530
    ctx->pc = 0x28b280u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948144));
label_28b284:
    // 0x28b284: 0x51080
    ctx->pc = 0x28b284u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_28b288:
    // 0x28b288: 0x111a00
    ctx->pc = 0x28b288u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 8));
label_28b28c:
    // 0x28b28c: 0x431021
    ctx->pc = 0x28b28cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28b290:
    // 0x28b290: 0x441021
    ctx->pc = 0x28b290u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28b294:
    // 0x28b294: 0x8c420000
    ctx->pc = 0x28b294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28b298:
    // 0x28b298: 0x1040000e
label_28b29c:
    if (ctx->pc == 0x28B29Cu) {
        ctx->pc = 0x28B29Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x28B2A0u;
        goto label_28b2a0;
    }
    ctx->pc = 0x28B298u;
    {
        const bool branch_taken_0x28b298 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B29Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28b298) {
            ctx->pc = 0x28B2D4u;
            goto label_28b2d4;
        }
    }
    ctx->pc = 0x28B2A0u;
label_28b2a0:
    // 0x28b2a0: 0x8c44b52c
    ctx->pc = 0x28b2a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294948140)));
label_28b2a4:
    // 0x28b2a4: 0x3c020035
    ctx->pc = 0x28b2a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28b2a8:
    // 0x28b2a8: 0x2446b530
    ctx->pc = 0x28b2a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294948144));
label_28b2ac:
    // 0x28b2ac: 0x24a50001
    ctx->pc = 0x28b2acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_28b2b0:
    // 0x28b2b0: 0xa4102a
    ctx->pc = 0x28b2b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
label_28b2b4:
    // 0x28b2b4: 0x10400007
label_28b2b8:
    if (ctx->pc == 0x28B2B8u) {
        ctx->pc = 0x28B2B8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x28B2BCu;
        goto label_28b2bc;
    }
    ctx->pc = 0x28B2B4u;
    {
        const bool branch_taken_0x28b2b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B2B8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x28b2b4) {
            ctx->pc = 0x28B2D4u;
            goto label_28b2d4;
        }
    }
    ctx->pc = 0x28B2BCu;
label_28b2bc:
    // 0x28b2bc: 0x111a00
    ctx->pc = 0x28b2bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 8));
label_28b2c0:
    // 0x28b2c0: 0x431021
    ctx->pc = 0x28b2c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28b2c4:
    // 0x28b2c4: 0x461021
    ctx->pc = 0x28b2c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_28b2c8:
    // 0x28b2c8: 0x8c420000
    ctx->pc = 0x28b2c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28b2cc:
    // 0x28b2cc: 0x5440fff8
label_28b2d0:
    if (ctx->pc == 0x28B2D0u) {
        ctx->pc = 0x28B2D0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x28B2D4u;
        goto label_28b2d4;
    }
    ctx->pc = 0x28B2CCu;
    {
        const bool branch_taken_0x28b2cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28b2cc) {
            ctx->pc = 0x28B2D0u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x28B2B0u;
            goto label_28b2b0;
        }
    }
    ctx->pc = 0x28B2D4u;
label_28b2d4:
    // 0x28b2d4: 0x8fa3000c
    ctx->pc = 0x28b2d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_28b2d8:
    // 0x28b2d8: 0x14600045
label_28b2dc:
    if (ctx->pc == 0x28B2DCu) {
        ctx->pc = 0x28B2DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28B2E0u;
        goto label_28b2e0;
    }
    ctx->pc = 0x28B2D8u;
    {
        const bool branch_taken_0x28b2d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x28B2DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x28b2d8) {
            ctx->pc = 0x28B3F0u;
            goto label_28b3f0;
        }
    }
    ctx->pc = 0x28B2E0u;
label_28b2e0:
    // 0x28b2e0: 0x3c02003c
    ctx->pc = 0x28b2e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28b2e4:
    // 0x28b2e4: 0x24423db0
    ctx->pc = 0x28b2e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15792));
label_28b2e8:
    // 0x28b2e8: 0x111880
    ctx->pc = 0x28b2e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_28b2ec:
    // 0x28b2ec: 0x621821
    ctx->pc = 0x28b2ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28b2f0:
    // 0x28b2f0: 0x8e020984
    ctx->pc = 0x28b2f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
label_28b2f4:
    // 0x28b2f4: 0x8c650000
    ctx->pc = 0x28b2f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28b2f8:
    // 0x28b2f8: 0x452023
    ctx->pc = 0x28b2f8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_28b2fc:
    // 0x28b2fc: 0x28820007
    ctx->pc = 0x28b2fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 7));
label_28b300:
    // 0x28b300: 0x14400003
label_28b304:
    if (ctx->pc == 0x28B304u) {
        ctx->pc = 0x28B304u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x28B308u;
        goto label_28b308;
    }
    ctx->pc = 0x28B300u;
    {
        const bool branch_taken_0x28b300 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28B304u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x28b300) {
            ctx->pc = 0x28B310u;
            goto label_28b310;
        }
    }
    ctx->pc = 0x28B308u;
label_28b308:
    // 0x28b308: 0x10000009
label_28b30c:
    if (ctx->pc == 0x28B30Cu) {
        ctx->pc = 0x28B30Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967290));
        ctx->pc = 0x28B310u;
        goto label_28b310;
    }
    ctx->pc = 0x28B308u;
    {
        const bool branch_taken_0x28b308 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B30Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967290));
        if (branch_taken_0x28b308) {
            ctx->pc = 0x28B330u;
            goto label_28b330;
        }
    }
    ctx->pc = 0x28B310u;
label_28b310:
    // 0x28b310: 0x24423db0
    ctx->pc = 0x28b310u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15792));
label_28b314:
    // 0x28b314: 0x111880
    ctx->pc = 0x28b314u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_28b318:
    // 0x28b318: 0x621821
    ctx->pc = 0x28b318u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28b31c:
    // 0x28b31c: 0x8e020984
    ctx->pc = 0x28b31cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
label_28b320:
    // 0x28b320: 0x8c640000
    ctx->pc = 0x28b320u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28b324:
    // 0x28b324: 0x441023
    ctx->pc = 0x28b324u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28b328:
    // 0x28b328: 0x4430004
label_28b32c:
    if (ctx->pc == 0x28B32Cu) {
        ctx->pc = 0x28B32Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x28B330u;
        goto label_28b330;
    }
    ctx->pc = 0x28B328u;
    {
        const bool branch_taken_0x28b328 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x28b328) {
            ctx->pc = 0x28B32Cu;
            SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
            ctx->pc = 0x28B33Cu;
            goto label_28b33c;
        }
    }
    ctx->pc = 0x28B330u;
label_28b330:
    // 0x28b330: 0x441021
    ctx->pc = 0x28b330u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28b334:
    // 0x28b334: 0x1000002d
label_28b338:
    if (ctx->pc == 0x28B338u) {
        ctx->pc = 0x28B338u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x28B33Cu;
        goto label_28b33c;
    }
    ctx->pc = 0x28B334u;
    {
        const bool branch_taken_0x28b334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B338u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x28b334) {
            ctx->pc = 0x28B3ECu;
            goto label_28b3ec;
        }
    }
    ctx->pc = 0x28B33Cu;
label_28b33c:
    // 0x28b33c: 0x24423da0
    ctx->pc = 0x28b33cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15776));
label_28b340:
    // 0x28b340: 0x112880
    ctx->pc = 0x28b340u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 2));
label_28b344:
    // 0x28b344: 0xa21021
    ctx->pc = 0x28b344u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28b348:
    // 0x28b348: 0x3c03003c
    ctx->pc = 0x28b348u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_28b34c:
    // 0x28b34c: 0x24633db0
    ctx->pc = 0x28b34cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15792));
label_28b350:
    // 0x28b350: 0xa33021
    ctx->pc = 0x28b350u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_28b354:
    // 0x28b354: 0x8e030984
    ctx->pc = 0x28b354u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
label_28b358:
    // 0x28b358: 0x8cc40000
    ctx->pc = 0x28b358u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_28b35c:
    // 0x28b35c: 0x641823
    ctx->pc = 0x28b35cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28b360:
    // 0x28b360: 0x8c420000
    ctx->pc = 0x28b360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28b364:
    // 0x28b364: 0x43182a
    ctx->pc = 0x28b364u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_28b368:
    // 0x28b368: 0x1060000d
label_28b36c:
    if (ctx->pc == 0x28B36Cu) {
        ctx->pc = 0x28B36Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
        ctx->pc = 0x28B370u;
        goto label_28b370;
    }
    ctx->pc = 0x28B368u;
    {
        const bool branch_taken_0x28b368 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B36Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
        if (branch_taken_0x28b368) {
            ctx->pc = 0x28B3A0u;
            goto label_28b3a0;
        }
    }
    ctx->pc = 0x28B370u;
label_28b370:
    // 0x28b370: 0x5440001f
label_28b374:
    if (ctx->pc == 0x28B374u) {
        ctx->pc = 0x28B374u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28B378u;
        goto label_28b378;
    }
    ctx->pc = 0x28B370u;
    {
        const bool branch_taken_0x28b370 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28b370) {
            ctx->pc = 0x28B374u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x28B3F0u;
            goto label_28b3f0;
        }
    }
    ctx->pc = 0x28B378u;
label_28b378:
    // 0x28b378: 0x3c02003c
    ctx->pc = 0x28b378u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28b37c:
    // 0x28b37c: 0x24423de0
    ctx->pc = 0x28b37cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15840));
label_28b380:
    // 0x28b380: 0xa21021
    ctx->pc = 0x28b380u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28b384:
    // 0x28b384: 0x24830007
    ctx->pc = 0x28b384u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 7));
label_28b388:
    // 0x28b388: 0x8c420000
    ctx->pc = 0x28b388u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28b38c:
    // 0x28b38c: 0x431023
    ctx->pc = 0x28b38cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28b390:
    // 0x28b390: 0x18400016
label_28b394:
    if (ctx->pc == 0x28B394u) {
        ctx->pc = 0x28B394u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x28B398u;
        goto label_28b398;
    }
    ctx->pc = 0x28B390u;
    {
        const bool branch_taken_0x28b390 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28B394u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x28b390) {
            ctx->pc = 0x28B3ECu;
            goto label_28b3ec;
        }
    }
    ctx->pc = 0x28B398u;
label_28b398:
    // 0x28b398: 0x10000014
label_28b39c:
    if (ctx->pc == 0x28B39Cu) {
        ctx->pc = 0x28B39Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x28B3A0u;
        goto label_28b3a0;
    }
    ctx->pc = 0x28B398u;
    {
        const bool branch_taken_0x28b398 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B39Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x28b398) {
            ctx->pc = 0x28B3ECu;
            goto label_28b3ec;
        }
    }
    ctx->pc = 0x28B3A0u;
label_28b3a0:
    // 0x28b3a0: 0x3c03003c
    ctx->pc = 0x28b3a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_28b3a4:
    // 0x28b3a4: 0x24633da0
    ctx->pc = 0x28b3a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15776));
label_28b3a8:
    // 0x28b3a8: 0x112080
    ctx->pc = 0x28b3a8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 2));
label_28b3ac:
    // 0x28b3ac: 0x831821
    ctx->pc = 0x28b3acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_28b3b0:
    // 0x28b3b0: 0x3c02003c
    ctx->pc = 0x28b3b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28b3b4:
    // 0x28b3b4: 0x24423db0
    ctx->pc = 0x28b3b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15792));
label_28b3b8:
    // 0x28b3b8: 0x822021
    ctx->pc = 0x28b3b8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_28b3bc:
    // 0x28b3bc: 0x8e020984
    ctx->pc = 0x28b3bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2436)));
label_28b3c0:
    // 0x28b3c0: 0x8c850000
    ctx->pc = 0x28b3c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28b3c4:
    // 0x28b3c4: 0x451023
    ctx->pc = 0x28b3c4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_28b3c8:
    // 0x28b3c8: 0x8c630000
    ctx->pc = 0x28b3c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28b3cc:
    // 0x28b3cc: 0x43102a
    ctx->pc = 0x28b3ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_28b3d0:
    // 0x28b3d0: 0x10400006
label_28b3d4:
    if (ctx->pc == 0x28B3D4u) {
        ctx->pc = 0x28B3D4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x28B3D8u;
        goto label_28b3d8;
    }
    ctx->pc = 0x28B3D0u;
    {
        const bool branch_taken_0x28b3d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B3D4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
        if (branch_taken_0x28b3d0) {
            ctx->pc = 0x28B3ECu;
            goto label_28b3ec;
        }
    }
    ctx->pc = 0x28B3D8u;
label_28b3d8:
    // 0x28b3d8: 0x50400005
label_28b3dc:
    if (ctx->pc == 0x28B3DCu) {
        ctx->pc = 0x28B3DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28B3E0u;
        goto label_28b3e0;
    }
    ctx->pc = 0x28B3D8u;
    {
        const bool branch_taken_0x28b3d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28b3d8) {
            ctx->pc = 0x28B3DCu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x28B3F0u;
            goto label_28b3f0;
        }
    }
    ctx->pc = 0x28B3E0u;
label_28b3e0:
    // 0x28b3e0: 0x18a00002
label_28b3e4:
    if (ctx->pc == 0x28B3E4u) {
        ctx->pc = 0x28B3E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x28B3E8u;
        goto label_28b3e8;
    }
    ctx->pc = 0x28B3E0u;
    {
        const bool branch_taken_0x28b3e0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x28B3E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
        if (branch_taken_0x28b3e0) {
            ctx->pc = 0x28B3ECu;
            goto label_28b3ec;
        }
    }
    ctx->pc = 0x28B3E8u;
label_28b3e8:
    // 0x28b3e8: 0xac820000
    ctx->pc = 0x28b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_28b3ec:
    // 0x28b3ec: 0x2405ffff
    ctx->pc = 0x28b3ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_28b3f0:
    // 0x28b3f0: 0x220202d
    ctx->pc = 0x28b3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28b3f4:
    // 0x28b3f4: 0x8fa2000c
    ctx->pc = 0x28b3f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_28b3f8:
    // 0x28b3f8: 0xc0a2838
label_28b3fc:
    if (ctx->pc == 0x28B3FCu) {
        ctx->pc = 0x28B3FCu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 23));
        ctx->pc = 0x28B400u;
        goto label_28b400;
    }
    ctx->pc = 0x28B3F8u;
    SET_GPR_U32(ctx, 31, 0x28B400u);
    ctx->pc = 0x28B3FCu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 23));
    ctx->pc = 0x28A0E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        write_shop_menu_0x28a0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B400u; }
    }
    if (ctx->pc != 0x28B400u) { return; }
    ctx->pc = 0x28B400u;
label_28b400:
    // 0x28b400: 0x3c03003c
    ctx->pc = 0x28b400u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_28b404:
    // 0x28b404: 0x24633dc0
    ctx->pc = 0x28b404u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15808));
label_28b408:
    // 0x28b408: 0x112080
    ctx->pc = 0x28b408u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 2));
label_28b40c:
    // 0x28b40c: 0x831821
    ctx->pc = 0x28b40cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_28b410:
    // 0x28b410: 0xac620000
    ctx->pc = 0x28b410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_28b414:
    // 0x28b414: 0x3c020035
    ctx->pc = 0x28b414u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28b418:
    // 0x28b418: 0x2442b3f0
    ctx->pc = 0x28b418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947824));
label_28b41c:
    // 0x28b41c: 0x822021
    ctx->pc = 0x28b41cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_28b420:
    // 0x28b420: 0x8c840000
    ctx->pc = 0x28b420u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28b424:
    // 0x28b424: 0x42023
    ctx->pc = 0x28b424u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_28b428:
    // 0x28b428: 0x24050008
    ctx->pc = 0x28b428u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
label_28b42c:
    // 0x28b42c: 0x24060006
    ctx->pc = 0x28b42cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
label_28b430:
    // 0x28b430: 0x382d
    ctx->pc = 0x28b430u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b434:
    // 0x28b434: 0x3c013ee6
    ctx->pc = 0x28b434u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16102 << 16));
label_28b438:
    // 0x28b438: 0x34216666
    ctx->pc = 0x28b438u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
label_28b43c:
    // 0x28b43c: 0x44816000
    ctx->pc = 0x28b43cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_28b440:
    // 0x28b440: 0x3c08003b
    ctx->pc = 0x28b440u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_28b444:
    // 0x28b444: 0xc080510
label_28b448:
    if (ctx->pc == 0x28B448u) {
        ctx->pc = 0x28B448u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957384));
        ctx->pc = 0x28B44Cu;
        goto label_28b44c;
    }
    ctx->pc = 0x28B444u;
    SET_GPR_U32(ctx, 31, 0x28B44Cu);
    ctx->pc = 0x28B448u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957384));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B44Cu; }
    }
    if (ctx->pc != 0x28B44Cu) { return; }
    ctx->pc = 0x28B44Cu;
label_28b44c:
    // 0x28b44c: 0x8fa20008
    ctx->pc = 0x28b44cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_28b450:
    // 0x28b450: 0xdfbf00b0
    ctx->pc = 0x28b450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_28b454:
    // 0x28b454: 0xdfbe00a0
    ctx->pc = 0x28b454u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_28b458:
    // 0x28b458: 0xdfb70090
    ctx->pc = 0x28b458u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_28b45c:
    // 0x28b45c: 0xdfb60080
    ctx->pc = 0x28b45cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_28b460:
    // 0x28b460: 0xdfb50070
    ctx->pc = 0x28b460u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_28b464:
    // 0x28b464: 0xdfb40060
    ctx->pc = 0x28b464u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_28b468:
    // 0x28b468: 0xdfb30050
    ctx->pc = 0x28b468u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28b46c:
    // 0x28b46c: 0xdfb20040
    ctx->pc = 0x28b46cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28b470:
    // 0x28b470: 0xdfb10030
    ctx->pc = 0x28b470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28b474:
    // 0x28b474: 0xdfb00020
    ctx->pc = 0x28b474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28b478:
    // 0x28b478: 0x3e00008
label_28b47c:
    if (ctx->pc == 0x28B47Cu) {
        ctx->pc = 0x28B47Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x28B480u;
        goto label_fallthrough_0x28b478;
    }
    ctx->pc = 0x28B478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B47Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A9F8u: goto label_28a9f8;
            case 0x28A9FCu: goto label_28a9fc;
            case 0x28AA00u: goto label_28aa00;
            case 0x28AA04u: goto label_28aa04;
            case 0x28AA08u: goto label_28aa08;
            case 0x28AA0Cu: goto label_28aa0c;
            case 0x28AA10u: goto label_28aa10;
            case 0x28AA14u: goto label_28aa14;
            case 0x28AA18u: goto label_28aa18;
            case 0x28AA1Cu: goto label_28aa1c;
            case 0x28AA20u: goto label_28aa20;
            case 0x28AA24u: goto label_28aa24;
            case 0x28AA28u: goto label_28aa28;
            case 0x28AA2Cu: goto label_28aa2c;
            case 0x28AA30u: goto label_28aa30;
            case 0x28AA34u: goto label_28aa34;
            case 0x28AA38u: goto label_28aa38;
            case 0x28AA3Cu: goto label_28aa3c;
            case 0x28AA40u: goto label_28aa40;
            case 0x28AA44u: goto label_28aa44;
            case 0x28AA48u: goto label_28aa48;
            case 0x28AA4Cu: goto label_28aa4c;
            case 0x28AA50u: goto label_28aa50;
            case 0x28AA54u: goto label_28aa54;
            case 0x28AA58u: goto label_28aa58;
            case 0x28AA5Cu: goto label_28aa5c;
            case 0x28AA60u: goto label_28aa60;
            case 0x28AA64u: goto label_28aa64;
            case 0x28AA68u: goto label_28aa68;
            case 0x28AA6Cu: goto label_28aa6c;
            case 0x28AA70u: goto label_28aa70;
            case 0x28AA74u: goto label_28aa74;
            case 0x28AA78u: goto label_28aa78;
            case 0x28AA7Cu: goto label_28aa7c;
            case 0x28AA80u: goto label_28aa80;
            case 0x28AA84u: goto label_28aa84;
            case 0x28AA88u: goto label_28aa88;
            case 0x28AA8Cu: goto label_28aa8c;
            case 0x28AA90u: goto label_28aa90;
            case 0x28AA94u: goto label_28aa94;
            case 0x28AA98u: goto label_28aa98;
            case 0x28AA9Cu: goto label_28aa9c;
            case 0x28AAA0u: goto label_28aaa0;
            case 0x28AAA4u: goto label_28aaa4;
            case 0x28AAA8u: goto label_28aaa8;
            case 0x28AAACu: goto label_28aaac;
            case 0x28AAB0u: goto label_28aab0;
            case 0x28AAB4u: goto label_28aab4;
            case 0x28AAB8u: goto label_28aab8;
            case 0x28AABCu: goto label_28aabc;
            case 0x28AAC0u: goto label_28aac0;
            case 0x28AAC4u: goto label_28aac4;
            case 0x28AAC8u: goto label_28aac8;
            case 0x28AACCu: goto label_28aacc;
            case 0x28AAD0u: goto label_28aad0;
            case 0x28AAD4u: goto label_28aad4;
            case 0x28AAD8u: goto label_28aad8;
            case 0x28AADCu: goto label_28aadc;
            case 0x28AAE0u: goto label_28aae0;
            case 0x28AAE4u: goto label_28aae4;
            case 0x28AAE8u: goto label_28aae8;
            case 0x28AAECu: goto label_28aaec;
            case 0x28AAF0u: goto label_28aaf0;
            case 0x28AAF4u: goto label_28aaf4;
            case 0x28AAF8u: goto label_28aaf8;
            case 0x28AAFCu: goto label_28aafc;
            case 0x28AB00u: goto label_28ab00;
            case 0x28AB04u: goto label_28ab04;
            case 0x28AB08u: goto label_28ab08;
            case 0x28AB0Cu: goto label_28ab0c;
            case 0x28AB10u: goto label_28ab10;
            case 0x28AB14u: goto label_28ab14;
            case 0x28AB18u: goto label_28ab18;
            case 0x28AB1Cu: goto label_28ab1c;
            case 0x28AB20u: goto label_28ab20;
            case 0x28AB24u: goto label_28ab24;
            case 0x28AB28u: goto label_28ab28;
            case 0x28AB2Cu: goto label_28ab2c;
            case 0x28AB30u: goto label_28ab30;
            case 0x28AB34u: goto label_28ab34;
            case 0x28AB38u: goto label_28ab38;
            case 0x28AB3Cu: goto label_28ab3c;
            case 0x28AB40u: goto label_28ab40;
            case 0x28AB44u: goto label_28ab44;
            case 0x28AB48u: goto label_28ab48;
            case 0x28AB4Cu: goto label_28ab4c;
            case 0x28AB50u: goto label_28ab50;
            case 0x28AB54u: goto label_28ab54;
            case 0x28AB58u: goto label_28ab58;
            case 0x28AB5Cu: goto label_28ab5c;
            case 0x28AB60u: goto label_28ab60;
            case 0x28AB64u: goto label_28ab64;
            case 0x28AB68u: goto label_28ab68;
            case 0x28AB6Cu: goto label_28ab6c;
            case 0x28AB70u: goto label_28ab70;
            case 0x28AB74u: goto label_28ab74;
            case 0x28AB78u: goto label_28ab78;
            case 0x28AB7Cu: goto label_28ab7c;
            case 0x28AB80u: goto label_28ab80;
            case 0x28AB84u: goto label_28ab84;
            case 0x28AB88u: goto label_28ab88;
            case 0x28AB8Cu: goto label_28ab8c;
            case 0x28AB90u: goto label_28ab90;
            case 0x28AB94u: goto label_28ab94;
            case 0x28AB98u: goto label_28ab98;
            case 0x28AB9Cu: goto label_28ab9c;
            case 0x28ABA0u: goto label_28aba0;
            case 0x28ABA4u: goto label_28aba4;
            case 0x28ABA8u: goto label_28aba8;
            case 0x28ABACu: goto label_28abac;
            case 0x28ABB0u: goto label_28abb0;
            case 0x28ABB4u: goto label_28abb4;
            case 0x28ABB8u: goto label_28abb8;
            case 0x28ABBCu: goto label_28abbc;
            case 0x28ABC0u: goto label_28abc0;
            case 0x28ABC4u: goto label_28abc4;
            case 0x28ABC8u: goto label_28abc8;
            case 0x28ABCCu: goto label_28abcc;
            case 0x28ABD0u: goto label_28abd0;
            case 0x28ABD4u: goto label_28abd4;
            case 0x28ABD8u: goto label_28abd8;
            case 0x28ABDCu: goto label_28abdc;
            case 0x28ABE0u: goto label_28abe0;
            case 0x28ABE4u: goto label_28abe4;
            case 0x28ABE8u: goto label_28abe8;
            case 0x28ABECu: goto label_28abec;
            case 0x28ABF0u: goto label_28abf0;
            case 0x28ABF4u: goto label_28abf4;
            case 0x28ABF8u: goto label_28abf8;
            case 0x28ABFCu: goto label_28abfc;
            case 0x28AC00u: goto label_28ac00;
            case 0x28AC04u: goto label_28ac04;
            case 0x28AC08u: goto label_28ac08;
            case 0x28AC0Cu: goto label_28ac0c;
            case 0x28AC10u: goto label_28ac10;
            case 0x28AC14u: goto label_28ac14;
            case 0x28AC18u: goto label_28ac18;
            case 0x28AC1Cu: goto label_28ac1c;
            case 0x28AC20u: goto label_28ac20;
            case 0x28AC24u: goto label_28ac24;
            case 0x28AC28u: goto label_28ac28;
            case 0x28AC2Cu: goto label_28ac2c;
            case 0x28AC30u: goto label_28ac30;
            case 0x28AC34u: goto label_28ac34;
            case 0x28AC38u: goto label_28ac38;
            case 0x28AC3Cu: goto label_28ac3c;
            case 0x28AC40u: goto label_28ac40;
            case 0x28AC44u: goto label_28ac44;
            case 0x28AC48u: goto label_28ac48;
            case 0x28AC4Cu: goto label_28ac4c;
            case 0x28AC50u: goto label_28ac50;
            case 0x28AC54u: goto label_28ac54;
            case 0x28AC58u: goto label_28ac58;
            case 0x28AC5Cu: goto label_28ac5c;
            case 0x28AC60u: goto label_28ac60;
            case 0x28AC64u: goto label_28ac64;
            case 0x28AC68u: goto label_28ac68;
            case 0x28AC6Cu: goto label_28ac6c;
            case 0x28AC70u: goto label_28ac70;
            case 0x28AC74u: goto label_28ac74;
            case 0x28AC78u: goto label_28ac78;
            case 0x28AC7Cu: goto label_28ac7c;
            case 0x28AC80u: goto label_28ac80;
            case 0x28AC84u: goto label_28ac84;
            case 0x28AC88u: goto label_28ac88;
            case 0x28AC8Cu: goto label_28ac8c;
            case 0x28AC90u: goto label_28ac90;
            case 0x28AC94u: goto label_28ac94;
            case 0x28AC98u: goto label_28ac98;
            case 0x28AC9Cu: goto label_28ac9c;
            case 0x28ACA0u: goto label_28aca0;
            case 0x28ACA4u: goto label_28aca4;
            case 0x28ACA8u: goto label_28aca8;
            case 0x28ACACu: goto label_28acac;
            case 0x28ACB0u: goto label_28acb0;
            case 0x28ACB4u: goto label_28acb4;
            case 0x28ACB8u: goto label_28acb8;
            case 0x28ACBCu: goto label_28acbc;
            case 0x28ACC0u: goto label_28acc0;
            case 0x28ACC4u: goto label_28acc4;
            case 0x28ACC8u: goto label_28acc8;
            case 0x28ACCCu: goto label_28accc;
            case 0x28ACD0u: goto label_28acd0;
            case 0x28ACD4u: goto label_28acd4;
            case 0x28ACD8u: goto label_28acd8;
            case 0x28ACDCu: goto label_28acdc;
            case 0x28ACE0u: goto label_28ace0;
            case 0x28ACE4u: goto label_28ace4;
            case 0x28ACE8u: goto label_28ace8;
            case 0x28ACECu: goto label_28acec;
            case 0x28ACF0u: goto label_28acf0;
            case 0x28ACF4u: goto label_28acf4;
            case 0x28ACF8u: goto label_28acf8;
            case 0x28ACFCu: goto label_28acfc;
            case 0x28AD00u: goto label_28ad00;
            case 0x28AD04u: goto label_28ad04;
            case 0x28AD08u: goto label_28ad08;
            case 0x28AD0Cu: goto label_28ad0c;
            case 0x28AD10u: goto label_28ad10;
            case 0x28AD14u: goto label_28ad14;
            case 0x28AD18u: goto label_28ad18;
            case 0x28AD1Cu: goto label_28ad1c;
            case 0x28AD20u: goto label_28ad20;
            case 0x28AD24u: goto label_28ad24;
            case 0x28AD28u: goto label_28ad28;
            case 0x28AD2Cu: goto label_28ad2c;
            case 0x28AD30u: goto label_28ad30;
            case 0x28AD34u: goto label_28ad34;
            case 0x28AD38u: goto label_28ad38;
            case 0x28AD3Cu: goto label_28ad3c;
            case 0x28AD40u: goto label_28ad40;
            case 0x28AD44u: goto label_28ad44;
            case 0x28AD48u: goto label_28ad48;
            case 0x28AD4Cu: goto label_28ad4c;
            case 0x28AD50u: goto label_28ad50;
            case 0x28AD54u: goto label_28ad54;
            case 0x28AD58u: goto label_28ad58;
            case 0x28AD5Cu: goto label_28ad5c;
            case 0x28AD60u: goto label_28ad60;
            case 0x28AD64u: goto label_28ad64;
            case 0x28AD68u: goto label_28ad68;
            case 0x28AD6Cu: goto label_28ad6c;
            case 0x28AD70u: goto label_28ad70;
            case 0x28AD74u: goto label_28ad74;
            case 0x28AD78u: goto label_28ad78;
            case 0x28AD7Cu: goto label_28ad7c;
            case 0x28AD80u: goto label_28ad80;
            case 0x28AD84u: goto label_28ad84;
            case 0x28AD88u: goto label_28ad88;
            case 0x28AD8Cu: goto label_28ad8c;
            case 0x28AD90u: goto label_28ad90;
            case 0x28AD94u: goto label_28ad94;
            case 0x28AD98u: goto label_28ad98;
            case 0x28AD9Cu: goto label_28ad9c;
            case 0x28ADA0u: goto label_28ada0;
            case 0x28ADA4u: goto label_28ada4;
            case 0x28ADA8u: goto label_28ada8;
            case 0x28ADACu: goto label_28adac;
            case 0x28ADB0u: goto label_28adb0;
            case 0x28ADB4u: goto label_28adb4;
            case 0x28ADB8u: goto label_28adb8;
            case 0x28ADBCu: goto label_28adbc;
            case 0x28ADC0u: goto label_28adc0;
            case 0x28ADC4u: goto label_28adc4;
            case 0x28ADC8u: goto label_28adc8;
            case 0x28ADCCu: goto label_28adcc;
            case 0x28ADD0u: goto label_28add0;
            case 0x28ADD4u: goto label_28add4;
            case 0x28ADD8u: goto label_28add8;
            case 0x28ADDCu: goto label_28addc;
            case 0x28ADE0u: goto label_28ade0;
            case 0x28ADE4u: goto label_28ade4;
            case 0x28ADE8u: goto label_28ade8;
            case 0x28ADECu: goto label_28adec;
            case 0x28ADF0u: goto label_28adf0;
            case 0x28ADF4u: goto label_28adf4;
            case 0x28ADF8u: goto label_28adf8;
            case 0x28ADFCu: goto label_28adfc;
            case 0x28AE00u: goto label_28ae00;
            case 0x28AE04u: goto label_28ae04;
            case 0x28AE08u: goto label_28ae08;
            case 0x28AE0Cu: goto label_28ae0c;
            case 0x28AE10u: goto label_28ae10;
            case 0x28AE14u: goto label_28ae14;
            case 0x28AE18u: goto label_28ae18;
            case 0x28AE1Cu: goto label_28ae1c;
            case 0x28AE20u: goto label_28ae20;
            case 0x28AE24u: goto label_28ae24;
            case 0x28AE28u: goto label_28ae28;
            case 0x28AE2Cu: goto label_28ae2c;
            case 0x28AE30u: goto label_28ae30;
            case 0x28AE34u: goto label_28ae34;
            case 0x28AE38u: goto label_28ae38;
            case 0x28AE3Cu: goto label_28ae3c;
            case 0x28AE40u: goto label_28ae40;
            case 0x28AE44u: goto label_28ae44;
            case 0x28AE48u: goto label_28ae48;
            case 0x28AE4Cu: goto label_28ae4c;
            case 0x28AE50u: goto label_28ae50;
            case 0x28AE54u: goto label_28ae54;
            case 0x28AE58u: goto label_28ae58;
            case 0x28AE5Cu: goto label_28ae5c;
            case 0x28AE60u: goto label_28ae60;
            case 0x28AE64u: goto label_28ae64;
            case 0x28AE68u: goto label_28ae68;
            case 0x28AE6Cu: goto label_28ae6c;
            case 0x28AE70u: goto label_28ae70;
            case 0x28AE74u: goto label_28ae74;
            case 0x28AE78u: goto label_28ae78;
            case 0x28AE7Cu: goto label_28ae7c;
            case 0x28AE80u: goto label_28ae80;
            case 0x28AE84u: goto label_28ae84;
            case 0x28AE88u: goto label_28ae88;
            case 0x28AE8Cu: goto label_28ae8c;
            case 0x28AE90u: goto label_28ae90;
            case 0x28AE94u: goto label_28ae94;
            case 0x28AE98u: goto label_28ae98;
            case 0x28AE9Cu: goto label_28ae9c;
            case 0x28AEA0u: goto label_28aea0;
            case 0x28AEA4u: goto label_28aea4;
            case 0x28AEA8u: goto label_28aea8;
            case 0x28AEACu: goto label_28aeac;
            case 0x28AEB0u: goto label_28aeb0;
            case 0x28AEB4u: goto label_28aeb4;
            case 0x28AEB8u: goto label_28aeb8;
            case 0x28AEBCu: goto label_28aebc;
            case 0x28AEC0u: goto label_28aec0;
            case 0x28AEC4u: goto label_28aec4;
            case 0x28AEC8u: goto label_28aec8;
            case 0x28AECCu: goto label_28aecc;
            case 0x28AED0u: goto label_28aed0;
            case 0x28AED4u: goto label_28aed4;
            case 0x28AED8u: goto label_28aed8;
            case 0x28AEDCu: goto label_28aedc;
            case 0x28AEE0u: goto label_28aee0;
            case 0x28AEE4u: goto label_28aee4;
            case 0x28AEE8u: goto label_28aee8;
            case 0x28AEECu: goto label_28aeec;
            case 0x28AEF0u: goto label_28aef0;
            case 0x28AEF4u: goto label_28aef4;
            case 0x28AEF8u: goto label_28aef8;
            case 0x28AEFCu: goto label_28aefc;
            case 0x28AF00u: goto label_28af00;
            case 0x28AF04u: goto label_28af04;
            case 0x28AF08u: goto label_28af08;
            case 0x28AF0Cu: goto label_28af0c;
            case 0x28AF10u: goto label_28af10;
            case 0x28AF14u: goto label_28af14;
            case 0x28AF18u: goto label_28af18;
            case 0x28AF1Cu: goto label_28af1c;
            case 0x28AF20u: goto label_28af20;
            case 0x28AF24u: goto label_28af24;
            case 0x28AF28u: goto label_28af28;
            case 0x28AF2Cu: goto label_28af2c;
            case 0x28AF30u: goto label_28af30;
            case 0x28AF34u: goto label_28af34;
            case 0x28AF38u: goto label_28af38;
            case 0x28AF3Cu: goto label_28af3c;
            case 0x28AF40u: goto label_28af40;
            case 0x28AF44u: goto label_28af44;
            case 0x28AF48u: goto label_28af48;
            case 0x28AF4Cu: goto label_28af4c;
            case 0x28AF50u: goto label_28af50;
            case 0x28AF54u: goto label_28af54;
            case 0x28AF58u: goto label_28af58;
            case 0x28AF5Cu: goto label_28af5c;
            case 0x28AF60u: goto label_28af60;
            case 0x28AF64u: goto label_28af64;
            case 0x28AF68u: goto label_28af68;
            case 0x28AF6Cu: goto label_28af6c;
            case 0x28AF70u: goto label_28af70;
            case 0x28AF74u: goto label_28af74;
            case 0x28AF78u: goto label_28af78;
            case 0x28AF7Cu: goto label_28af7c;
            case 0x28AF80u: goto label_28af80;
            case 0x28AF84u: goto label_28af84;
            case 0x28AF88u: goto label_28af88;
            case 0x28AF8Cu: goto label_28af8c;
            case 0x28AF90u: goto label_28af90;
            case 0x28AF94u: goto label_28af94;
            case 0x28AF98u: goto label_28af98;
            case 0x28AF9Cu: goto label_28af9c;
            case 0x28AFA0u: goto label_28afa0;
            case 0x28AFA4u: goto label_28afa4;
            case 0x28AFA8u: goto label_28afa8;
            case 0x28AFACu: goto label_28afac;
            case 0x28AFB0u: goto label_28afb0;
            case 0x28AFB4u: goto label_28afb4;
            case 0x28AFB8u: goto label_28afb8;
            case 0x28AFBCu: goto label_28afbc;
            case 0x28AFC0u: goto label_28afc0;
            case 0x28AFC4u: goto label_28afc4;
            case 0x28AFC8u: goto label_28afc8;
            case 0x28AFCCu: goto label_28afcc;
            case 0x28AFD0u: goto label_28afd0;
            case 0x28AFD4u: goto label_28afd4;
            case 0x28AFD8u: goto label_28afd8;
            case 0x28AFDCu: goto label_28afdc;
            case 0x28AFE0u: goto label_28afe0;
            case 0x28AFE4u: goto label_28afe4;
            case 0x28AFE8u: goto label_28afe8;
            case 0x28AFECu: goto label_28afec;
            case 0x28AFF0u: goto label_28aff0;
            case 0x28AFF4u: goto label_28aff4;
            case 0x28AFF8u: goto label_28aff8;
            case 0x28AFFCu: goto label_28affc;
            case 0x28B000u: goto label_28b000;
            case 0x28B004u: goto label_28b004;
            case 0x28B008u: goto label_28b008;
            case 0x28B00Cu: goto label_28b00c;
            case 0x28B010u: goto label_28b010;
            case 0x28B014u: goto label_28b014;
            case 0x28B018u: goto label_28b018;
            case 0x28B01Cu: goto label_28b01c;
            case 0x28B020u: goto label_28b020;
            case 0x28B024u: goto label_28b024;
            case 0x28B028u: goto label_28b028;
            case 0x28B02Cu: goto label_28b02c;
            case 0x28B030u: goto label_28b030;
            case 0x28B034u: goto label_28b034;
            case 0x28B038u: goto label_28b038;
            case 0x28B03Cu: goto label_28b03c;
            case 0x28B040u: goto label_28b040;
            case 0x28B044u: goto label_28b044;
            case 0x28B048u: goto label_28b048;
            case 0x28B04Cu: goto label_28b04c;
            case 0x28B050u: goto label_28b050;
            case 0x28B054u: goto label_28b054;
            case 0x28B058u: goto label_28b058;
            case 0x28B05Cu: goto label_28b05c;
            case 0x28B060u: goto label_28b060;
            case 0x28B064u: goto label_28b064;
            case 0x28B068u: goto label_28b068;
            case 0x28B06Cu: goto label_28b06c;
            case 0x28B070u: goto label_28b070;
            case 0x28B074u: goto label_28b074;
            case 0x28B078u: goto label_28b078;
            case 0x28B07Cu: goto label_28b07c;
            case 0x28B080u: goto label_28b080;
            case 0x28B084u: goto label_28b084;
            case 0x28B088u: goto label_28b088;
            case 0x28B08Cu: goto label_28b08c;
            case 0x28B090u: goto label_28b090;
            case 0x28B094u: goto label_28b094;
            case 0x28B098u: goto label_28b098;
            case 0x28B09Cu: goto label_28b09c;
            case 0x28B0A0u: goto label_28b0a0;
            case 0x28B0A4u: goto label_28b0a4;
            case 0x28B0A8u: goto label_28b0a8;
            case 0x28B0ACu: goto label_28b0ac;
            case 0x28B0B0u: goto label_28b0b0;
            case 0x28B0B4u: goto label_28b0b4;
            case 0x28B0B8u: goto label_28b0b8;
            case 0x28B0BCu: goto label_28b0bc;
            case 0x28B0C0u: goto label_28b0c0;
            case 0x28B0C4u: goto label_28b0c4;
            case 0x28B0C8u: goto label_28b0c8;
            case 0x28B0CCu: goto label_28b0cc;
            case 0x28B0D0u: goto label_28b0d0;
            case 0x28B0D4u: goto label_28b0d4;
            case 0x28B0D8u: goto label_28b0d8;
            case 0x28B0DCu: goto label_28b0dc;
            case 0x28B0E0u: goto label_28b0e0;
            case 0x28B0E4u: goto label_28b0e4;
            case 0x28B0E8u: goto label_28b0e8;
            case 0x28B0ECu: goto label_28b0ec;
            case 0x28B0F0u: goto label_28b0f0;
            case 0x28B0F4u: goto label_28b0f4;
            case 0x28B0F8u: goto label_28b0f8;
            case 0x28B0FCu: goto label_28b0fc;
            case 0x28B100u: goto label_28b100;
            case 0x28B104u: goto label_28b104;
            case 0x28B108u: goto label_28b108;
            case 0x28B10Cu: goto label_28b10c;
            case 0x28B110u: goto label_28b110;
            case 0x28B114u: goto label_28b114;
            case 0x28B118u: goto label_28b118;
            case 0x28B11Cu: goto label_28b11c;
            case 0x28B120u: goto label_28b120;
            case 0x28B124u: goto label_28b124;
            case 0x28B128u: goto label_28b128;
            case 0x28B12Cu: goto label_28b12c;
            case 0x28B130u: goto label_28b130;
            case 0x28B134u: goto label_28b134;
            case 0x28B138u: goto label_28b138;
            case 0x28B13Cu: goto label_28b13c;
            case 0x28B140u: goto label_28b140;
            case 0x28B144u: goto label_28b144;
            case 0x28B148u: goto label_28b148;
            case 0x28B14Cu: goto label_28b14c;
            case 0x28B150u: goto label_28b150;
            case 0x28B154u: goto label_28b154;
            case 0x28B158u: goto label_28b158;
            case 0x28B15Cu: goto label_28b15c;
            case 0x28B160u: goto label_28b160;
            case 0x28B164u: goto label_28b164;
            case 0x28B168u: goto label_28b168;
            case 0x28B16Cu: goto label_28b16c;
            case 0x28B170u: goto label_28b170;
            case 0x28B174u: goto label_28b174;
            case 0x28B178u: goto label_28b178;
            case 0x28B17Cu: goto label_28b17c;
            case 0x28B180u: goto label_28b180;
            case 0x28B184u: goto label_28b184;
            case 0x28B188u: goto label_28b188;
            case 0x28B18Cu: goto label_28b18c;
            case 0x28B190u: goto label_28b190;
            case 0x28B194u: goto label_28b194;
            case 0x28B198u: goto label_28b198;
            case 0x28B19Cu: goto label_28b19c;
            case 0x28B1A0u: goto label_28b1a0;
            case 0x28B1A4u: goto label_28b1a4;
            case 0x28B1A8u: goto label_28b1a8;
            case 0x28B1ACu: goto label_28b1ac;
            case 0x28B1B0u: goto label_28b1b0;
            case 0x28B1B4u: goto label_28b1b4;
            case 0x28B1B8u: goto label_28b1b8;
            case 0x28B1BCu: goto label_28b1bc;
            case 0x28B1C0u: goto label_28b1c0;
            case 0x28B1C4u: goto label_28b1c4;
            case 0x28B1C8u: goto label_28b1c8;
            case 0x28B1CCu: goto label_28b1cc;
            case 0x28B1D0u: goto label_28b1d0;
            case 0x28B1D4u: goto label_28b1d4;
            case 0x28B1D8u: goto label_28b1d8;
            case 0x28B1DCu: goto label_28b1dc;
            case 0x28B1E0u: goto label_28b1e0;
            case 0x28B1E4u: goto label_28b1e4;
            case 0x28B1E8u: goto label_28b1e8;
            case 0x28B1ECu: goto label_28b1ec;
            case 0x28B1F0u: goto label_28b1f0;
            case 0x28B1F4u: goto label_28b1f4;
            case 0x28B1F8u: goto label_28b1f8;
            case 0x28B1FCu: goto label_28b1fc;
            case 0x28B200u: goto label_28b200;
            case 0x28B204u: goto label_28b204;
            case 0x28B208u: goto label_28b208;
            case 0x28B20Cu: goto label_28b20c;
            case 0x28B210u: goto label_28b210;
            case 0x28B214u: goto label_28b214;
            case 0x28B218u: goto label_28b218;
            case 0x28B21Cu: goto label_28b21c;
            case 0x28B220u: goto label_28b220;
            case 0x28B224u: goto label_28b224;
            case 0x28B228u: goto label_28b228;
            case 0x28B22Cu: goto label_28b22c;
            case 0x28B230u: goto label_28b230;
            case 0x28B234u: goto label_28b234;
            case 0x28B238u: goto label_28b238;
            case 0x28B23Cu: goto label_28b23c;
            case 0x28B240u: goto label_28b240;
            case 0x28B244u: goto label_28b244;
            case 0x28B248u: goto label_28b248;
            case 0x28B24Cu: goto label_28b24c;
            case 0x28B250u: goto label_28b250;
            case 0x28B254u: goto label_28b254;
            case 0x28B258u: goto label_28b258;
            case 0x28B25Cu: goto label_28b25c;
            case 0x28B260u: goto label_28b260;
            case 0x28B264u: goto label_28b264;
            case 0x28B268u: goto label_28b268;
            case 0x28B26Cu: goto label_28b26c;
            case 0x28B270u: goto label_28b270;
            case 0x28B274u: goto label_28b274;
            case 0x28B278u: goto label_28b278;
            case 0x28B27Cu: goto label_28b27c;
            case 0x28B280u: goto label_28b280;
            case 0x28B284u: goto label_28b284;
            case 0x28B288u: goto label_28b288;
            case 0x28B28Cu: goto label_28b28c;
            case 0x28B290u: goto label_28b290;
            case 0x28B294u: goto label_28b294;
            case 0x28B298u: goto label_28b298;
            case 0x28B29Cu: goto label_28b29c;
            case 0x28B2A0u: goto label_28b2a0;
            case 0x28B2A4u: goto label_28b2a4;
            case 0x28B2A8u: goto label_28b2a8;
            case 0x28B2ACu: goto label_28b2ac;
            case 0x28B2B0u: goto label_28b2b0;
            case 0x28B2B4u: goto label_28b2b4;
            case 0x28B2B8u: goto label_28b2b8;
            case 0x28B2BCu: goto label_28b2bc;
            case 0x28B2C0u: goto label_28b2c0;
            case 0x28B2C4u: goto label_28b2c4;
            case 0x28B2C8u: goto label_28b2c8;
            case 0x28B2CCu: goto label_28b2cc;
            case 0x28B2D0u: goto label_28b2d0;
            case 0x28B2D4u: goto label_28b2d4;
            case 0x28B2D8u: goto label_28b2d8;
            case 0x28B2DCu: goto label_28b2dc;
            case 0x28B2E0u: goto label_28b2e0;
            case 0x28B2E4u: goto label_28b2e4;
            case 0x28B2E8u: goto label_28b2e8;
            case 0x28B2ECu: goto label_28b2ec;
            case 0x28B2F0u: goto label_28b2f0;
            case 0x28B2F4u: goto label_28b2f4;
            case 0x28B2F8u: goto label_28b2f8;
            case 0x28B2FCu: goto label_28b2fc;
            case 0x28B300u: goto label_28b300;
            case 0x28B304u: goto label_28b304;
            case 0x28B308u: goto label_28b308;
            case 0x28B30Cu: goto label_28b30c;
            case 0x28B310u: goto label_28b310;
            case 0x28B314u: goto label_28b314;
            case 0x28B318u: goto label_28b318;
            case 0x28B31Cu: goto label_28b31c;
            case 0x28B320u: goto label_28b320;
            case 0x28B324u: goto label_28b324;
            case 0x28B328u: goto label_28b328;
            case 0x28B32Cu: goto label_28b32c;
            case 0x28B330u: goto label_28b330;
            case 0x28B334u: goto label_28b334;
            case 0x28B338u: goto label_28b338;
            case 0x28B33Cu: goto label_28b33c;
            case 0x28B340u: goto label_28b340;
            case 0x28B344u: goto label_28b344;
            case 0x28B348u: goto label_28b348;
            case 0x28B34Cu: goto label_28b34c;
            case 0x28B350u: goto label_28b350;
            case 0x28B354u: goto label_28b354;
            case 0x28B358u: goto label_28b358;
            case 0x28B35Cu: goto label_28b35c;
            case 0x28B360u: goto label_28b360;
            case 0x28B364u: goto label_28b364;
            case 0x28B368u: goto label_28b368;
            case 0x28B36Cu: goto label_28b36c;
            case 0x28B370u: goto label_28b370;
            case 0x28B374u: goto label_28b374;
            case 0x28B378u: goto label_28b378;
            case 0x28B37Cu: goto label_28b37c;
            case 0x28B380u: goto label_28b380;
            case 0x28B384u: goto label_28b384;
            case 0x28B388u: goto label_28b388;
            case 0x28B38Cu: goto label_28b38c;
            case 0x28B390u: goto label_28b390;
            case 0x28B394u: goto label_28b394;
            case 0x28B398u: goto label_28b398;
            case 0x28B39Cu: goto label_28b39c;
            case 0x28B3A0u: goto label_28b3a0;
            case 0x28B3A4u: goto label_28b3a4;
            case 0x28B3A8u: goto label_28b3a8;
            case 0x28B3ACu: goto label_28b3ac;
            case 0x28B3B0u: goto label_28b3b0;
            case 0x28B3B4u: goto label_28b3b4;
            case 0x28B3B8u: goto label_28b3b8;
            case 0x28B3BCu: goto label_28b3bc;
            case 0x28B3C0u: goto label_28b3c0;
            case 0x28B3C4u: goto label_28b3c4;
            case 0x28B3C8u: goto label_28b3c8;
            case 0x28B3CCu: goto label_28b3cc;
            case 0x28B3D0u: goto label_28b3d0;
            case 0x28B3D4u: goto label_28b3d4;
            case 0x28B3D8u: goto label_28b3d8;
            case 0x28B3DCu: goto label_28b3dc;
            case 0x28B3E0u: goto label_28b3e0;
            case 0x28B3E4u: goto label_28b3e4;
            case 0x28B3E8u: goto label_28b3e8;
            case 0x28B3ECu: goto label_28b3ec;
            case 0x28B3F0u: goto label_28b3f0;
            case 0x28B3F4u: goto label_28b3f4;
            case 0x28B3F8u: goto label_28b3f8;
            case 0x28B3FCu: goto label_28b3fc;
            case 0x28B400u: goto label_28b400;
            case 0x28B404u: goto label_28b404;
            case 0x28B408u: goto label_28b408;
            case 0x28B40Cu: goto label_28b40c;
            case 0x28B410u: goto label_28b410;
            case 0x28B414u: goto label_28b414;
            case 0x28B418u: goto label_28b418;
            case 0x28B41Cu: goto label_28b41c;
            case 0x28B420u: goto label_28b420;
            case 0x28B424u: goto label_28b424;
            case 0x28B428u: goto label_28b428;
            case 0x28B42Cu: goto label_28b42c;
            case 0x28B430u: goto label_28b430;
            case 0x28B434u: goto label_28b434;
            case 0x28B438u: goto label_28b438;
            case 0x28B43Cu: goto label_28b43c;
            case 0x28B440u: goto label_28b440;
            case 0x28B444u: goto label_28b444;
            case 0x28B448u: goto label_28b448;
            case 0x28B44Cu: goto label_28b44c;
            case 0x28B450u: goto label_28b450;
            case 0x28B454u: goto label_28b454;
            case 0x28B458u: goto label_28b458;
            case 0x28B45Cu: goto label_28b45c;
            case 0x28B460u: goto label_28b460;
            case 0x28B464u: goto label_28b464;
            case 0x28B468u: goto label_28b468;
            case 0x28B46Cu: goto label_28b46c;
            case 0x28B470u: goto label_28b470;
            case 0x28B474u: goto label_28b474;
            case 0x28B478u: goto label_28b478;
            case 0x28B47Cu: goto label_28b47c;
            default: break;
        }
        return;
    }
label_fallthrough_0x28b478:
    ctx->pc = 0x28B480u;
}
