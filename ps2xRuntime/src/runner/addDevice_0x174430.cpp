#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: addDevice
// Address: 0x174430 - 0x174508
void addDevice_0x174430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("addDevice");


    ctx->pc = 0x174430u;

label_174430:
    // 0x174430: 0x27bdffb0
    ctx->pc = 0x174430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_174434:
    // 0x174434: 0xffb20020
    ctx->pc = 0x174434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_174438:
    // 0x174438: 0xffb00000
    ctx->pc = 0x174438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17443c:
    // 0x17443c: 0x80902d
    ctx->pc = 0x17443cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_174440:
    // 0x174440: 0xffb30030
    ctx->pc = 0x174440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_174444:
    // 0x174444: 0xa0802d
    ctx->pc = 0x174444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174448:
    // 0x174448: 0xffb10010
    ctx->pc = 0x174448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17444c:
    // 0x17444c: 0xffbf0040
    ctx->pc = 0x17444cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_174450:
    // 0x174450: 0xc05d168
label_174454:
    if (ctx->pc == 0x174454u) {
        ctx->pc = 0x174454u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174458u;
        goto label_174458;
    }
    ctx->pc = 0x174450u;
    SET_GPR_U32(ctx, 31, 0x174458u);
    ctx->pc = 0x174454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1745A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        toUpperStr_0x1745a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174458u; }
        else if (ctx->pc != 0x174458u) { ctx->pc = 0x174458u; }
    }
    if (ctx->pc != 0x174458u) { return; }
    ctx->pc = 0x174458u;
label_174458:
    // 0x174458: 0x200f809
label_17445c:
    if (ctx->pc == 0x17445Cu) {
        ctx->pc = 0x174460u;
        goto label_174460;
    }
    ctx->pc = 0x174458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x174460u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174430u: goto label_174430;
            case 0x174434u: goto label_174434;
            case 0x174438u: goto label_174438;
            case 0x17443Cu: goto label_17443c;
            case 0x174440u: goto label_174440;
            case 0x174444u: goto label_174444;
            case 0x174448u: goto label_174448;
            case 0x17444Cu: goto label_17444c;
            case 0x174450u: goto label_174450;
            case 0x174454u: goto label_174454;
            case 0x174458u: goto label_174458;
            case 0x17445Cu: goto label_17445c;
            case 0x174460u: goto label_174460;
            case 0x174464u: goto label_174464;
            case 0x174468u: goto label_174468;
            case 0x17446Cu: goto label_17446c;
            case 0x174470u: goto label_174470;
            case 0x174474u: goto label_174474;
            case 0x174478u: goto label_174478;
            case 0x17447Cu: goto label_17447c;
            case 0x174480u: goto label_174480;
            case 0x174484u: goto label_174484;
            case 0x174488u: goto label_174488;
            case 0x17448Cu: goto label_17448c;
            case 0x174490u: goto label_174490;
            case 0x174494u: goto label_174494;
            case 0x174498u: goto label_174498;
            case 0x17449Cu: goto label_17449c;
            case 0x1744A0u: goto label_1744a0;
            case 0x1744A4u: goto label_1744a4;
            case 0x1744A8u: goto label_1744a8;
            case 0x1744ACu: goto label_1744ac;
            case 0x1744B0u: goto label_1744b0;
            case 0x1744B4u: goto label_1744b4;
            case 0x1744B8u: goto label_1744b8;
            case 0x1744BCu: goto label_1744bc;
            case 0x1744C0u: goto label_1744c0;
            case 0x1744C4u: goto label_1744c4;
            case 0x1744C8u: goto label_1744c8;
            case 0x1744CCu: goto label_1744cc;
            case 0x1744D0u: goto label_1744d0;
            case 0x1744D4u: goto label_1744d4;
            case 0x1744D8u: goto label_1744d8;
            case 0x1744DCu: goto label_1744dc;
            case 0x1744E0u: goto label_1744e0;
            case 0x1744E4u: goto label_1744e4;
            case 0x1744E8u: goto label_1744e8;
            case 0x1744ECu: goto label_1744ec;
            case 0x1744F0u: goto label_1744f0;
            case 0x1744F4u: goto label_1744f4;
            case 0x1744F8u: goto label_1744f8;
            case 0x1744FCu: goto label_1744fc;
            case 0x174500u: goto label_174500;
            case 0x174504u: goto label_174504;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174460u; }
            if (ctx->pc != 0x174460u) { return; }
        }
    }
    ctx->pc = 0x174460u;
label_174460:
    // 0x174460: 0x40982d
    ctx->pc = 0x174460u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174464:
    // 0x174464: 0xc05d142
label_174468:
    if (ctx->pc == 0x174468u) {
        ctx->pc = 0x174468u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17446Cu;
        goto label_17446c;
    }
    ctx->pc = 0x174464u;
    SET_GPR_U32(ctx, 31, 0x17446Cu);
    ctx->pc = 0x174468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174508u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevice_0x174508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17446Cu; }
        else if (ctx->pc != 0x17446Cu) { ctx->pc = 0x17446Cu; }
    }
    if (ctx->pc != 0x17446Cu) { return; }
    ctx->pc = 0x17446Cu;
label_17446c:
    // 0x17446c: 0x1440001f
label_174470:
    if (ctx->pc == 0x174470u) {
        ctx->pc = 0x174470u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174474u;
        goto label_174474;
    }
    ctx->pc = 0x17446Cu;
    {
        const bool branch_taken_0x17446c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x174470u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17446c) {
            ctx->pc = 0x1744ECu;
            goto label_1744ec;
        }
    }
    ctx->pc = 0x174474u;
label_174474:
    // 0x174474: 0x3c04002e
    ctx->pc = 0x174474u;
    SET_GPR_U32(ctx, 4, ((uint32_t)46 << 16));
label_174478:
    // 0x174478: 0x2483f2e8
    ctx->pc = 0x174478u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294963944));
label_17447c:
    // 0x17447c: 0x80620004
    ctx->pc = 0x17447cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_174480:
    // 0x174480: 0x1040000a
label_174484:
    if (ctx->pc == 0x174484u) {
        ctx->pc = 0x174484u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x174488u;
        goto label_174488;
    }
    ctx->pc = 0x174480u;
    {
        const bool branch_taken_0x174480 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174484u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x174480) {
            ctx->pc = 0x1744ACu;
            goto label_1744ac;
        }
    }
    ctx->pc = 0x174488u;
label_174488:
    // 0x174488: 0x24630004
    ctx->pc = 0x174488u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
label_17448c:
    // 0x17448c: 0x26310001
    ctx->pc = 0x17448cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_174490:
    // 0x174490: 0x2a220020
    ctx->pc = 0x174490u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 32));
label_174494:
    // 0x174494: 0x10400004
label_174498:
    if (ctx->pc == 0x174498u) {
        ctx->pc = 0x174498u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x17449Cu;
        goto label_17449c;
    }
    ctx->pc = 0x174494u;
    {
        const bool branch_taken_0x174494 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174498u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x174494) {
            ctx->pc = 0x1744A8u;
            goto label_1744a8;
        }
    }
    ctx->pc = 0x17449Cu;
label_17449c:
    // 0x17449c: 0x80620000
    ctx->pc = 0x17449cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1744a0:
    // 0x1744a0: 0x5440fffb
label_1744a4:
    if (ctx->pc == 0x1744A4u) {
        ctx->pc = 0x1744A4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x1744A8u;
        goto label_1744a8;
    }
    ctx->pc = 0x1744A0u;
    {
        const bool branch_taken_0x1744a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1744a0) {
            ctx->pc = 0x1744A4u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x174490u;
            goto label_174490;
        }
    }
    ctx->pc = 0x1744A8u;
label_1744a8:
    // 0x1744a8: 0x24020020
    ctx->pc = 0x1744a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_1744ac:
    // 0x1744ac: 0x16220003
label_1744b0:
    if (ctx->pc == 0x1744B0u) {
        ctx->pc = 0x1744B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294963944));
        ctx->pc = 0x1744B4u;
        goto label_1744b4;
    }
    ctx->pc = 0x1744ACu;
    {
        const bool branch_taken_0x1744ac = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x1744B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294963944));
        if (branch_taken_0x1744ac) {
            ctx->pc = 0x1744BCu;
            goto label_1744bc;
        }
    }
    ctx->pc = 0x1744B4u;
label_1744b4:
    // 0x1744b4: 0x1000000d
label_1744b8:
    if (ctx->pc == 0x1744B8u) {
        ctx->pc = 0x1744B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1744BCu;
        goto label_1744bc;
    }
    ctx->pc = 0x1744B4u;
    {
        const bool branch_taken_0x1744b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1744B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1744b4) {
            ctx->pc = 0x1744ECu;
            goto label_1744ec;
        }
    }
    ctx->pc = 0x1744BCu;
label_1744bc:
    // 0x1744bc: 0x118100
    ctx->pc = 0x1744bcu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 4));
label_1744c0:
    // 0x1744c0: 0x24430004
    ctx->pc = 0x1744c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4));
label_1744c4:
    // 0x1744c4: 0x240202d
    ctx->pc = 0x1744c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1744c8:
    // 0x1744c8: 0x2021021
    ctx->pc = 0x1744c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1744cc:
    // 0x1744cc: 0x2038021
    ctx->pc = 0x1744ccu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1744d0:
    // 0x1744d0: 0xc051554
label_1744d4:
    if (ctx->pc == 0x1744D4u) {
        ctx->pc = 0x1744D4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x1744D8u;
        goto label_1744d8;
    }
    ctx->pc = 0x1744D0u;
    SET_GPR_U32(ctx, 31, 0x1744D8u);
    ctx->pc = 0x1744D4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1744D8u; }
        else if (ctx->pc != 0x1744D8u) { ctx->pc = 0x1744D8u; }
    }
    if (ctx->pc != 0x1744D8u) { return; }
    ctx->pc = 0x1744D8u;
label_1744d8:
    // 0x1744d8: 0x200202d
    ctx->pc = 0x1744d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1744dc:
    // 0x1744dc: 0x240282d
    ctx->pc = 0x1744dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1744e0:
    // 0x1744e0: 0xc050c90
label_1744e4:
    if (ctx->pc == 0x1744E4u) {
        ctx->pc = 0x1744E4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1744E8u;
        goto label_1744e8;
    }
    ctx->pc = 0x1744E0u;
    SET_GPR_U32(ctx, 31, 0x1744E8u);
    ctx->pc = 0x1744E4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1744E8u; }
        else if (ctx->pc != 0x1744E8u) { ctx->pc = 0x1744E8u; }
    }
    if (ctx->pc != 0x1744E8u) { return; }
    ctx->pc = 0x1744E8u;
label_1744e8:
    // 0x1744e8: 0x260102d
    ctx->pc = 0x1744e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1744ec:
    // 0x1744ec: 0xdfbf0040
    ctx->pc = 0x1744ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1744f0:
    // 0x1744f0: 0xdfb30030
    ctx->pc = 0x1744f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1744f4:
    // 0x1744f4: 0xdfb20020
    ctx->pc = 0x1744f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1744f8:
    // 0x1744f8: 0xdfb10010
    ctx->pc = 0x1744f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1744fc:
    // 0x1744fc: 0xdfb00000
    ctx->pc = 0x1744fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174500:
    // 0x174500: 0x3e00008
label_174504:
    if (ctx->pc == 0x174504u) {
        ctx->pc = 0x174504u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x174508u;
        goto label_fallthrough_0x174500;
    }
    ctx->pc = 0x174500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174504u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174430u: goto label_174430;
            case 0x174434u: goto label_174434;
            case 0x174438u: goto label_174438;
            case 0x17443Cu: goto label_17443c;
            case 0x174440u: goto label_174440;
            case 0x174444u: goto label_174444;
            case 0x174448u: goto label_174448;
            case 0x17444Cu: goto label_17444c;
            case 0x174450u: goto label_174450;
            case 0x174454u: goto label_174454;
            case 0x174458u: goto label_174458;
            case 0x17445Cu: goto label_17445c;
            case 0x174460u: goto label_174460;
            case 0x174464u: goto label_174464;
            case 0x174468u: goto label_174468;
            case 0x17446Cu: goto label_17446c;
            case 0x174470u: goto label_174470;
            case 0x174474u: goto label_174474;
            case 0x174478u: goto label_174478;
            case 0x17447Cu: goto label_17447c;
            case 0x174480u: goto label_174480;
            case 0x174484u: goto label_174484;
            case 0x174488u: goto label_174488;
            case 0x17448Cu: goto label_17448c;
            case 0x174490u: goto label_174490;
            case 0x174494u: goto label_174494;
            case 0x174498u: goto label_174498;
            case 0x17449Cu: goto label_17449c;
            case 0x1744A0u: goto label_1744a0;
            case 0x1744A4u: goto label_1744a4;
            case 0x1744A8u: goto label_1744a8;
            case 0x1744ACu: goto label_1744ac;
            case 0x1744B0u: goto label_1744b0;
            case 0x1744B4u: goto label_1744b4;
            case 0x1744B8u: goto label_1744b8;
            case 0x1744BCu: goto label_1744bc;
            case 0x1744C0u: goto label_1744c0;
            case 0x1744C4u: goto label_1744c4;
            case 0x1744C8u: goto label_1744c8;
            case 0x1744CCu: goto label_1744cc;
            case 0x1744D0u: goto label_1744d0;
            case 0x1744D4u: goto label_1744d4;
            case 0x1744D8u: goto label_1744d8;
            case 0x1744DCu: goto label_1744dc;
            case 0x1744E0u: goto label_1744e0;
            case 0x1744E4u: goto label_1744e4;
            case 0x1744E8u: goto label_1744e8;
            case 0x1744ECu: goto label_1744ec;
            case 0x1744F0u: goto label_1744f0;
            case 0x1744F4u: goto label_1744f4;
            case 0x1744F8u: goto label_1744f8;
            case 0x1744FCu: goto label_1744fc;
            case 0x174500u: goto label_174500;
            case 0x174504u: goto label_174504;
            default: break;
        }
        return;
    }
label_fallthrough_0x174500:
    ctx->pc = 0x174508u;
}
