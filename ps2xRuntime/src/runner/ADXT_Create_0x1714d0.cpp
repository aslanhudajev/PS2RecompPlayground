#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"
#include <iostream>

// Function: ADXT_Create
// Address: 0x1714d0 - 0x171758
void ADXT_Create_0x1714d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_Create");

    std::cerr << "[ADXT_Create] entry" << std::endl;
    ctx->pc = 0x1714d0u;

    // 0x1714d0: 0x27bdffb0
    ctx->pc = 0x1714d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1714d4: 0x3c02ffff
    ctx->pc = 0x1714d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x1714d8: 0x24a3003f
    ctx->pc = 0x1714d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 63));
    // 0x1714dc: 0x3442ffc0
    ctx->pc = 0x1714dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65472));
    // 0x1714e0: 0xffb10010
    ctx->pc = 0x1714e0u;
    std::cerr << "[ADXT_Create] a1" << std::endl;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1714e4: 0x628824
    ctx->pc = 0x1714e4u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1714e8: 0xffb20020
    ctx->pc = 0x1714e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1714ec: 0x2252823
    ctx->pc = 0x1714ecu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1714f0: 0x3c030023
    ctx->pc = 0x1714f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1714f4: 0xffb30030
    ctx->pc = 0x1714f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1714f8: 0xc59023
    ctx->pc = 0x1714f8u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1714fc: 0x8062dd60
    ctx->pc = 0x1714fcu;
    std::cerr << "[ADXT_Create] before READ8 r3=0x" << std::hex << GPR_U32(ctx,3) << std::dec << std::endl;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958432)));
    // 0x171500: 0x80982d
    ctx->pc = 0x171500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171504: 0xffbf0040
    ctx->pc = 0x171504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x171508: 0x282d
    ctx->pc = 0x171508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17150c: 0x1040000a
    ctx->pc = 0x17150Cu;
    { static int _b=0; std::cerr << "[ADXT_Create] pre-branch r2=" << (int)GPR_S32(ctx,2) << " (n=" << ++_b << ")\n"; }
    {
        const bool branch_taken_0x17150c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x171510u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x17150c) {
            std::cerr << "[ADXT_Create] branch->171538\n";
            ctx->pc = 0x171538u;
            goto label_171538;
        }
    }
    ctx->pc = 0x171514u;
    std::cerr << "[ADXT_Create] took branch to 171520 path\n";
    // 0x171514: 0x2464dd60
    ctx->pc = 0x171514u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294958432));
    // 0x171518: 0x24a50001
    ctx->pc = 0x171518u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x17151c: 0x0
    ctx->pc = 0x17151cu;
    // NOP
label_171520:
    { static int _n=0; if (++_n<=20 || (_n%5000)==0) std::cerr << "[ADXT_Create] loop_171520 (n=" << _n << ")\n"; }
    // 0x171520: 0x28a20008
    ctx->pc = 0x171520u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
    // 0x171524: 0x10400004
    ctx->pc = 0x171524u;
    {
        const bool branch_taken_0x171524 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x171528u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 164));
        if (branch_taken_0x171524) {
            ctx->pc = 0x171538u;
            goto label_171538;
        }
    }
    ctx->pc = 0x17152Cu;
    // 0x17152c: 0x80820000
    ctx->pc = 0x17152cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x171530: 0x5440fffb
    ctx->pc = 0x171530u;
    {
        const bool branch_taken_0x171530 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x171530) {
            ctx->pc = 0x171534u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x171520u;
            goto label_171520;
        }
    }
    ctx->pc = 0x171538u;
label_171538:
    // 0x171538: 0x24020008
    ctx->pc = 0x171538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x17153c: 0x14a20003
    ctx->pc = 0x17153Cu;
    {
        const bool branch_taken_0x17153c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x171540u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 164));
        if (branch_taken_0x17153c) {
            ctx->pc = 0x17154Cu;
            goto label_17154c;
        }
    }
    ctx->pc = 0x171544u;
    // 0x171544: 0x1000007d
    ctx->pc = 0x171544u;
    {
        const bool branch_taken_0x171544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x171548u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x171544) {
            ctx->pc = 0x17173Cu;
            goto label_17173c;
        }
    }
    ctx->pc = 0x17154Cu;
label_17154c:
    // 0x17154c: 0x2463dd60
    ctx->pc = 0x17154cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958432));
    // 0x171550: 0xa21018
    ctx->pc = 0x171550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x171554: 0x240600a4
    ctx->pc = 0x171554u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 164));
    // 0x171558: 0x282d
    ctx->pc = 0x171558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17155c: 0x438021
    ctx->pc = 0x17155cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171560: 0xc050cfe
    ctx->pc = 0x171560u;
    SET_GPR_U32(ctx, 31, 0x171568u);
    ctx->pc = 0x171564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1433F8u;
    std::cerr << "[ADXT_Create] before memset\n";
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171568u; }
        else if (ctx->pc != 0x171568u) { ctx->pc = 0x171568u; }
    }
    if (ctx->pc != 0x171568u) { return; }
    ctx->pc = 0x171568u;
    // 0x171568: 0x240340c0
    ctx->pc = 0x171568u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16576));
    // 0x17156c: 0x24020024
    ctx->pc = 0x17156cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
    // 0x171570: 0x2631818
    ctx->pc = 0x171570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x171574: 0xae020028
    ctx->pc = 0x171574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x171578: 0x24042000
    ctx->pc = 0x171578u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x17157c: 0x24052060
    ctx->pc = 0x17157cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8288));
    // 0x171580: 0xae040030
    ctx->pc = 0x171580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x171584: 0x24060024
    ctx->pc = 0x171584u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 36));
    // 0x171588: 0xae050034
    ctx->pc = 0x171588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x17158c: 0x2431023
    ctx->pc = 0x17158cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x171590: 0xae11002c
    ctx->pc = 0x171590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
    // 0x171594: 0x2442ffdc
    ctx->pc = 0x171594u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967260));
    // 0x171598: 0x2231821
    ctx->pc = 0x171598u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x17159c: 0x212c2
    ctx->pc = 0x17159cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 11));
    // 0x1715a0: 0x60202d
    ctx->pc = 0x1715a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715a4: 0x212c0
    ctx->pc = 0x1715a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x1715a8: 0xa2130003
    ctx->pc = 0x1715a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x1715ac: 0x40282d
    ctx->pc = 0x1715acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715b0: 0xae030020
    ctx->pc = 0x1715b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1715b4: 0xae020024
    ctx->pc = 0x1715b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1715b8: 0xc05f128
    ctx->pc = 0x1715B8u;
    SET_GPR_U32(ctx, 31, 0x1715C0u);
    ctx->pc = 0x1715BCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x17C4A0u;
    std::cerr << "[ADXT_Create] before SJRBF_Create#1\n";
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_Create_0x17c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1715C0u; }
        else if (ctx->pc != 0x1715C0u) { ctx->pc = 0x1715C0u; }
    }
    if (ctx->pc != 0x1715C0u) { return; }
    ctx->pc = 0x1715C0u;
    // 0x1715c0: 0x10400028
    ctx->pc = 0x1715C0u;
    {
        const bool branch_taken_0x1715c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1715C4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1715c0) {
            ctx->pc = 0x171664u;
            goto label_171664;
        }
    }
    ctx->pc = 0x1715C8u;
    // 0x1715c8: 0x1a600016
    ctx->pc = 0x1715C8u;
    {
        const bool branch_taken_0x1715c8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1715CCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1715c8) {
            ctx->pc = 0x171624u;
            goto label_171624;
        }
    }
    ctx->pc = 0x1715D0u;
    // 0x1715d0: 0x26120018
    ctx->pc = 0x1715d0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 24));
    // 0x1715d4: 0x8e060034
    ctx->pc = 0x1715d4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1715d8:
    { static int _i=0; if (++_i<=20 || (_i%1000)==0) std::cerr << "[ADXT_Create] loop_1715d8 iter=" << _i << " r17=" << GPR_S32(ctx,17) << " r19=" << GPR_S32(ctx,19) << std::endl; }
    // 0x1715d8: 0x8e050030
    ctx->pc = 0x1715d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1715dc: 0xd12018
    ctx->pc = 0x1715dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1715e0: 0x8e02002c
    ctx->pc = 0x1715e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1715e4: 0xc53023
    ctx->pc = 0x1715e4u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1715e8: 0x52840
    ctx->pc = 0x1715e8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1715ec: 0x63040
    ctx->pc = 0x1715ecu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1715f0: 0x42040
    ctx->pc = 0x1715f0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1715f4: 0xc05f128
    ctx->pc = 0x1715F4u;
    SET_GPR_U32(ctx, 31, 0x1715FCu);
    ctx->pc = 0x1715F8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x17C4A0u;
    std::cerr << "[ADXT_Create] before SJRBF_Create#2\n";
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_Create_0x17c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1715FCu; }
        else if (ctx->pc != 0x1715FCu) { ctx->pc = 0x1715FCu; }
    }
    if (ctx->pc != 0x1715FCu) { return; }
    std::cerr << "[ADXT_Create] after SJRBF_Create#2 r2=" << GPR_S32(ctx,2) << " r17=" << GPR_S32(ctx,17) << " r19=" << GPR_S32(ctx,19) << std::endl;
    ctx->pc = 0x1715FCu;
    // 0x1715fc: 0x111880
    ctx->pc = 0x1715fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x171600: 0x2431821
    ctx->pc = 0x171600u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x171604: 0x1040001b
    ctx->pc = 0x171604u;
    {
        const bool branch_taken_0x171604 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x171608u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x171604) {
            ctx->pc = 0x171674u;
            goto label_171674;
        }
    }
    ctx->pc = 0x17160Cu;
    // 0x17160c: 0x26310001
    ctx->pc = 0x17160cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x171610: 0x233102a
    ctx->pc = 0x171610u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
    // 0x171614: 0x5440fff0
    ctx->pc = 0x171614u;
    {
        const bool branch_taken_0x171614 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x171614) {
            ctx->pc = 0x171618u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->pc = 0x1715D8u;
            goto label_1715d8;
        }
    }
    ctx->pc = 0x17161Cu;
    // 0x17161c: 0x10000003
    ctx->pc = 0x17161Cu;
    {
        const bool branch_taken_0x17161c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x171620u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        if (branch_taken_0x17161c) {
            ctx->pc = 0x17162Cu;
            goto label_17162c;
        }
    }
    ctx->pc = 0x171624u;
label_171624:
    // 0x171624: 0x26120018
    ctx->pc = 0x171624u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 24));
    // 0x171628: 0x8e040010
    ctx->pc = 0x171628u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17162c:
    std::cerr << "[ADXT_Create] label_17162c (exited loop)" << std::endl;
    // 0x17162c: 0x260282d
    ctx->pc = 0x17162cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171630: 0xc05b724
    ctx->pc = 0x171630u;
    SET_GPR_U32(ctx, 31, 0x171638u);
    ctx->pc = 0x171634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DC90u;
    std::cerr << "[ADXT_Create] before ADXSJD_Create" << std::endl;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_Create_0x16dc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171638u; }
        else if (ctx->pc != 0x171638u) { ctx->pc = 0x171638u; }
    }
    if (ctx->pc != 0x171638u) { return; }
    std::cerr << "[ADXT_Create] after ADXSJD_Create r2=" << GPR_S32(ctx,2) << std::endl;
    ctx->pc = 0x171638u;
    // 0x171638: 0x1040000a
    ctx->pc = 0x171638u;
    {
        const bool branch_taken_0x171638 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17163Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x171638) {
            ctx->pc = 0x171664u;
            goto label_171664;
        }
    }
    ctx->pc = 0x171640u;
    // 0x171640: 0x240202d
    ctx->pc = 0x171640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171644: 0xc05b676
    ctx->pc = 0x171644u;
    SET_GPR_U32(ctx, 31, 0x17164Cu);
    ctx->pc = 0x171648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16D9D8u;
    std::cerr << "[ADXT_Create] before ADXRNA_Create" << std::endl;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_Create_0x16d9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17164Cu; }
        else if (ctx->pc != 0x17164Cu) { ctx->pc = 0x17164Cu; }
    }
    if (ctx->pc != 0x17164Cu) { return; }
    ctx->pc = 0x17164Cu;
    // 0x17164c: 0x10400005
    ctx->pc = 0x17164Cu;
    {
        const bool branch_taken_0x17164c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x171650u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x17164c) {
            ctx->pc = 0x171664u;
            goto label_171664;
        }
    }
    ctx->pc = 0x171654u;
    // 0x171654: 0xc05e79a
    ctx->pc = 0x171654u;
    SET_GPR_U32(ctx, 31, 0x17165Cu);
    ctx->pc = 0x171658u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x179E68u;
    std::cerr << "[ADXT_Create] before LSC_Create" << std::endl;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_Create_0x179e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17165Cu; }
        else if (ctx->pc != 0x17165Cu) { ctx->pc = 0x17165Cu; }
    }
    if (ctx->pc != 0x17165Cu) { return; }
    ctx->pc = 0x17165Cu;
    // 0x17165c: 0x14400009
    ctx->pc = 0x17165Cu;
    {
        const bool branch_taken_0x17165c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x171660u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
        if (branch_taken_0x17165c) {
            ctx->pc = 0x171684u;
            goto label_171684;
        }
    }
    ctx->pc = 0x171664u;
label_171664:
    // 0x171664: 0xc05c5d6
    ctx->pc = 0x171664u;
    SET_GPR_U32(ctx, 31, 0x17166Cu);
    ctx->pc = 0x171668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171758u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Destroy_0x171758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17166Cu; }
        else if (ctx->pc != 0x17166Cu) { ctx->pc = 0x17166Cu; }
    }
    if (ctx->pc != 0x17166Cu) { return; }
    ctx->pc = 0x17166Cu;
    // 0x17166c: 0x10000033
    ctx->pc = 0x17166Cu;
    {
        const bool branch_taken_0x17166c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x171670u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17166c) {
            ctx->pc = 0x17173Cu;
            goto label_17173c;
        }
    }
    ctx->pc = 0x171674u;
label_171674:
    std::cerr << "[ADXT_Create] label_171674 (r2 was 0, calling ADXT_Destroy)" << std::endl;
    // 0x171674: 0xc05c5d6
    ctx->pc = 0x171674u;
    SET_GPR_U32(ctx, 31, 0x17167Cu);
    ctx->pc = 0x171678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171758u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Destroy_0x171758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17167Cu; }
        else if (ctx->pc != 0x17167Cu) { ctx->pc = 0x17167Cu; }
    }
    if (ctx->pc != 0x17167Cu) { return; }
    ctx->pc = 0x17167Cu;
    // 0x17167c: 0x1000002f
    ctx->pc = 0x17167Cu;
    {
        const bool branch_taken_0x17167c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x171680u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17167c) {
            ctx->pc = 0x17173Cu;
            goto label_17173c;
        }
    }
    ctx->pc = 0x171684u;
label_171684:
    // 0x171684: 0x8e040024
    ctx->pc = 0x171684u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x171688: 0x2403ffff
    ctx->pc = 0x171688u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17168c: 0x2405003c
    ctx->pc = 0x17168cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 60));
    // 0x171690: 0x882d
    ctx->pc = 0x171690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171694: 0x64182a
    ctx->pc = 0x171694u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x171698: 0x248207ff
    ctx->pc = 0x171698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 2047));
    // 0x17169c: 0x83100b
    ctx->pc = 0x17169cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x1716a0: 0xae050038
    ctx->pc = 0x1716a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
    // 0x1716a4: 0x212c3
    ctx->pc = 0x1716a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x1716a8: 0x22400
    ctx->pc = 0x1716a8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 16));
    // 0x1716ac: 0xa602003c
    ctx->pc = 0x1716acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x1716b0: 0xc052e16
    ctx->pc = 0x1716B0u;
    SET_GPR_U32(ctx, 31, 0x1716B8u);
    ctx->pc = 0x1716B4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->pc = 0x14B858u;
    std::cerr << "[ADXT_Create] before litodp" << std::endl;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1716B8u; }
        else if (ctx->pc != 0x1716B8u) { ctx->pc = 0x1716B8u; }
    }
    if (ctx->pc != 0x1716B8u) { return; }
    ctx->pc = 0x1716B8u;
    // 0x1716b8: 0x3c01002c
    ctx->pc = 0x1716b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1716bc: 0xdc25a250
    ctx->pc = 0x1716bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294943312)));
    // 0x1716c0: 0xc052cb8
    ctx->pc = 0x1716C0u;
    SET_GPR_U32(ctx, 31, 0x1716C8u);
    ctx->pc = 0x1716C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1716C8u; }
        else if (ctx->pc != 0x1716C8u) { ctx->pc = 0x1716C8u; }
    }
    if (ctx->pc != 0x1716C8u) { return; }
    ctx->pc = 0x1716C8u;
    // 0x1716c8: 0xc052e44
    ctx->pc = 0x1716C8u;
    SET_GPR_U32(ctx, 31, 0x1716D0u);
    ctx->pc = 0x1716CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1716D0u; }
        else if (ctx->pc != 0x1716D0u) { ctx->pc = 0x1716D0u; }
    }
    if (ctx->pc != 0x1716D0u) { return; }
    ctx->pc = 0x1716D0u;
    // 0x1716d0: 0xa602003e
    ctx->pc = 0x1716d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x1716d4: 0x1a60000a
    ctx->pc = 0x1716D4u;
    {
        const bool branch_taken_0x1716d4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1716D8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1716d4) {
            ctx->pc = 0x171700u;
            goto label_171700;
        }
    }
    ctx->pc = 0x1716DCu;
    // 0x1716dc: 0x26050042
    ctx->pc = 0x1716dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 66));
label_1716e0:
    { static int _n=0; if (++_n<=50 || (_n%10000)==0) std::cerr << "[ADXT_Create] loop_1716e0 (n=" << _n << ")\n"; }
    // 0x1716e0: 0x111040
    ctx->pc = 0x1716e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 1));
    // 0x1716e4: 0x2404ff80
    ctx->pc = 0x1716e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1716e8: 0xa21021
    ctx->pc = 0x1716e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1716ec: 0x26310001
    ctx->pc = 0x1716ecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1716f0: 0xa4440000
    ctx->pc = 0x1716f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1716f4: 0x233182a
    ctx->pc = 0x1716f4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
    // 0x1716f8: 0x1460fff9
    ctx->pc = 0x1716F8u;
    {
        const bool branch_taken_0x1716f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1716f8) {
            ctx->pc = 0x1716E0u;
            goto label_1716e0;
        }
    }
    ctx->pc = 0x171700u;
label_171700:
    // 0x171700: 0x24030001
    ctx->pc = 0x171700u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x171704: 0xae000054
    ctx->pc = 0x171704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x171708: 0xa2030000
    ctx->pc = 0x171708u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17170c: 0x200102d
    ctx->pc = 0x17170cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171710: 0xa203006c
    ctx->pc = 0x171710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 3));
    // 0x171714: 0xae000058
    ctx->pc = 0x171714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x171718: 0xae00005c
    ctx->pc = 0x171718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x17171c: 0xa6000060
    ctx->pc = 0x17171cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x171720: 0xae000064
    ctx->pc = 0x171720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x171724: 0xa6000068
    ctx->pc = 0x171724u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x171728: 0xa600006a
    ctx->pc = 0x171728u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x17172c: 0xa203006d
    ctx->pc = 0x17172cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 109), (uint8_t)GPR_U32(ctx, 3));
    // 0x171730: 0xa2000072
    ctx->pc = 0x171730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x171734: 0xae000088
    ctx->pc = 0x171734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x171738: 0xa2030098
    ctx->pc = 0x171738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 3));
label_17173c:
    std::cerr << "[ADXT_Create] epilogue/return" << std::endl;
    // 0x17173c: 0xdfbf0040
    ctx->pc = 0x17173cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171740: 0xdfb30030
    ctx->pc = 0x171740u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171744: 0xdfb20020
    ctx->pc = 0x171744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171748: 0xdfb10010
    ctx->pc = 0x171748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17174c: 0xdfb00000
    ctx->pc = 0x17174cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171750: 0x3e00008
    ctx->pc = 0x171750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171754u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171520u: goto label_171520;
            case 0x171538u: goto label_171538;
            case 0x17154Cu: goto label_17154c;
            case 0x1715D8u: goto label_1715d8;
            case 0x171624u: goto label_171624;
            case 0x17162Cu: goto label_17162c;
            case 0x171664u: goto label_171664;
            case 0x171674u: goto label_171674;
            case 0x171684u: goto label_171684;
            case 0x1716E0u: goto label_1716e0;
            case 0x171700u: goto label_171700;
            case 0x17173Cu: goto label_17173c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171758u;
}
