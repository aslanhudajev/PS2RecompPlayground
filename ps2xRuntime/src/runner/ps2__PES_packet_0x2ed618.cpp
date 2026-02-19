#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _PES_packet
// Address: 0x2ed618 - 0x2edba0
void ps2__PES_packet_0x2ed618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ed618u;

    // 0x2ed618: 0x27bdff50
    ctx->pc = 0x2ed618u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2ed61c: 0xffb40050
    ctx->pc = 0x2ed61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2ed620: 0xffb30040
    ctx->pc = 0x2ed620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2ed624: 0xa0a02d
    ctx->pc = 0x2ed624u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed628: 0xffbf00a0
    ctx->pc = 0x2ed628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2ed62c: 0x80982d
    ctx->pc = 0x2ed62cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed630: 0xffbe0090
    ctx->pc = 0x2ed630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2ed634: 0xffb70080
    ctx->pc = 0x2ed634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2ed638: 0x24050018
    ctx->pc = 0x2ed638u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2ed63c: 0xffb60070
    ctx->pc = 0x2ed63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2ed640: 0xffb50060
    ctx->pc = 0x2ed640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2ed644: 0xffb20030
    ctx->pc = 0x2ed644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ed648: 0xffb10020
    ctx->pc = 0x2ed648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2ed64c: 0xffb00010
    ctx->pc = 0x2ed64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ed650: 0x8e620018
    ctx->pc = 0x2ed650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2ed654: 0xc0bd19e
    ctx->pc = 0x2ED654u;
    SET_GPR_U32(ctx, 31, 0x2ED65Cu);
    ctx->pc = 0x2ED658u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED65Cu; }
    }
    if (ctx->pc != 0x2ED65Cu) { return; }
    ctx->pc = 0x2ED65Cu;
    // 0x2ed65c: 0x260202d
    ctx->pc = 0x2ed65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed660: 0xc0bd19e
    ctx->pc = 0x2ED660u;
    SET_GPR_U32(ctx, 31, 0x2ED668u);
    ctx->pc = 0x2ED664u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED668u; }
    }
    if (ctx->pc != 0x2ED668u) { return; }
    ctx->pc = 0x2ED668u;
    // 0x2ed668: 0x2103c
    ctx->pc = 0x2ed668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed66c: 0x260202d
    ctx->pc = 0x2ed66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed670: 0xfe820000
    ctx->pc = 0x2ed670u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x2ed674: 0xc0bd19e
    ctx->pc = 0x2ED674u;
    SET_GPR_U32(ctx, 31, 0x2ED67Cu);
    ctx->pc = 0x2ED678u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED67Cu; }
    }
    if (ctx->pc != 0x2ED67Cu) { return; }
    ctx->pc = 0x2ED67Cu;
    // 0x2ed67c: 0xde840000
    ctx->pc = 0x2ed67cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ed680: 0x2403ffff
    ctx->pc = 0x2ed680u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed684: 0xae820008
    ctx->pc = 0x2ed684u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x2ed688: 0x3402bc00
    ctx->pc = 0x2ed688u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 48128));
    // 0x2ed68c: 0x21638
    ctx->pc = 0x2ed68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ed690: 0x80282d
    ctx->pc = 0x2ed690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed694: 0xfe830010
    ctx->pc = 0x2ed694u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x2ed698: 0x10820117
    ctx->pc = 0x2ED698u;
    {
        const bool branch_taken_0x2ed698 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2ED69Cu;
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
        if (branch_taken_0x2ed698) {
            ctx->pc = 0x2EDAF8u;
            goto label_2edaf8;
        }
    }
    ctx->pc = 0x2ED6A0u;
    // 0x2ed6a0: 0x3402be00
    ctx->pc = 0x2ed6a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 48640));
    // 0x2ed6a4: 0x21638
    ctx->pc = 0x2ed6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ed6a8: 0x108200f7
    ctx->pc = 0x2ED6A8u;
    {
        const bool branch_taken_0x2ed6a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x2ed6a8) {
            ctx->pc = 0x2EDA88u;
            goto label_2eda88;
        }
    }
    ctx->pc = 0x2ED6B0u;
    // 0x2ed6b0: 0x3402bf00
    ctx->pc = 0x2ed6b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 48896));
    // 0x2ed6b4: 0x21638
    ctx->pc = 0x2ed6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ed6b8: 0x108200f3
    ctx->pc = 0x2ED6B8u;
    {
        const bool branch_taken_0x2ed6b8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x2ed6b8) {
            ctx->pc = 0x2EDA88u;
            goto label_2eda88;
        }
    }
    ctx->pc = 0x2ED6C0u;
    // 0x2ed6c0: 0x3402f000
    ctx->pc = 0x2ed6c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 61440));
    // 0x2ed6c4: 0x21638
    ctx->pc = 0x2ed6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ed6c8: 0x108200ef
    ctx->pc = 0x2ED6C8u;
    {
        const bool branch_taken_0x2ed6c8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x2ed6c8) {
            ctx->pc = 0x2EDA88u;
            goto label_2eda88;
        }
    }
    ctx->pc = 0x2ED6D0u;
    // 0x2ed6d0: 0x3402f100
    ctx->pc = 0x2ed6d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 61696));
    // 0x2ed6d4: 0x21638
    ctx->pc = 0x2ed6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ed6d8: 0x108200eb
    ctx->pc = 0x2ED6D8u;
    {
        const bool branch_taken_0x2ed6d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x2ed6d8) {
            ctx->pc = 0x2EDA88u;
            goto label_2eda88;
        }
    }
    ctx->pc = 0x2ED6E0u;
    // 0x2ed6e0: 0x3402ff00
    ctx->pc = 0x2ed6e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65280));
    // 0x2ed6e4: 0x21638
    ctx->pc = 0x2ed6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ed6e8: 0x108200e7
    ctx->pc = 0x2ED6E8u;
    {
        const bool branch_taken_0x2ed6e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x2ed6e8) {
            ctx->pc = 0x2EDA88u;
            goto label_2eda88;
        }
    }
    ctx->pc = 0x2ED6F0u;
    // 0x2ed6f0: 0x3402f200
    ctx->pc = 0x2ed6f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 61952));
    // 0x2ed6f4: 0x21638
    ctx->pc = 0x2ed6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ed6f8: 0x108200e3
    ctx->pc = 0x2ED6F8u;
    {
        const bool branch_taken_0x2ed6f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x2ed6f8) {
            ctx->pc = 0x2EDA88u;
            goto label_2eda88;
        }
    }
    ctx->pc = 0x2ED700u;
    // 0x2ed700: 0x3402f800
    ctx->pc = 0x2ed700u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 63488));
    // 0x2ed704: 0x21638
    ctx->pc = 0x2ed704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ed708: 0x108200df
    ctx->pc = 0x2ED708u;
    {
        const bool branch_taken_0x2ed708 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x2ed708) {
            ctx->pc = 0x2EDA88u;
            goto label_2eda88;
        }
    }
    ctx->pc = 0x2ED710u;
    // 0x2ed710: 0x260202d
    ctx->pc = 0x2ed710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed714: 0xc0bd19e
    ctx->pc = 0x2ED714u;
    SET_GPR_U32(ctx, 31, 0x2ED71Cu);
    ctx->pc = 0x2ED718u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED71Cu; }
    }
    if (ctx->pc != 0x2ED71Cu) { return; }
    ctx->pc = 0x2ED71Cu;
    // 0x2ed71c: 0x260202d
    ctx->pc = 0x2ed71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed720: 0xc0bd19e
    ctx->pc = 0x2ED720u;
    SET_GPR_U32(ctx, 31, 0x2ED728u);
    ctx->pc = 0x2ED724u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED728u; }
    }
    if (ctx->pc != 0x2ED728u) { return; }
    ctx->pc = 0x2ED728u;
    // 0x2ed728: 0xae82000c
    ctx->pc = 0x2ed728u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x2ed72c: 0x260202d
    ctx->pc = 0x2ed72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed730: 0xc0bd19e
    ctx->pc = 0x2ED730u;
    SET_GPR_U32(ctx, 31, 0x2ED738u);
    ctx->pc = 0x2ED734u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED738u; }
    }
    if (ctx->pc != 0x2ED738u) { return; }
    ctx->pc = 0x2ED738u;
    // 0x2ed738: 0x260202d
    ctx->pc = 0x2ed738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed73c: 0xc0bd19e
    ctx->pc = 0x2ED73Cu;
    SET_GPR_U32(ctx, 31, 0x2ED744u);
    ctx->pc = 0x2ED740u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED744u; }
    }
    if (ctx->pc != 0x2ED744u) { return; }
    ctx->pc = 0x2ED744u;
    // 0x2ed744: 0x40b82d
    ctx->pc = 0x2ed744u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed748: 0x260202d
    ctx->pc = 0x2ed748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed74c: 0xc0bd19e
    ctx->pc = 0x2ED74Cu;
    SET_GPR_U32(ctx, 31, 0x2ED754u);
    ctx->pc = 0x2ED750u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED754u; }
    }
    if (ctx->pc != 0x2ED754u) { return; }
    ctx->pc = 0x2ED754u;
    // 0x2ed754: 0xafa20000
    ctx->pc = 0x2ed754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2ed758: 0x260202d
    ctx->pc = 0x2ed758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed75c: 0xc0bd19e
    ctx->pc = 0x2ED75Cu;
    SET_GPR_U32(ctx, 31, 0x2ED764u);
    ctx->pc = 0x2ED760u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED764u; }
    }
    if (ctx->pc != 0x2ED764u) { return; }
    ctx->pc = 0x2ED764u;
    // 0x2ed764: 0x40f02d
    ctx->pc = 0x2ed764u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed768: 0x260202d
    ctx->pc = 0x2ed768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed76c: 0xc0bd19e
    ctx->pc = 0x2ED76Cu;
    SET_GPR_U32(ctx, 31, 0x2ED774u);
    ctx->pc = 0x2ED770u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED774u; }
    }
    if (ctx->pc != 0x2ED774u) { return; }
    ctx->pc = 0x2ED774u;
    // 0x2ed774: 0x40a82d
    ctx->pc = 0x2ed774u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed778: 0x260202d
    ctx->pc = 0x2ed778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed77c: 0xc0bd19e
    ctx->pc = 0x2ED77Cu;
    SET_GPR_U32(ctx, 31, 0x2ED784u);
    ctx->pc = 0x2ED780u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED784u; }
    }
    if (ctx->pc != 0x2ED784u) { return; }
    ctx->pc = 0x2ED784u;
    // 0x2ed784: 0xafa20004
    ctx->pc = 0x2ed784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2ed788: 0x32e30002
    ctx->pc = 0x2ed788u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 23), 2));
    // 0x2ed78c: 0xde620018
    ctx->pc = 0x2ed78cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2ed790: 0x2b03c
    ctx->pc = 0x2ed790u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed794: 0x16b03f
    ctx->pc = 0x2ed794u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x2ed798: 0x10600022
    ctx->pc = 0x2ED798u;
    {
        const bool branch_taken_0x2ed798 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ED79Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2ed798) {
            ctx->pc = 0x2ED824u;
            goto label_2ed824;
        }
    }
    ctx->pc = 0x2ED7A0u;
    // 0x2ed7a0: 0x260202d
    ctx->pc = 0x2ed7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7a4: 0xc0bd19e
    ctx->pc = 0x2ED7A4u;
    SET_GPR_U32(ctx, 31, 0x2ED7ACu);
    ctx->pc = 0x2ED7A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED7ACu; }
    }
    if (ctx->pc != 0x2ED7ACu) { return; }
    ctx->pc = 0x2ED7ACu;
    // 0x2ed7ac: 0x260202d
    ctx->pc = 0x2ed7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7b0: 0xc0bd19e
    ctx->pc = 0x2ED7B0u;
    SET_GPR_U32(ctx, 31, 0x2ED7B8u);
    ctx->pc = 0x2ED7B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED7B8u; }
    }
    if (ctx->pc != 0x2ED7B8u) { return; }
    ctx->pc = 0x2ED7B8u;
    // 0x2ed7b8: 0x40802d
    ctx->pc = 0x2ed7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7bc: 0xc0bd1b2
    ctx->pc = 0x2ED7BCu;
    SET_GPR_U32(ctx, 31, 0x2ED7C4u);
    ctx->pc = 0x2ED7C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F46C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x2f46c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED7C4u; }
    }
    if (ctx->pc != 0x2ED7C4u) { return; }
    ctx->pc = 0x2ED7C4u;
    // 0x2ed7c4: 0x260202d
    ctx->pc = 0x2ed7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7c8: 0xc0bd19e
    ctx->pc = 0x2ED7C8u;
    SET_GPR_U32(ctx, 31, 0x2ED7D0u);
    ctx->pc = 0x2ED7CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED7D0u; }
    }
    if (ctx->pc != 0x2ED7D0u) { return; }
    ctx->pc = 0x2ED7D0u;
    // 0x2ed7d0: 0x40882d
    ctx->pc = 0x2ed7d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7d4: 0xc0bd1b2
    ctx->pc = 0x2ED7D4u;
    SET_GPR_U32(ctx, 31, 0x2ED7DCu);
    ctx->pc = 0x2ED7D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F46C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x2f46c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED7DCu; }
    }
    if (ctx->pc != 0x2ED7DCu) { return; }
    ctx->pc = 0x2ED7DCu;
    // 0x2ed7dc: 0x260202d
    ctx->pc = 0x2ed7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7e0: 0xc0bd19e
    ctx->pc = 0x2ED7E0u;
    SET_GPR_U32(ctx, 31, 0x2ED7E8u);
    ctx->pc = 0x2ED7E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED7E8u; }
    }
    if (ctx->pc != 0x2ED7E8u) { return; }
    ctx->pc = 0x2ED7E8u;
    // 0x2ed7e8: 0x40902d
    ctx->pc = 0x2ed7e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7ec: 0xc0bd1b2
    ctx->pc = 0x2ED7ECu;
    SET_GPR_U32(ctx, 31, 0x2ED7F4u);
    ctx->pc = 0x2ED7F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F46C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x2f46c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED7F4u; }
    }
    if (ctx->pc != 0x2ED7F4u) { return; }
    ctx->pc = 0x2ED7F4u;
    // 0x2ed7f4: 0x101780
    ctx->pc = 0x2ed7f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 30));
    // 0x2ed7f8: 0x118bc0
    ctx->pc = 0x2ed7f8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 15));
    // 0x2ed7fc: 0x511025
    ctx->pc = 0x2ed7fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ed800: 0x108082
    ctx->pc = 0x2ed800u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 16), 2));
    // 0x2ed804: 0x521025
    ctx->pc = 0x2ed804u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2ed808: 0x32100001
    ctx->pc = 0x2ed808u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 1));
    // 0x2ed80c: 0x2103c
    ctx->pc = 0x2ed80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed810: 0x10803c
    ctx->pc = 0x2ed810u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2ed814: 0x2103e
    ctx->pc = 0x2ed814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ed818: 0x2028025
    ctx->pc = 0x2ed818u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ed81c: 0xfe900010
    ctx->pc = 0x2ed81cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 16));
    // 0x2ed820: 0x24020003
    ctx->pc = 0x2ed820u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2ed824:
    // 0x2ed824: 0x16e20022
    ctx->pc = 0x2ED824u;
    {
        const bool branch_taken_0x2ed824 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 2));
        ctx->pc = 0x2ED828u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2ed824) {
            ctx->pc = 0x2ED8B0u;
            goto label_2ed8b0;
        }
    }
    ctx->pc = 0x2ED82Cu;
    // 0x2ed82c: 0x260202d
    ctx->pc = 0x2ed82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed830: 0xc0bd19e
    ctx->pc = 0x2ED830u;
    SET_GPR_U32(ctx, 31, 0x2ED838u);
    ctx->pc = 0x2ED834u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED838u; }
    }
    if (ctx->pc != 0x2ED838u) { return; }
    ctx->pc = 0x2ED838u;
    // 0x2ed838: 0x260202d
    ctx->pc = 0x2ed838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed83c: 0xc0bd19e
    ctx->pc = 0x2ED83Cu;
    SET_GPR_U32(ctx, 31, 0x2ED844u);
    ctx->pc = 0x2ED840u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED844u; }
    }
    if (ctx->pc != 0x2ED844u) { return; }
    ctx->pc = 0x2ED844u;
    // 0x2ed844: 0x40802d
    ctx->pc = 0x2ed844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed848: 0xc0bd1b2
    ctx->pc = 0x2ED848u;
    SET_GPR_U32(ctx, 31, 0x2ED850u);
    ctx->pc = 0x2ED84Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F46C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x2f46c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED850u; }
    }
    if (ctx->pc != 0x2ED850u) { return; }
    ctx->pc = 0x2ED850u;
    // 0x2ed850: 0x260202d
    ctx->pc = 0x2ed850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed854: 0xc0bd19e
    ctx->pc = 0x2ED854u;
    SET_GPR_U32(ctx, 31, 0x2ED85Cu);
    ctx->pc = 0x2ED858u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED85Cu; }
    }
    if (ctx->pc != 0x2ED85Cu) { return; }
    ctx->pc = 0x2ED85Cu;
    // 0x2ed85c: 0x40882d
    ctx->pc = 0x2ed85cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed860: 0xc0bd1b2
    ctx->pc = 0x2ED860u;
    SET_GPR_U32(ctx, 31, 0x2ED868u);
    ctx->pc = 0x2ED864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F46C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x2f46c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED868u; }
    }
    if (ctx->pc != 0x2ED868u) { return; }
    ctx->pc = 0x2ED868u;
    // 0x2ed868: 0x260202d
    ctx->pc = 0x2ed868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed86c: 0xc0bd19e
    ctx->pc = 0x2ED86Cu;
    SET_GPR_U32(ctx, 31, 0x2ED874u);
    ctx->pc = 0x2ED870u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED874u; }
    }
    if (ctx->pc != 0x2ED874u) { return; }
    ctx->pc = 0x2ED874u;
    // 0x2ed874: 0x40902d
    ctx->pc = 0x2ed874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed878: 0xc0bd1b2
    ctx->pc = 0x2ED878u;
    SET_GPR_U32(ctx, 31, 0x2ED880u);
    ctx->pc = 0x2ED87Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F46C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x2f46c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED880u; }
    }
    if (ctx->pc != 0x2ED880u) { return; }
    ctx->pc = 0x2ED880u;
    // 0x2ed880: 0x101780
    ctx->pc = 0x2ed880u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 30));
    // 0x2ed884: 0x118bc0
    ctx->pc = 0x2ed884u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 15));
    // 0x2ed888: 0x511025
    ctx->pc = 0x2ed888u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ed88c: 0x108082
    ctx->pc = 0x2ed88cu;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 16), 2));
    // 0x2ed890: 0x521025
    ctx->pc = 0x2ed890u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2ed894: 0x32100001
    ctx->pc = 0x2ed894u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 1));
    // 0x2ed898: 0x2103c
    ctx->pc = 0x2ed898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed89c: 0x10803c
    ctx->pc = 0x2ed89cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2ed8a0: 0x2103e
    ctx->pc = 0x2ed8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ed8a4: 0x2028025
    ctx->pc = 0x2ed8a4u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ed8a8: 0xfe900018
    ctx->pc = 0x2ed8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 16));
    // 0x2ed8ac: 0x8fa20000
    ctx->pc = 0x2ed8acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ed8b0:
    // 0x2ed8b0: 0x24100001
    ctx->pc = 0x2ed8b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed8b4: 0x14500003
    ctx->pc = 0x2ED8B4u;
    {
        const bool branch_taken_0x2ed8b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x2ED8B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ed8b4) {
            ctx->pc = 0x2ED8C4u;
            goto label_2ed8c4;
        }
    }
    ctx->pc = 0x2ED8BCu;
    // 0x2ed8bc: 0xc0bd19e
    ctx->pc = 0x2ED8BCu;
    SET_GPR_U32(ctx, 31, 0x2ED8C4u);
    ctx->pc = 0x2ED8C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED8C4u; }
    }
    if (ctx->pc != 0x2ED8C4u) { return; }
    ctx->pc = 0x2ED8C4u;
label_2ed8c4:
    // 0x2ed8c4: 0x13c00006
    ctx->pc = 0x2ED8C4u;
    {
        const bool branch_taken_0x2ed8c4 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ED8C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2ed8c4) {
            ctx->pc = 0x2ED8E0u;
            goto label_2ed8e0;
        }
    }
    ctx->pc = 0x2ED8CCu;
    // 0x2ed8cc: 0x260202d
    ctx->pc = 0x2ed8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed8d0: 0x24422ff8
    ctx->pc = 0x2ed8d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12280));
    // 0x2ed8d4: 0x3c21021
    ctx->pc = 0x2ed8d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2ed8d8: 0xc0bd19e
    ctx->pc = 0x2ED8D8u;
    SET_GPR_U32(ctx, 31, 0x2ED8E0u);
    ctx->pc = 0x2ED8DCu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED8E0u; }
    }
    if (ctx->pc != 0x2ED8E0u) { return; }
    ctx->pc = 0x2ED8E0u;
label_2ed8e0:
    // 0x2ed8e0: 0x16b00045
    ctx->pc = 0x2ED8E0u;
    {
        const bool branch_taken_0x2ed8e0 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 16));
        ctx->pc = 0x2ED8E4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ed8e0) {
            ctx->pc = 0x2ED9F8u;
            goto label_2ed9f8;
        }
    }
    ctx->pc = 0x2ED8E8u;
    // 0x2ed8e8: 0x260202d
    ctx->pc = 0x2ed8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed8ec: 0xc0bd19e
    ctx->pc = 0x2ED8ECu;
    SET_GPR_U32(ctx, 31, 0x2ED8F4u);
    ctx->pc = 0x2ED8F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED8F4u; }
    }
    if (ctx->pc != 0x2ED8F4u) { return; }
    ctx->pc = 0x2ED8F4u;
    // 0x2ed8f4: 0x40802d
    ctx->pc = 0x2ed8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed8f8: 0x260202d
    ctx->pc = 0x2ed8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed8fc: 0xc0bd19e
    ctx->pc = 0x2ED8FCu;
    SET_GPR_U32(ctx, 31, 0x2ED904u);
    ctx->pc = 0x2ED900u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED904u; }
    }
    if (ctx->pc != 0x2ED904u) { return; }
    ctx->pc = 0x2ED904u;
    // 0x2ed904: 0x40f02d
    ctx->pc = 0x2ed904u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed908: 0x260202d
    ctx->pc = 0x2ed908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed90c: 0xc0bd19e
    ctx->pc = 0x2ED90Cu;
    SET_GPR_U32(ctx, 31, 0x2ED914u);
    ctx->pc = 0x2ED910u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED914u; }
    }
    if (ctx->pc != 0x2ED914u) { return; }
    ctx->pc = 0x2ED914u;
    // 0x2ed914: 0x40902d
    ctx->pc = 0x2ed914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed918: 0x260202d
    ctx->pc = 0x2ed918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed91c: 0xc0bd19e
    ctx->pc = 0x2ED91Cu;
    SET_GPR_U32(ctx, 31, 0x2ED924u);
    ctx->pc = 0x2ED920u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED924u; }
    }
    if (ctx->pc != 0x2ED924u) { return; }
    ctx->pc = 0x2ED924u;
    // 0x2ed924: 0x40b82d
    ctx->pc = 0x2ed924u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed928: 0x260202d
    ctx->pc = 0x2ed928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed92c: 0xc0bd19e
    ctx->pc = 0x2ED92Cu;
    SET_GPR_U32(ctx, 31, 0x2ED934u);
    ctx->pc = 0x2ED930u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED934u; }
    }
    if (ctx->pc != 0x2ED934u) { return; }
    ctx->pc = 0x2ED934u;
    // 0x2ed934: 0x260202d
    ctx->pc = 0x2ed934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed938: 0xc0bd19e
    ctx->pc = 0x2ED938u;
    SET_GPR_U32(ctx, 31, 0x2ED940u);
    ctx->pc = 0x2ED93Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED940u; }
    }
    if (ctx->pc != 0x2ED940u) { return; }
    ctx->pc = 0x2ED940u;
    // 0x2ed940: 0x1615000a
    ctx->pc = 0x2ED940u;
    {
        const bool branch_taken_0x2ed940 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 21));
        ctx->pc = 0x2ED944u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ed940) {
            ctx->pc = 0x2ED96Cu;
            goto label_2ed96c;
        }
    }
    ctx->pc = 0x2ED948u;
    // 0x2ed948: 0x260202d
    ctx->pc = 0x2ed948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed94c: 0xc0bd19e
    ctx->pc = 0x2ED94Cu;
    SET_GPR_U32(ctx, 31, 0x2ED954u);
    ctx->pc = 0x2ED950u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED954u; }
    }
    if (ctx->pc != 0x2ED954u) { return; }
    ctx->pc = 0x2ED954u;
    // 0x2ed954: 0x260202d
    ctx->pc = 0x2ed954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed958: 0xc0bd19e
    ctx->pc = 0x2ED958u;
    SET_GPR_U32(ctx, 31, 0x2ED960u);
    ctx->pc = 0x2ED95Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED960u; }
    }
    if (ctx->pc != 0x2ED960u) { return; }
    ctx->pc = 0x2ED960u;
    // 0x2ed960: 0x260202d
    ctx->pc = 0x2ed960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed964: 0xc0bd19e
    ctx->pc = 0x2ED964u;
    SET_GPR_U32(ctx, 31, 0x2ED96Cu);
    ctx->pc = 0x2ED968u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED96Cu; }
    }
    if (ctx->pc != 0x2ED96Cu) { return; }
    ctx->pc = 0x2ED96Cu;
label_2ed96c:
    // 0x2ed96c: 0x17d50005
    ctx->pc = 0x2ED96Cu;
    {
        const bool branch_taken_0x2ed96c = (GPR_U32(ctx, 30) != GPR_U32(ctx, 21));
        ctx->pc = 0x2ED970u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2ed96c) {
            ctx->pc = 0x2ED984u;
            goto label_2ed984;
        }
    }
    ctx->pc = 0x2ED974u;
    // 0x2ed974: 0xc0bba56
    ctx->pc = 0x2ED974u;
    SET_GPR_U32(ctx, 31, 0x2ED97Cu);
    ctx->pc = 0x2ED978u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941880));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED97Cu; }
    }
    if (ctx->pc != 0x2ED97Cu) { return; }
    ctx->pc = 0x2ED97Cu;
    // 0x2ed97c: 0x1000007c
    ctx->pc = 0x2ED97Cu;
    {
        const bool branch_taken_0x2ed97c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ED980u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ed97c) {
            ctx->pc = 0x2EDB70u;
            goto label_2edb70;
        }
    }
    ctx->pc = 0x2ED984u;
label_2ed984:
    // 0x2ed984: 0x16550003
    ctx->pc = 0x2ED984u;
    {
        const bool branch_taken_0x2ed984 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 21));
        ctx->pc = 0x2ED988u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ed984) {
            ctx->pc = 0x2ED994u;
            goto label_2ed994;
        }
    }
    ctx->pc = 0x2ED98Cu;
    // 0x2ed98c: 0xc0bd19e
    ctx->pc = 0x2ED98Cu;
    SET_GPR_U32(ctx, 31, 0x2ED994u);
    ctx->pc = 0x2ED990u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED994u; }
    }
    if (ctx->pc != 0x2ED994u) { return; }
    ctx->pc = 0x2ED994u;
label_2ed994:
    // 0x2ed994: 0x16f50003
    ctx->pc = 0x2ED994u;
    {
        const bool branch_taken_0x2ed994 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 21));
        ctx->pc = 0x2ED998u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ed994) {
            ctx->pc = 0x2ED9A4u;
            goto label_2ed9a4;
        }
    }
    ctx->pc = 0x2ED99Cu;
    // 0x2ed99c: 0xc0bd19e
    ctx->pc = 0x2ED99Cu;
    SET_GPR_U32(ctx, 31, 0x2ED9A4u);
    ctx->pc = 0x2ED9A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED9A4u; }
    }
    if (ctx->pc != 0x2ED9A4u) { return; }
    ctx->pc = 0x2ED9A4u;
label_2ed9a4:
    // 0x2ed9a4: 0x16350014
    ctx->pc = 0x2ED9A4u;
    {
        const bool branch_taken_0x2ed9a4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 21));
        ctx->pc = 0x2ED9A8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ed9a4) {
            ctx->pc = 0x2ED9F8u;
            goto label_2ed9f8;
        }
    }
    ctx->pc = 0x2ED9ACu;
    // 0x2ed9ac: 0x260202d
    ctx->pc = 0x2ed9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed9b0: 0xc0bd1b2
    ctx->pc = 0x2ED9B0u;
    SET_GPR_U32(ctx, 31, 0x2ED9B8u);
    ctx->pc = 0x2ED9B4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F46C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x2f46c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED9B8u; }
    }
    if (ctx->pc != 0x2ED9B8u) { return; }
    ctx->pc = 0x2ED9B8u;
    // 0x2ed9b8: 0x260202d
    ctx->pc = 0x2ed9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed9bc: 0xc0bd19e
    ctx->pc = 0x2ED9BCu;
    SET_GPR_U32(ctx, 31, 0x2ED9C4u);
    ctx->pc = 0x2ED9C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED9C4u; }
    }
    if (ctx->pc != 0x2ED9C4u) { return; }
    ctx->pc = 0x2ED9C4u;
    // 0x2ed9c4: 0x40882d
    ctx->pc = 0x2ed9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed9c8: 0x1220000b
    ctx->pc = 0x2ED9C8u;
    {
        const bool branch_taken_0x2ed9c8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ED9CCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ed9c8) {
            ctx->pc = 0x2ED9F8u;
            goto label_2ed9f8;
        }
    }
    ctx->pc = 0x2ED9D0u;
    // 0x2ed9d0: 0x260202d
    ctx->pc = 0x2ed9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed9d4: 0x0
    ctx->pc = 0x2ed9d4u;
    // NOP
label_2ed9d8:
    // 0x2ed9d8: 0xc0bd19e
    ctx->pc = 0x2ED9D8u;
    SET_GPR_U32(ctx, 31, 0x2ED9E0u);
    ctx->pc = 0x2ED9DCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED9E0u; }
    }
    if (ctx->pc != 0x2ED9E0u) { return; }
    ctx->pc = 0x2ED9E0u;
    // 0x2ed9e0: 0x26100001
    ctx->pc = 0x2ed9e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ed9e4: 0x211102b
    ctx->pc = 0x2ed9e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2ed9e8: 0x1440fffb
    ctx->pc = 0x2ED9E8u;
    {
        const bool branch_taken_0x2ed9e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2ED9ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ed9e8) {
            ctx->pc = 0x2ED9D8u;
            goto label_2ed9d8;
        }
    }
    ctx->pc = 0x2ED9F0u;
    // 0x2ed9f0: 0x10000002
    ctx->pc = 0x2ED9F0u;
    {
        const bool branch_taken_0x2ed9f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ED9F4u;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
        if (branch_taken_0x2ed9f0) {
            ctx->pc = 0x2ED9FCu;
            goto label_2ed9fc;
        }
    }
    ctx->pc = 0x2ED9F8u;
label_2ed9f8:
    // 0x2ed9f8: 0xde620018
    ctx->pc = 0x2ed9f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_2ed9fc:
    // 0x2ed9fc: 0x8fa30004
    ctx->pc = 0x2ed9fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2eda00: 0x52102f
    ctx->pc = 0x2eda00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x2eda04: 0x21778
    ctx->pc = 0x2eda04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x2eda08: 0x2103f
    ctx->pc = 0x2eda08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2eda0c: 0x622823
    ctx->pc = 0x2eda0cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eda10: 0x50a00004
    ctx->pc = 0x2EDA10u;
    {
        const bool branch_taken_0x2eda10 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x2eda10) {
            ctx->pc = 0x2EDA14u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->pc = 0x2EDA24u;
            goto label_2eda24;
        }
    }
    ctx->pc = 0x2EDA18u;
    // 0x2eda18: 0xc0bd1c4
    ctx->pc = 0x2EDA18u;
    SET_GPR_U32(ctx, 31, 0x2EDA20u);
    ctx->pc = 0x2EDA1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F4710u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x2f4710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDA20u; }
    }
    if (ctx->pc != 0x2EDA20u) { return; }
    ctx->pc = 0x2EDA20u;
    // 0x2eda20: 0x8fa50004
    ctx->pc = 0x2eda20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2eda24:
    // 0x2eda24: 0x3404bd00
    ctx->pc = 0x2eda24u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 48384));
    // 0x2eda28: 0x42638
    ctx->pc = 0x2eda28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x2eda2c: 0x8e820008
    ctx->pc = 0x2eda2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2eda30: 0xde830000
    ctx->pc = 0x2eda30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2eda34: 0x458023
    ctx->pc = 0x2eda34u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2eda38: 0x2605fffd
    ctx->pc = 0x2eda38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x2eda3c: 0xae850024
    ctx->pc = 0x2eda3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 5));
    // 0x2eda40: 0x8e620018
    ctx->pc = 0x2eda40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2eda44: 0x1464000a
    ctx->pc = 0x2EDA44u;
    {
        const bool branch_taken_0x2eda44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x2EDA48u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x2eda44) {
            ctx->pc = 0x2EDA70u;
            goto label_2eda70;
        }
    }
    ctx->pc = 0x2EDA4Cu;
    // 0x2eda4c: 0x260202d
    ctx->pc = 0x2eda4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eda50: 0xc0bd19e
    ctx->pc = 0x2EDA50u;
    SET_GPR_U32(ctx, 31, 0x2EDA58u);
    ctx->pc = 0x2EDA54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDA58u; }
    }
    if (ctx->pc != 0x2EDA58u) { return; }
    ctx->pc = 0x2EDA58u;
    // 0x2eda58: 0xde830000
    ctx->pc = 0x2eda58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2eda5c: 0x2103c
    ctx->pc = 0x2eda5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eda60: 0x2103e
    ctx->pc = 0x2eda60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2eda64: 0x2605fff9
    ctx->pc = 0x2eda64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294967289));
    // 0x2eda68: 0x621825
    ctx->pc = 0x2eda68u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eda6c: 0xfe830000
    ctx->pc = 0x2eda6cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_2eda70:
    // 0x2eda70: 0x10a0003f
    ctx->pc = 0x2EDA70u;
    {
        const bool branch_taken_0x2eda70 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EDA74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2eda70) {
            ctx->pc = 0x2EDB70u;
            goto label_2edb70;
        }
    }
    ctx->pc = 0x2EDA78u;
    // 0x2eda78: 0xc0bd1c4
    ctx->pc = 0x2EDA78u;
    SET_GPR_U32(ctx, 31, 0x2EDA80u);
    ctx->pc = 0x2EDA7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F4710u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x2f4710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDA80u; }
    }
    if (ctx->pc != 0x2EDA80u) { return; }
    ctx->pc = 0x2EDA80u;
    // 0x2eda80: 0x1000003b
    ctx->pc = 0x2EDA80u;
    {
        const bool branch_taken_0x2eda80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EDA84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2eda80) {
            ctx->pc = 0x2EDB70u;
            goto label_2edb70;
        }
    }
    ctx->pc = 0x2EDA88u;
label_2eda88:
    // 0x2eda88: 0x3402bc00
    ctx->pc = 0x2eda88u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 48128));
    // 0x2eda8c: 0x21638
    ctx->pc = 0x2eda8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2eda90: 0x10a20019
    ctx->pc = 0x2EDA90u;
    {
        const bool branch_taken_0x2eda90 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x2eda90) {
            ctx->pc = 0x2EDAF8u;
            goto label_2edaf8;
        }
    }
    ctx->pc = 0x2EDA98u;
    // 0x2eda98: 0x3402bf00
    ctx->pc = 0x2eda98u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 48896));
    // 0x2eda9c: 0x21638
    ctx->pc = 0x2eda9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2edaa0: 0x10820017
    ctx->pc = 0x2EDAA0u;
    {
        const bool branch_taken_0x2edaa0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x2edaa0) {
            ctx->pc = 0x2EDB00u;
            goto label_2edb00;
        }
    }
    ctx->pc = 0x2EDAA8u;
    // 0x2edaa8: 0x3402f000
    ctx->pc = 0x2edaa8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 61440));
    // 0x2edaac: 0x21638
    ctx->pc = 0x2edaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2edab0: 0x10820011
    ctx->pc = 0x2EDAB0u;
    {
        const bool branch_taken_0x2edab0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x2edab0) {
            ctx->pc = 0x2EDAF8u;
            goto label_2edaf8;
        }
    }
    ctx->pc = 0x2EDAB8u;
    // 0x2edab8: 0x3402f100
    ctx->pc = 0x2edab8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 61696));
    // 0x2edabc: 0x21638
    ctx->pc = 0x2edabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2edac0: 0x1082000d
    ctx->pc = 0x2EDAC0u;
    {
        const bool branch_taken_0x2edac0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x2edac0) {
            ctx->pc = 0x2EDAF8u;
            goto label_2edaf8;
        }
    }
    ctx->pc = 0x2EDAC8u;
    // 0x2edac8: 0x3402ff00
    ctx->pc = 0x2edac8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65280));
    // 0x2edacc: 0x21638
    ctx->pc = 0x2edaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2edad0: 0x10820009
    ctx->pc = 0x2EDAD0u;
    {
        const bool branch_taken_0x2edad0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x2edad0) {
            ctx->pc = 0x2EDAF8u;
            goto label_2edaf8;
        }
    }
    ctx->pc = 0x2EDAD8u;
    // 0x2edad8: 0x3402f200
    ctx->pc = 0x2edad8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 61952));
    // 0x2edadc: 0x21638
    ctx->pc = 0x2edadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2edae0: 0x10820005
    ctx->pc = 0x2EDAE0u;
    {
        const bool branch_taken_0x2edae0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x2edae0) {
            ctx->pc = 0x2EDAF8u;
            goto label_2edaf8;
        }
    }
    ctx->pc = 0x2EDAE8u;
    // 0x2edae8: 0x3402f800
    ctx->pc = 0x2edae8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 63488));
    // 0x2edaec: 0x21638
    ctx->pc = 0x2edaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2edaf0: 0x14820015
    ctx->pc = 0x2EDAF0u;
    {
        const bool branch_taken_0x2edaf0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x2edaf0) {
            ctx->pc = 0x2EDB48u;
            goto label_2edb48;
        }
    }
    ctx->pc = 0x2EDAF8u;
label_2edaf8:
    // 0x2edaf8: 0x3402bf00
    ctx->pc = 0x2edaf8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 48896));
    // 0x2edafc: 0x21638
    ctx->pc = 0x2edafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2edb00:
    // 0x2edb00: 0x14a2000a
    ctx->pc = 0x2EDB00u;
    {
        const bool branch_taken_0x2edb00 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x2EDB04u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 8)));
        if (branch_taken_0x2edb00) {
            ctx->pc = 0x2EDB2Cu;
            goto label_2edb2c;
        }
    }
    ctx->pc = 0x2EDB08u;
    // 0x2edb08: 0x260202d
    ctx->pc = 0x2edb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edb0c: 0xc0bd19e
    ctx->pc = 0x2EDB0Cu;
    SET_GPR_U32(ctx, 31, 0x2EDB14u);
    ctx->pc = 0x2EDB10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2F4678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x2f4678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDB14u; }
    }
    if (ctx->pc != 0x2EDB14u) { return; }
    ctx->pc = 0x2EDB14u;
    // 0x2edb14: 0x2610fffc
    ctx->pc = 0x2edb14u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x2edb18: 0xde830000
    ctx->pc = 0x2edb18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2edb1c: 0x2103c
    ctx->pc = 0x2edb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2edb20: 0x2103e
    ctx->pc = 0x2edb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2edb24: 0x621825
    ctx->pc = 0x2edb24u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2edb28: 0xfe830000
    ctx->pc = 0x2edb28u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_2edb2c:
    // 0x2edb2c: 0x12000010
    ctx->pc = 0x2EDB2Cu;
    {
        const bool branch_taken_0x2edb2c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EDB30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2edb2c) {
            ctx->pc = 0x2EDB70u;
            goto label_2edb70;
        }
    }
    ctx->pc = 0x2EDB34u;
    // 0x2edb34: 0x260202d
    ctx->pc = 0x2edb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edb38: 0xc0bd1c4
    ctx->pc = 0x2EDB38u;
    SET_GPR_U32(ctx, 31, 0x2EDB40u);
    ctx->pc = 0x2EDB3Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F4710u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x2f4710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDB40u; }
    }
    if (ctx->pc != 0x2EDB40u) { return; }
    ctx->pc = 0x2EDB40u;
    // 0x2edb40: 0x1000000b
    ctx->pc = 0x2EDB40u;
    {
        const bool branch_taken_0x2edb40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EDB44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2edb40) {
            ctx->pc = 0x2EDB70u;
            goto label_2edb70;
        }
    }
    ctx->pc = 0x2EDB48u;
label_2edb48:
    // 0x2edb48: 0x3402be00
    ctx->pc = 0x2edb48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 48640));
    // 0x2edb4c: 0x21638
    ctx->pc = 0x2edb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2edb50: 0x14820007
    ctx->pc = 0x2EDB50u;
    {
        const bool branch_taken_0x2edb50 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2EDB54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2edb50) {
            ctx->pc = 0x2EDB70u;
            goto label_2edb70;
        }
    }
    ctx->pc = 0x2EDB58u;
    // 0x2edb58: 0x8e850008
    ctx->pc = 0x2edb58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2edb5c: 0x10a00005
    ctx->pc = 0x2EDB5Cu;
    {
        const bool branch_taken_0x2edb5c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EDB60u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x2edb5c) {
            ctx->pc = 0x2EDB74u;
            goto label_2edb74;
        }
    }
    ctx->pc = 0x2EDB64u;
    // 0x2edb64: 0xc0bd1c4
    ctx->pc = 0x2EDB64u;
    SET_GPR_U32(ctx, 31, 0x2EDB6Cu);
    ctx->pc = 0x2EDB68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F4710u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x2f4710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDB6Cu; }
    }
    if (ctx->pc != 0x2EDB6Cu) { return; }
    ctx->pc = 0x2EDB6Cu;
    // 0x2edb6c: 0x24020001
    ctx->pc = 0x2edb6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2edb70:
    // 0x2edb70: 0xdfbf00a0
    ctx->pc = 0x2edb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2edb74:
    // 0x2edb74: 0xdfbe0090
    ctx->pc = 0x2edb74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2edb78: 0xdfb70080
    ctx->pc = 0x2edb78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2edb7c: 0xdfb60070
    ctx->pc = 0x2edb7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2edb80: 0xdfb50060
    ctx->pc = 0x2edb80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2edb84: 0xdfb40050
    ctx->pc = 0x2edb84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2edb88: 0xdfb30040
    ctx->pc = 0x2edb88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2edb8c: 0xdfb20030
    ctx->pc = 0x2edb8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2edb90: 0xdfb10020
    ctx->pc = 0x2edb90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2edb94: 0xdfb00010
    ctx->pc = 0x2edb94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2edb98: 0x3e00008
    ctx->pc = 0x2EDB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDB9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ED824u: goto label_2ed824;
            case 0x2ED8B0u: goto label_2ed8b0;
            case 0x2ED8C4u: goto label_2ed8c4;
            case 0x2ED8E0u: goto label_2ed8e0;
            case 0x2ED96Cu: goto label_2ed96c;
            case 0x2ED984u: goto label_2ed984;
            case 0x2ED994u: goto label_2ed994;
            case 0x2ED9A4u: goto label_2ed9a4;
            case 0x2ED9D8u: goto label_2ed9d8;
            case 0x2ED9F8u: goto label_2ed9f8;
            case 0x2ED9FCu: goto label_2ed9fc;
            case 0x2EDA24u: goto label_2eda24;
            case 0x2EDA70u: goto label_2eda70;
            case 0x2EDA88u: goto label_2eda88;
            case 0x2EDAF8u: goto label_2edaf8;
            case 0x2EDB00u: goto label_2edb00;
            case 0x2EDB2Cu: goto label_2edb2c;
            case 0x2EDB48u: goto label_2edb48;
            case 0x2EDB70u: goto label_2edb70;
            case 0x2EDB74u: goto label_2edb74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2EDBA0u;
}
